/* Write a program to compute area of trapeziod given a,b,h
Formula is (a+b)/2*h */

#include<stdio.h>

void input();
//int find_area(int a,int b,int area); // pass by value
void find_area(int a,int b,int *area);  
void output(int area);
