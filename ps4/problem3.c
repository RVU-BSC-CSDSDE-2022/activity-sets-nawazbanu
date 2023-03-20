/* Write a program to find the sum of n  terms  of the below  dingdong series
	1+x+(x^2/2!)+(x^3/3!)+(x^4/4!)...
Input
0.5 8
Output
The sum is 1.6487 */

#include<stdio.h>

int input_n();
float input_x();
int find_sum(float x,int n);
void output(int n,float term);

int main(){
  int n;
  n = input_n();
  float x;
  x = input_x();
  float term;
  term = find_sum(x,n);
  output(n,term);
  return 0;
}

int input_n(){
  int n;
  printf(" ");
  scanf("%d",&n);
  return n;
}

float input_x(){
  float x;
  printf(" ");
  scanf("%f",&x);
  return x;
}

int find_sum(float x,int n){
  float term = 1 ,sum = 1;
  for(int i = 1;i <= n;i++){
    term = term * x / i;
    sum += term;
  }
  return sum;
}

void output(int n,float term){
  printf("The sum is %.4f",term);
}