/* Write a program to find the weight of  a jalebi
Formula = 0.8*sqrt(amount_of_sugar) + fourth_root(amount_of_color) + 0.8 *amount_of_flour. 
Function Declarations
Input
1 1 1
Output
The weight of the jalebi with amount_of_sugar 1.00, amount_of_color 1.00 and amount_of_flour 1.00 is 2.6 */

#include<stdio.h>
#include<math.h>

void input(float* amount_of_sugar,float* amount_of_color,float* amount_of_flour);
float weight_of_jalebi(float amount_of_sugar,float amount_of_color,float amount_of_flour);
void output(float amount_of_sugar,float amount_of_color,float amount_of_flour,float weight);

int main(){
  float amount_of_sugar, amount_of_color,amount_of_flour,weight;
  input(&amount_of_sugar,&amount_of_color,&amount_of_flour);
  weight = weight_of_jalebi(amount_of_sugar,amount_of_color,amount_of_flour);
  output(amount_of_sugar,amount_of_color,amount_of_flour,weight);
  return 0;
}

void input(float* amount_of_sugar,float* amount_of_color,float* amount_of_flour){
  printf("Enter amount_of_sugar ");
  scanf("%f",amount_of_sugar);
  printf("Enter amount_of_color ");
  scanf("%f",amount_of_color);
  printf("Enter amount_of_flour ");
  scanf("%f",amount_of_flour);
}

float weight_of_jalebi(float amount_of_sugar,float amount_of_color,float amount_of_flour){
  float weight;
  weight = 0.8 * sqrt(amount_of_sugar) + (amount_of_color)* (amount_of_color) * (amount_of_color) * (amount_of_color) + 0.8 *amount_of_flour;
  return weight;
}

void output(float amount_of_sugar,float amount_of_color,float amount_of_flour,float weight){
  printf("The weight of the jalebi with amount_of_sugar %.1f, amount_of_color %.1f and amount_of_flour %.1f is %.1f",amount_of_sugar,amount_of_color,amount_of_flour,weight);
}