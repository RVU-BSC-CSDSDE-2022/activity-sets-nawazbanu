// Write a program to evaluate a polynomial at a given point using [Horner's Method]
// input : 1 and 1 1 and 1 
//H(1, 1, 1) = 1.00 + 1.00 * 1.00^1 = 2.0000000

#include<stdio.h>
#include<math.h>

int input_degree();
void input_coefficients(int n, float a[n]);
float input_x();
float evaluate_polynomial(int n, float a[n], float x);
void output(int n, float a[n], float x, float result);

int main(){
  int n;
  float x,a[n],result = 1;
  n = input_degree();
  input_coefficients(n,a);
  x = input_x();
  result = evaluate_polynomial(n,a,x);
  output(n,a,x,result);
  return 0;
  }

int input_degree(){
  int n;
  printf(" ");
  scanf("%d",&n);
  return n;
}

void input_coefficients(int n, float a[n]){
  int i;
  for(i = 0; i < n + 1; i++){
    printf("Enter the coefficient ");
    scanf("%f",&a[i]);
  }
}

float input_x(){
  float x;
  printf("Enter the value of x :");
  scanf("%f",&x);
  return x;
}

float evaluate_polynomial(int n, float a[n], float x){
  int i;
  float result;
  result = a[0];
  for(i = 1;i < n + 1;i++){
    result = result * x + a[i];
  }
  return result;
}

void output(int n, float a[n], float x, float result){
  int i;
  printf("H(%d, ",n);
  for(i = 0;i < n;i++){
    printf("%.0f, ",a[i]);
  }
  printf("%.0f) = %.0f \n",a[i],result);
}