/* Write a program to find the sum of the below series
x - (x^3)/3! + (x^5)/5! - (x^7)/7! + (x^9)/9!...
Input
0.5 5
Output
The sum is 0.4794 */
#include<stdio.h>

int input_n();
float input_x();
float find_sum(float x,int n);
void output(int n,float x,float sum);

int main(){
  int n;
  float x,sum;
  n = input_n();
  x = input_x();
  sum = find_sum(x,n);
  output(n,x,sum);
  return 0;
}

int input_n(){
  int n;
  printf("Enter n\n");
  scanf("%d",&n);
  return n;
}

float input_x(){
    float x;
    printf("Enter x\n");
    scanf("%f",&x);
    return x;
}

float find_sum(float x,int n){
  float term = x;
  float sum = 0.0;
  for(int i = 1;i <= n;i++){
    sum+=term;
    term = term * (x * x) * (-1) / ((2 * i + 1) * (2 * i));
  }
  return sum;
}

void output(int n,float x,float sum){
  printf("The sum of series with %d with x = %.2f is %.4f",n,x,sum);
}