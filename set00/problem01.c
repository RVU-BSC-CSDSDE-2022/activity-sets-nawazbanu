/* Write a program to compute area of trapeziod given a,b,h
Formula is (a+b)/2*h */

#include<stdio.h>

void input(int *a, int *b, int *h);
//int find_area(int a,int b,int area); // pass by value
void find_area(int a,int b,int h,int *area);  
void output(int area);

void input(int *a,int *b,int *h){
  printf("Enter a,b,h \n");
  scanf("%d %d %d",a,b,h);
}

void find_area(int a,int b,int h,int *area){
  *area = ((a + b) / 2 )* h ;
}

void output(int area){
  printf("area is %d",area);
}

int main(){
  int a,b,h,area;
  input(&a,&b,&h);
  find_area(a,b,h,&area);
  output(area);
  return 0;
}