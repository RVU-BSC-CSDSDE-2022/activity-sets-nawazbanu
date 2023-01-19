// Write a C program to find sum of all natural numbers until _n_

#include<stdio.h>

int input_n();
int sum_n_nos(int n);
void output(int n, int sum);

int input_n(){
  int n; 
  printf("Enter values ");
  scanf("%d",&n);
  return n;
}

int sum_n_nos(int n){
  n = (n * ( n + 1)) / 2;
  return n;
}

void output(int n, int sum){
  printf("The sum of %d natural numbers is %d  \n", n , sum);
  }

int main(){
  int n , sum;
  n = input_n();
  sum = sum_n_nos(n);
  output( n, sum);
  return 0;
}