/*  Write a program to find borga(x) given x.
The formula for finding borga(x) is `1 + (x^1)/3! + (x^2)/5! + (x^3)/7! + ...`. Stop when the next term is less 0.000001 using four functions.
input 5  output borga(5) = 2.699337  */

#include<stdio.h>
#include<math.h>

int input(int x);
float borga_X(int x);
void output(int x, float result);

int main(){
  int x;
  float result;
  x = input(x);
  result = borga_X(x);
  output(x,result);
  return 0;
}

int input(int x){
  printf(" ");
  scanf("%d",&x);
  return x;
}

float borga_X(int x){
  float fact,pow,y,borga;
  int i;
  fact = 1.0;
  pow = 1.0;
  y = 0.0;
  borga = 0.0;
  i = 1;
  while(i){
    y = pow/fact;
    fact = fact * (i * 2)  (i * 2 + 1);
    pow = pow * x;
    i++;
    borga = y + borga;
    if(y < 0.000001){
      break;
    }
  }
  return borga;
}


void output(int x, float result){
  printf("borga %d = %0.01f",x,result);
}
