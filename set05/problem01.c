// Write a program to find the distance between two points.
//input : 1.0 1.0  and 2.0 2.0
// The Distance between (1.0,1.0) and (2.0,2.0) is 1.0

#include<stdio.h>
#include<math.h>

struct _point {
  float x;
  float y;
};

typedef struct _point Point;

Point input();
void dist(Point a, Point b, float *res);
void output(Point a, Point b, float res);

int main(){
  Point a,b;
  float res;
  a = input();
  b = input();
  dist(a,b,&res);
  output(a,b,res);
  return 0;
}

Point input(){
  Point p;
  printf("Enter the first and second points \n");
  scanf("%f %f",&p.x,&p.y);
  return p;
}

void dist(Point a, Point b, float *res){
  *res = sqrt(pow(b.x - a.x , 2) + pow (b.y - a.y , 2));
  }

void output(Point a, Point b, float res){
  printf("The distance between (%0.1f,%0.1f) and (%0.1f ,%0.1f) is %0.1f",a.x,a.y,b.x,b.y,res);
}
