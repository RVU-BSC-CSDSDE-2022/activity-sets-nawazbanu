// Write a program to find the area of a triangle.
// input 2,3 
//The area of triangle wwith base = 2.000000 and altitude = 3.000000 is 3.000000

#include<stdio.h>
#include<math.h>


typedef struct _triangle {
	float base, altitude, area;
} Triangle;

Triangle input_triangle();
void find_area(Triangle *t);
void output(Triangle t);

Triangle input_triangle(){
  Triangle t;
  printf("Enter base and altitude");
  scanf("%f %f",&t.base,&t.altitude);
  return t;
  }  

void find_area(Triangle *t){
  float area;
  t -> area = (0.5) * (t -> base)*(t -> altitude);
}

void output(Triangle t){
  printf("The area of triangle with base = %f and altitude = %f is %f",t.base,t.altitude,t.area);
}

int main(){
  Triangle t;
  t = input_triangle();
  find_area(&t);
  output(t);
  return 0;
}