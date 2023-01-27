// Write a program to find Sum of composite number in an array of different numbers entered by the user
// input 1 2 7 8 12 o/p : 20

#include<stdio.h>

int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);

int input_array_size(){
  int x;
  printf("enter the array size \n");
  scanf("%d",&x);
  return x;
}

void input_array(int n, int a[n]){
  int i;
  for(int i = 0;i < n;i++){
    printf("Enter array elements \n");
    scanf("%d",&a[i]);
  }
}

int sum_composite_numbers(int n, int a[n]){
  int i,j,sum = 0,count = 0;
  for(int i = 0;i < n;i++){
    for(int j = 1;j <= a[i];j++){
    if(a[i] % j == 0){
      count++;
      }
    }
    if(count > 2){
    sum = sum + a[i];
      }
    }
  return sum;
}

void output(int sum){
   printf("%d \n",sum);
}


int main(){
  int n,sum;
  n = input_array_size();
  int a[n];
  input_array(n,a);
  sum = sum_composite_numbers(n,a);
  output(sum);
  return 0;
}