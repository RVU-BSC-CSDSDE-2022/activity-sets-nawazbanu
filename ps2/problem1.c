/* Write a program to find the weight of  a kalakand
Formula = 0.8*sqrt(quantity_of_milk)  + quantity_of_ sugar/4 + 0.8 * wight_of_dry_fruits. 
Input
1 1 1
Output
The volume of the kalakand with quantity_of_milk 1.00, qunatity_of_sugar 1.00 and weight_of_dry_fruits 1.00 is 1.85 */

#include<stdio.h>
#include<math.h>

void input(float *quantity_of_milk,float *quantity_of_sugar,float *weight_of_dryfruits);
float is_volume(float quantity_of_milk,float quantity_of_sugar,float weight_of_dryfruits);
void output(float quantity_of_milk,float quantity_of_sugar,float weight_of_dryfruits,float volume_of_kalakand){

int main(){
  float quantity_of_milk, quantity_of_sugar,weight_of_dryfruits,volume_of_kalakand;
  input(&quantity_of_milk,&quantity_of_sugar,&weight_of_dryfruits);
  volume_of_kalakand= is_volume(quantity_of_milk, quantity_of_sugar,weight_of_dryfruits);
  output(quantity_of_milk,quantity_of_sugar,weight_of_dryfruits,volume_of_kalakand);
}

void input(float *quantity_of_milk,float *quantity_of_sugar,float *weight_of_dryfruits){
  float n;
  printf("Enter the quantity_of_milk \n");
  scanf("%f",quantity_of_milk);
  printf("Enter the quantity_of_sugar \n");
  scanf("%f",quantity_of_sugar);
  printf("Enter the weight_of_dryfruits \n");
  scanf("%f",weight_of_dryfruits);
}  

float is_volume(float quantity_of_milk,float quantity_of_sugar,float weight_of_dryfruits){
  float volume_of_kalakand;
  volume_of_kalakand = 0.8 * sqrt(quantity_of_milk)  + quantity_of_sugar/4 + 0.8 * weight_of_dryfruits; 
  return volume_of_kalakand;
}

void output(float quantity_of_milk,float quantity_of_sugar,float weight_of_dryfruits,float volume_of_kalakand){
  printf("volume of kalakand with quantiy_of_milk %f,quantity_of_sugar %f and weight_of_dryfruits %f is %f",quantity_of_milk,quantity_of_sugar,weight_of_dryfruits,volume_of_kalakand);
}