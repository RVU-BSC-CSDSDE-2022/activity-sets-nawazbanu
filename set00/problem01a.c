/* Write a program to compute area of trapeziod given a/* Write a program to compute area of trapeziod given a,b,h
Formula is (a+b)/2*h */

#include<stdio.h>

int input();
int area(int a,int b,int h); // pass by value
void output(int a,int b,int h,int area);

int input(){
  int x;
  printf("Enter a,b,h \n");
  scanf("%d",&x);
  return x;
}

int find_area(int a,int b,int h){
  int area;
  area = ((a + b) / 2 )* h ;
  return area;
}

void output(int a ,int b ,int h,int area){
  printf("area with %d,%d and %d is %d",a,b,h,area);
}

int main(){
  int a,b,h,area;
  a = input();
  b = input();
  h = input();
  area = find_area(a,b,h);
  output(a,b,h,area);
  return 0;
}