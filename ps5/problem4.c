/* Write a program to find the kachori with largest volume from n given kachoris
        Formula for weight_of_stuffing = fourth_root((radius)^2+(width)^2)
       if type == 'b'
      volume of kachori = (radius+width+weight_of_stuffing)
     if type == 'f'
     volume of kachori = (radius*width*weight_of_stuffing) 
Input:
Enter the number of kachori:
2
Enter the radius and width of kachori 1:
1 1 b
Enter the radius and width of kachori 2:
2 2 f

Output
The kachori with the largest volume is the kachori with radius 2 width 2 weight_of_stuffing 1.41 and type f and volume 6.72*/

#include<stdio.h>
#include<math.h>

typedef struct kachori{
    float radius, width, weight_of_stuffing, volume;
    char type;
} Kachori;

int input_num_kachoris();
Kachori input();
void input_n_kachoris(int n, Kachori k[n]);
float calculate_weight_of_stuffing(Kachori k);
void calculate_weight_of_n_stuffing(int n, Kachori k[n]);
float calculate_volume(Kachori k);
void calculate_n_volume(int n , Kachori k[n]);
Kachori find_largest_volume(int n, Kachori k[n]);
void output(int n, Kachori k[n],Kachori largest);

int main(){
  int n;
  n = input_num_kachoris();
  Kachori k[n];
  input_n_kachoris(n,k);
  calculate_weight_of_n_stuffing(n,k);
  calculate_n_volume(n,k);
  Kachori largest = find_largest_volume(n,k);
  output(n,k,largest);
  return 0;
}

int input_num_kachoris(){
  int n;
  printf("Enter number of kachoris");
  scanf("%d",&n);
  return n;
}

Kachori input(){
  Kachori k;
  printf("Enter the radius and width of kachori and type");
  scanf("%f %f %c",&k.radius,&k.width,&k.type);
  return k;
}

void input_n_kachoris(int n, Kachori k[n]){
  for(int i = 0;i < n;i++){
    k[i] = input();
  }
}

float calculate_weight_of_stuffing(Kachori k){
  return pow(pow(k.radius,2)+pow(k.width,2),0.25);
}

void calculate_weight_of_n_stuffing(int n, Kachori k[n]){
  for(int i = 0; i < n;i++){
    k[i].weight_of_stuffing = calculate_weight_of_stuffing(k[i]);
  }
}

float calculate_volume(Kachori k){
  if(k.type == 'b'){
   return k.radius + k.width + k.weight_of_stuffing;
  }else{
    return k.radius * k.width * k.weight_of_stuffing;
  }
}

void calculate_n_volume(int n , Kachori k[n]){
  for(int i = 0; i < n;i++){
    k[i].volume = calculate_volume(k[i]);
  }
}

Kachori find_largest_volume(int n, Kachori k[n]){
  Kachori largest = k[0];
  for(int i = 1;i < n;i++){
    if(largest.volume < k[i].volume){
      largest = k[i];
    }
  }
  return largest;
}

void output(int n, Kachori k[n],Kachori largest){
printf("The kachori with the largest volume is the kachori with radius %f width %f weight_of_stuffing %.2f and type %c and volume %.2f",largest.radius,largest.width,largest.weight_of_stuffing,largest.type,largest.volume);
}