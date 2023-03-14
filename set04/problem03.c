// Write a program to find the `nCr` of given n and r
// input 6 3  output : for n = 6 and r = 3 ,nCr = 20

#include<stdio.h>

void input_n_and_r(int *n, int *r);
int nCr(int n, int r);
void output(int n, int r, int result);

int main(){
  int n,r;
  int result;
  input_n_and_r(&n,&r);
  result = nCr(n,r);
  output(n,r,result);
  return 0;
}

void input_n_and_r(int *n, int *r){
  printf("Enter the n and r value \n");
  scanf("%d %d",n,r);
}

int nCr(int n, int r){
  int nCr;
  int i,n_fact,r_fact,diff_fact,diff;
  diff = n - r;
  n_fact = 1;
  r_fact = 1;
  diff_fact = 1;
  for(i = 1;i <= n;i++){
    n_fact = n_fact * i;
  }
  for(i = 1;i <= r;i++){
    r_fact = r_fact * i;
  }
  for(i = 1;i <= diff;i++){
    diff_fact = diff_fact * i;
  }
  nCr = (n_fact) / (r_fact * diff_fact);
  return nCr;
}

void output(int n, int r, int result){
  printf("for n = %d and r = %d , nCr = %d ",n,r,result);
}
