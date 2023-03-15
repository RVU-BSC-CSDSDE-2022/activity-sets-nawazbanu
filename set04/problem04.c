// Write a program to evaluate a polynomial at a given point using [Horner's Method]
// input : 1 and 1 1 and 1 
//H(1, 1, 1) = 1.00 + 1.00 * 1.00^1 = 2.0000000

#include<stdio.h>

int input_degree();
void input_coefficients(int n, float a[n]);
float input_x();
float evaluate_polynomial(int n, float a[n], float x);
void output(int n, float a[n], float x, float result);

int main(){
  
}