// Write a program to find the smallest of three fractions
// input : 1 2 , 1 3 and 1 4       output : The smallest of 1/2, 1/3 and 1/4 is 1/4

#include<stdio.h>
#include<math.h>

typedef struct {
    int num, den;
} Fraction;

void input_frac(Fraction *f1,Fraction *f2,Fraction *f3);
Fraction smallest_frac(Fraction f1,Fraction f2,Fraction f3);
void output(Fraction f1,Fraction f2,Fraction f3,Fraction min);

int main(){
  Fraction f1,f2,f3,min;
  input_frac(&f1,&f2,&f3);
  min = smallest_frac(f1,f2,f3);
  output(f1,f2,f3,min);
  return 0;
}

void input_frac(Fraction *f1,Fraction *f2,Fraction *f3){
  printf("Enter the num and den of f1 \n");
  scanf("%d %d",&f1->num,&f1->den);
  printf("Enter the num and den of f2 \n");
  scanf("%d %d",&f2->num,&f2->den);
  printf("Enter the num and den of f3 \n");
  scanf("%d %d",&f3->num,&f3->den);
}

Fraction smallest_frac(Fraction f1,Fraction f2,Fraction f3){
  Fraction min;
  float val1 = f1.num/f1.den;
  float val2 = f2.num/f2.den;
  float val3 = f3.num/f3.den;

  if(val1 < val2 && val1 < val3){
    min = f1;
  }
  else if(val2 < val3){
    min  = f2;
  }else{
    min = f3;
  }
  return min;
}

void output(Fraction f1,Fraction f2,Fraction f3,Fraction min){
  printf("The smallest of %d/%d , %d/%d and %d/%d is %d/%d",f1.num,f1.den,f2.num,f2.den,f3.num,f3.den,min.num,min.den);
}
