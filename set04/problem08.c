// Write a program to add n fractions
// input : 3   and 4  3  and 8  9  and 1  2
// output : 4/3 + 8/9 + 1/2 = 49/18

#include<stdio.h>

typedef struct fraction
{
    int num, den;
} Fraction;

int input_n();
Fraction input_fraction();
void input_n_fractions(int n, Fraction f[n]);
int find_gcd(int a, int b);
Fraction add_fractions(Fraction f1, Fraction f2);
Fraction add_n_fractions(int n, Fraction f[n]);
void output(int n, Fraction f[n], Fraction sum);

int main(){
  int n;
  Fraction f[n],sum;
  n = input_n();
  input_n_fractions(n,f);
  sum = add_n_fractions(n,f);
  output(n,f,sum);
  return 0;  
}

int input_n(){
  int n;
  printf("Enter the arrsy size \n");
  scanf("%d",&n);
  return n;
}

Fraction input_fraction(){
  Fraction f;
  printf("Enter the num and den \n");
  scanf("%d %d",&f.num,&f.den);
  return f;
}

void input_n_fractions(int n, Fraction f[n]){
  int i;
  for(i = 0; i < n; i++){
    f[i] = input_fraction();
  }
}

int find_gcd(int a, int b){
  int i,gcd;
  for(i = 1; i <= a || i <= b;i++){
    if(a % i == 0 && b % i == 0){
      gcd = i;
    }
  }
  return gcd;
}

Fraction add_fractions(Fraction f1, Fraction f2){
  Fraction res={0,0};
  res.num = f1.num * f2.den + f2.num * f1.den;
  res.den = f1.den * f2.den;
  int gcd = find_gcd(res.num,res.den);
  res.num /= gcd;
  res.den /= gcd;
  return res;
  }

Fraction add_n_fractions(int n, Fraction f[n]){
  Fraction result = {f[0].num,f[0].den};
  int i;
  for(i = 1;i < n; i++){
    result = add_fractions(f[i],result);
  }
  for(i = 1;i <= result.num || i <= result.den;i++){
    if(result.num % i == 0 && result.den % i == 0){
      result.num = result.num/i;
      result.den = result.den/i;
    }
  }
  return result;
  }

void output(int n, Fraction f[n], Fraction sum){
  int i;
  for(i = 0;i < n;i++){
    printf("%d/%d + ",f[i].num,f[i].den);
  }
  printf("=%d/%d \n",sum.num,sum.den);
}