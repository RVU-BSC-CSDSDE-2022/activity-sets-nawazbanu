// Write a program to find sum of n fractions where the denominator of the fraction is even in its reduced form

#include<stdio.h>

int array_size();
void input(int num,int den,int n);
float sum_of_fractions(int num,int den,int n);
void output(float sum);

int array_size(){
  int n;
  printf("Enter the array size");
  scanf("%d",&n);
  return n;
}

void input(int num,int den,int n){
  for(int i = 0;i < n;i++){
  printf("Enter the num and den");
  scanf("%d %d",&num,&den);
  }
}

float sum_of_fractions(int num,int den,int n){
  float sum = 0;
  for(int i = 1;i <= n;i++){
    den = 2 * i;
    if(den % 2 == 0){
      sum += (num/den);
    
   }
  }
  return sum;
}

void output(float sum){
  printf("The sum of fractions is %f",sum);
}

int main(){
  int n;
  float sum;
  int num,den;
  n = array_size();
  input(num,den,n);
  sum = sum_of_fractions(num,den,n);
  output(sum);
  return 0;
}