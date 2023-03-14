// Write a program to add n fractions
// input : 3   and 4  3  and 8  9  and 1  2
// output : 4/3 + 8/9 + 1/2 = 49/18

#include<stdio.h>
#include<math.h>

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
  
}