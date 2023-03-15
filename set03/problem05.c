// Write a program to find all the prime numbers between 2 to n Eratosthenes Sieve method.
// input = 35 output is 2, 3, 7, 11, 13, 19, 23, 29, 31

#include<stdio.h>
#include<stdbool.h>
#include<string.h>

int input_array_size();
void init_array(int n, int a[n];
void erotosthenes_sieve(int n, int a[n]);
void output(int n, int a[n]);

int input_array_size(){
  int element;
  printf("Enter the maximum element ");
  scanf("%d",&element);
  return element;
}

void init_array(int n, int a[n]){
  for(i = 0 ;i < n;i++){
    a[i] = i;
  }
}

void erotosthenes_sieve(int n, int a[n]){
  for(int i = 2; i < n;i++){
    if(prime[i] = true){
      for(int j = i * i ; j <= n; j += i){
        prime[j] = false ;
      }
    }
  }
}

void output(int n, int a[n]){
  for(i = 0;i < n;i++){
    if(prime[i]){
      printf("%d",n)
    }
  }
}

int main(){
  int n,a[n];
  n = input_array_size();
  init_array(n,a[n]);
  erotosthenes_sieve(n,a[n]);
  output(n , a[n]);
  return 0;
}