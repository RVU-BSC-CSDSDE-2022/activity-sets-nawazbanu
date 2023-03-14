// Write a program that will take n number and find the sum of their squares
#include<stdio.h>

int input();
int is_sum(int n);
void output(int n,int sum);

int input(){
  int n;
  printf("Enter n");
  scanf("%d",&n);
  return n;
}

int is_sum(int n){
  int sum = 0;
  for(int i = 1;i <= n;i++){
    sum += (i * i);
  }
  return sum;
}

void output(int n,int sum){
  printf("Sum of %d squares numbers are %d",n,sum);
}

int main(){
  int n,sum;
  n = input();
  sum = is_sum(n);
  output(n,sum);
  return 0;
}