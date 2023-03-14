/* Write a program to compute area of trapeziod given a,b,h
Formula is (a+b)/2*h */

#include<stdio.h>

void input();
//int find_area(int a,int b,int area); // pass by value
void find_area(int a,int b,int *area);  
void output(int area);

void input(){
  int a,b,h;

void input(){
  int a,b,h;
  printf("Enter a,b,h");
  scanf("%d %d %d",&a,&b,&h);
}

void find_area(int a,int b,int *area){
  int h;
  *area = ((a + b) / 2 )* h ;
}

void output(int area){
  printf("area is %d",area);
}

int main(){
  int a,b,area;
  input(a,b);
  find_area(a,b,&area);
  output(area);
  return 0;
}