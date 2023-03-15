/*Write a program to find the sum of perimeters of n different rasgullas
Formula: White rasgulla = 2*(radius/height)*pi
Brown Rasgulla = 2*(height/radius)^2*pi
Input
Enter the number of Rasgulla:
2
Enter the coordinates of radius, height, colour for Rasagulla 1:
1 1 b
Enter the coordinates of radius, height, colour for Rasagulla 2:
1 1 w
Output
The sum of perimeters is 12.56 */

#include<stdio.h>
#include<math.h>

typedef struct rasgulla{
float radius,height;
char color;
} Rasgulla;

int input_num_of_ras();
float find_perimeter(Rasgulla r);
float find_n_perimeter(int n,Rasgulla r[n]);
void output(int n, Rasgulla r[n], float perimeter);

int main(){
  int i,n;
  float perimeter;
  n = input_num_of_ras();
  Rasgulla r[n];
  for(i = 0; i < n;i++){
  printf("Enter the coordinates of radius,height and color of rasagulla %d \n",i + 1);
   scanf("%f %f %c",&r[i].radius,&r[i].height,&r[i].color);
  }
  perimeter = find_n_perimeter(n,r);
  output(n,r,perimeter);
  return 0;
}

int input_num_of_ras(){
  int n;
  printf("Enter number of rasgulla");
  scanf("%d",&n);
  return n;
}

float find_perimeter(Rasgulla r){
  float perimeter;
    if(r.color == 'w'){
      perimeter = 2*(r.radius/r.height)*M_PI;
    }
    else if(r.color == 'b'){
      perimeter = 2*pow((r.height/r.radius),2)*M_PI;
    
    }
  return perimeter;
}

float find_n_perimeter(int n,Rasgulla r[n]){
  float perimeter = 0;
  int i;
  for(i = 0; i < n;i++){
    perimeter = perimeter + find_perimeter(r[i]);
  }
  return perimeter;
}

void output(int n, Rasgulla r[n], float perimeter){
  printf("The sum of perimeters %.2f",perimeter);
}
