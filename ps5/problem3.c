/* Write a program to find the sum of  n terms of the below  dingdong series
	1-x+(x^2/2!)-(x^3/3!)+(x^4/4!)...
Input
0.5 5
Output
The sum is 0.607 */

#include<stdio.h>

int input_n();
float input_x();
float find_sum(int n,float x);
void output(float sum);

int main(){
  int n;
  float x,sum;
  n = input_n();
  x = input_x();
  sum = find_sum(n,x);
  output(sum);
  return 0;
}

int input_n(){
  int n;
  printf("Enter n \n");
  scanf("%d",&n);
  return n;
}

float input_x(){
  float x;
  printf("Enter x: ");
  scanf("%f",&x);
  return x;
}

float find_sum(int n,float x){
  int i;
  float term = 1.0;
  float sum=0.0;
  for(i = 1;i <= n;i++){
    sum += term;
    term = -term * x / i;
  }
  
  return sum;
}

void output(float sum){
  printf("The output is %.3f",sum);
}