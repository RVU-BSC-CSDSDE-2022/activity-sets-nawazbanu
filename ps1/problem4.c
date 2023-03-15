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
  Rasgulla r,r[n];
  int n;
  float perimeter;
  n = input_num_of_ras();
  
  
}
int input_num_of_ras(){
  int n;
  printf("Enter number of rasgulla");
  scanf("%d",&n);
  return n;
}

float find_perimeter(Rasgulla r){
  int n;
  for(int i = 0;i <= n;i++){
    printf("Enter the coordinates of radius,height,colour for Rasagulla \n");
    scanf("%f",&n);
  }
  return perimeter;
}

float find_n_perimeter(int n,Rasgulla r[n]){
  float perimeter;
  for(int i = 0; i < n;i++){
  find_perimeter(r,r[n]);
  if(rasgulla == white){
    return 2*(radius/height)*pi;
  }
    else if(rasgulla == brown){
      return 2*(height/radius)^2*pi;
    }
    return perimeter;
}

void output(int n, Rasgulla r[n], float perimeter){
  printf("The sum of perimeters %f",perimeter);
}
