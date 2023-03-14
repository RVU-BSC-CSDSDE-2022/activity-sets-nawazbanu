// Write a program to find the smallest of three fractions
// input : 1 2 , 1 3 and 1 4       output : The smallest of 1/2, 1/3 and 1/4 is 1/4

#include<stdio.h>
#include<math.h>

typedef struct {
    int num, den;
} Fraction;

Fraction input(Fraction f1,Fraction f2,Fraction f3);
float smallest(Fraction *f1,Fraction *f2,Fraction *f3);
void output(Fraction  smallest);

Fraction input(Fraction f1,Fraction f2,Fraction f3){
  Fraction num1,den1,num2,den2,num3,den3;
  printf("Enter num1 and den1 \n");
  scanf("%d %d",&num1,&den1);
  printf("Enter num2 and den2 \n");
  scanf("%d %d",&num2,&den2);
  printf("Enter num3 and den3 \n");
  scanf("%d %d",&num3,&den3);
  return Fraction;
}

float smallest(Fraction *f1,Fraction *f2,Fraction *f3){
  float val1 = num1->f/den1;
  float val2 = num2/den2;
  float val3 = num3/den3;
  if(val1 < val2 && val1 < val3){
    return val1;
  }else{
  if(val2 < val3){
    return val2;
  }
    return val3;
    }
  return smallest;
  }

void output(Fraction smallest){
  printf("The smallest %d/%d , %d/%d and %d/%d is %d/%d",num1,den1,num2,den2,num3,den3,smallest);
}

int main(){
  int Fraction,smallest;
  Fraction = input();
  smallest = find_smallest();
  output(smallest);
  return 0;
}
