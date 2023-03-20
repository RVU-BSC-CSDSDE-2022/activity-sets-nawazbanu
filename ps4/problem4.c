/* Write a program to find the tastiest Yellow Samosa, and Orange Samosa given n different samosas. 
	Formula for height =square_root((width)^2+(radius)^2)
 A samosa s1 is tastier than the samosa s2 if: area of s1> area of s2 
        Area of a Yellow samosa = (radius + width + height)
        Area of a Orange samosa = (radius*width*height)
Input
Enter the number of samosas:
2
Enter the radius and width of samosa 1:
1 1 o
Enter the radius and width of samosa 2:
1 1 y
Output
The tastiest yellow samosa is the samosa with radius 1, width 1, height 1.41, area 3.41.
The tastiest orange samosa is the samosa with radius 1, width 1, height 1.41, area 1.41.*/

#include<stdio.h>
#include<math.h>

typedef struct samosa{
    float radius, width, height, area;
    char color;
} Samosa;

int input_num_of_samosa();
Samosa input_samosa();
void input_n_samosa(int n, Samosa s[n]);
float find_height(Samosa s);
void find_n_height(int n, Samosa s[n]);
float find_area(Samosa s);
void find_n_area(int n, Samosa s[n]);
void find_tastiest(int n, Samosa s[n], Samosa* y_tastiest,Samosa* o_tastiest);
void output(int n, Samosa s[n], Samosa y_tastiest,Samosa o_tastiest);

int main(){
  int n;
  n = input_num_of_samosa();
  Samosa s[n];
  input_n_samosa(n,s);
  find_n_height(n,s);
  find_n_area(n,s);
  Samosa y_tastiest,o_tastiest;
  find_tastiest(n,s,&y_tastiest,&o_tastiest);
  output(n,s,y_tastiest,o_tastiest);
  return 0;
}

int input_num_of_samosa(){
  int n;
  printf("Enter number of samosas");
  scanf("%d",&n);
  return n;
}

Samosa input_samosa(){
  Samosa s;
  printf("Enter the radius and width and color of samosa");
  scanf("%f %f %c",&s.radius,&s.width,&s.color);
  return s;
}

void input_n_samosa(int n, Samosa s[n]){
  for(int i = 0;i < n;i++){
    s[i] = input_samosa();
  }
}

float find_height(Samosa s){
  float height;
  height = sqrt(pow(s.width,2) + pow(s.radius,2));
  return height;
}

void find_n_height(int n, Samosa s[n]){
  for(int i = 0;i < n;i++){
    s[i].height = find_height(s[i]);
  }
}

float find_area(Samosa s){
  if(s.color == 'y'){
     return s.radius + s.width + s.height;
  }
  else{
    return s.radius * s.width * s.height;
  }
}

void find_n_area(int n, Samosa s[n]){
  for(int i = 0; i < n;i++){
    s[i].area = find_area(s[i]);
  }
}

void find_tastiest(int n, Samosa s[n], Samosa* y_tastiest,Samosa* o_tastiest){
  *y_tastiest = s[0];
  *o_tastiest = s[0];
  for(int i = 1;i < n;i++){
    if(s[i].color == 'y'){
      if(s[i].area > y_tastiest -> area){
        *y_tastiest = s[i];
      }
    }
    else if(s[i].color == 'o'){
      if(s[i].area > o_tastiest -> area){
        *o_tastiest = s[i];
      }
    }
  }    
}

void output(int n, Samosa s[n], Samosa y_tastiest,Samosa o_tastiest){
printf("The tastiest yellow samosa is the samosa with radius %.2f width %.2f height %.2f area %.2f \n",y_tastiest.radius,y_tastiest.width,y_tastiest.height,y_tastiest.area);
printf("The tastiest orange samosa is the samosa with radius %.2f width %.2f height %.2f area %.2f",o_tastiest.radius,o_tastiest.width,o_tastiest.height,o_tastiest.area);

}