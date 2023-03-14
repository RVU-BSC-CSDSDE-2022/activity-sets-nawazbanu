//Write a program to add two fractions
//input : 9 6 and 5 6  output : 9/6 + 5/6 = 7/3

#include<stdio.h>
#include<math.h>

typedef struct {
    int num, den;
} Fraction;

Fraction input_fraction();
int find_gcd(int a, int b);
Fraction add_fractions(Fraction f1, Fraction f2);
void output(Fraction f1, Fraction f2, Fraction f3, Fraction sum)

int main(){
  int a = input_fraction();
  int b = input_fraction();
  int gcd = find_gcd(a , b);
  sum = add_fractions(f1,f2);
  output(f1,f2,sum);
  return 0;
}

Fraction input_fraction(){
  Fraction x;
  printf("Enter the num1 and den1");
  scanf("%d %d \n",&num1,&den1);
  printf("Enter the num2 and den2");
  scanf("%d %d \n",&num2,&den2);
  return x;
}

int find_gcd(int a, int b){
  a = (num1 * den2) + (den1 * num2);
  b = den1 * den2;
  for(i = 1; i <= a && i <= b){
    if(a % i == 0 && b % i == 0){
      gcd = i;
    }
    return gcd;
  }
}

Fraction add_fractions(Fraction f1, Fraction f2){
  Fraction f3;
  sum = f1 + f2;
  return sum;
}

void output(Fraction f1, Fraction f2, Fraction f3, Fraction sum){
  printf("(%d / %d) + (%d / %d) = %d / %d",f1,f2,f3,sum);
}
