/* Write a program to find the sum of the below series
	1 - (x^2)/2! + (x^4)/4! - (x^6)/6! + (x^8)/8!...
Input
0.5 5
Output
The sum is 0.8775 */
#include<stdio.h>

int input_n();
float input_x();
float find_sum(float x,int n);
void output(int n,float sum);

int main(){
  int n;
  float x,sum;
  n = input_n();
  x = input_x();
  sum = find_sum(x,n);
  output(n,sum);
  return 0;
}

int input_n(){
  int n;
  printf("Enter n ");
  scanf("%d",&n);
  return n;
}

float input_x(){
  float x;
  printf("Enter x");
  scanf("%f",&x);
  return x;
}

float find_sum(float x,int n){
  float term =x;
  float sum = 1;
  for(int i = 1;i <= n;i++){
  sum = sum + term;
  term = term * (x * x) * (-1) / (2 * i) * (2 * i -1);
  }
  return sum;
}

void output(int n,float sum){
  printf("The sum is %f",sum);
}