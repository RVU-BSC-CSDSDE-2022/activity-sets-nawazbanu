// Write a program that will take n number and find the sum of their squares
#include<stdio.h>

int input_array_size();
void input_array(int n,int a[n]);
int sum_of_squares(int n,int a[n]);
void output_result(int n,int a[n],int result);

int input_array_size(){
  int n;
  printf("Enter array size");
  scanf("%d",&n);
  return n;
}

void input_array(int n,int a[n]){
  for(int i = 0;i < n;i++){
    printf("Enter the numbers");
    scanf("%d",&a[i]);
  }
}

int sum_of_squares(int n,int a[n]){
  int i;
  int sum = 0,result;
  for(i = 0;i < n;i++){
    sum += a[i] * a[i];
    result = sum;
  }
  return result;
}

void output_result(int n,int a[n],int result){
  int i;
  for(i = 0;i < n;i++){
    printf(" %d+",a[i]);
  }
  printf("%d is %d \n",a[i],result);
}

int main(){
  int n;
  n = input_array_size();
  int a[n],result;
  input_array(n,a);
  result = sum_of_squares(n,a);
  output_result(n,a,result);
  return 0;
}