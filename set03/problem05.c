// Write a program to find all the prime numbers between 2 to n Eratosthenes Sieve method.
// input = 35 output is 2, 3, 7, 11, 13, 19, 23, 29, 31

#include<stdio.h>

int input_array_size();
void init_array(int n, int a[n];
void erotosthenes_sieve(int n, int a[n]);
void output(int n, int a[n]);

int input_array_size(){ 
  int n;
  printf("Enter the maximum number for an array ");
  scanf("%d",&n);
  return n;
}

void init_array(int n, int a[n]){
  for(i = 0 ;i < n;i++){
    a[i] = i;
  }
}

void erotosthenes_sieve(int n, int a[n]){
  for(int i = 2; i < n;i++){
    i = a[i];
    if(num != 0){
      for(int j = i * i ; j <= n; j += i){
        a[j] = 0 ;
      }
    }
  }
}

void output(int n, int a[n]){
  for(i = 0;i < n;i++){
    if(a[i] != 0 && a[i] != 1){
      printf("%d",a[i])
    }
  }
}

int main(){
  int n,a[n];
  n = input_array_size();
  init_array(n,a);
  erotosthenes_sieve(n,a);
  output(n , a);
  return 0;
}