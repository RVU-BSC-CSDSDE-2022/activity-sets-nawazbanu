// Write a program that will take n number and find the sum of their squares
#include<stdio.h>

int input();
void is_sum();
void output(int sum);

int input(){
  int n;
  printf("Enter n");
  scanf("%d",&n);
  return n;
}

void is_sum(){
  int sum = 0,n;
  for(int i = 1;i >= n;i++){
    sum += (i * i);
  }
}

void output(int sum){
  printf("Sum of squares are %d",sum);
}

int main(){
  int n,sum;
  n = input();
  is_sum();
  output(sum);
  return 0;
}