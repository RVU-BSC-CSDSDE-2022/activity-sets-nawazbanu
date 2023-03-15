//Write a program to add two fractions
//input : 9 6 and 5 6  output : 9/6 + 5/6 = 7/3

#include<stdio.h>

typedef struct {
    int num, den;
} Fraction;

Fraction input_fraction();
int find_gcd(int a, int b);
Fraction add_fractions(Fraction f1, Fraction f2);
void output(Fraction f1, Fraction f2, Fraction sum);

int main(){
  Fraction f1,f2,sum;
  f1 = input_fraction();
  f2 = input_fraction();
  sum = add_fractions(f1,f2);
  output(f1,f2,sum);
  return 0;
}

Fraction input_fraction(){
  Fraction f;
  printf("Enter the num and den \n");
  scanf("%d %d",&f.num,&f.den);
  return f;
}

int find_gcd(int a, int b){
  int i,gcd;
  for(i = 1; i <= a || i <= b;i++){
    if(a % i == 0 && b % i == 0){
      gcd = i;
    }
    return gcd;
  }
}

Fraction add_fractions(Fraction f1, Fraction f2){
  Fraction sum;
  sum.num = f1.num * f2.den + f2.num * f1.den;
  sum.den = f1.den * f2.den;
  int gcd = find_gcd(sum.num,sum.den); 
  sum.num /= gcd;
  sum.den /= gcd;
  return sum;
}

void output(Fraction f1, Fraction f2, Fraction sum){
  printf("(%d / %d) + (%d / %d) = %d / %d",f1.num,f1.den,f2.num,f2.den,sum.num,sum.den);
}
