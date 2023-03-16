/* Write a program to find the sum of perimeters of n different kalakand
Formula: weight of dry fruits > 5:
perimeter = quantity_of_milk^quantity_of_sugar
    weight of dry fruits <= 5:
	perimeter = quantity_of_milk+quantity_of_sugar
Input
Enter the number of kalakands:
2
Enter the quantity_of_milk, quantity_of_sugar, weight_of_dry_fruits for kalakand 1:
1 1 6
Enter the quantity_of_milk, quantity_of_sugar, weight_of_dry_fruits for kalakand 2:
1 1 4
Output
The sum of weights is 3.00 */

#include<stdio.h>
#include<math.h>

typedef struct kalakand{
    float quantity_of_milk,quantity_of_sugar, weight_of_dry_fruits;
} Kalakand;

int input_num_of_kalakand();
Kalakand input_kalakand();
void input_n_kalakand(int n, Kalakand k[n]);
float find_weight(Kalakand k);
float find_n_weight(int n,Kalakand k[n]);
void output(int n, Kalakand k[n], float weight);

int main(){
  int n;
  n = input_num_of_kalakand();
  Kalakand k[n];
  input_n_kalakand(n,k);
  float weight = find_n_weight(n,k);
  output(n,k,weight);
  return 0;
}

int input_num_of_kalakand(){
  int n;
  printf("Enter the number of kalakandas \n");
  scanf("%d",&n);
  return n;
}

Kalakand input_kalakand(){
  Kalakand k;
  int i;
  printf("Enter the quantity_of_milk, quantity_of_sugar, weight_of_dry_fruits for kalakand %d \n",i + 1);
  scanf("%f %f %f",&k.quantity_of_milk,&k.quantity_of_sugar,&k.weight_of_dry_fruits);
  return k;
}
  
void input_n_kalakand(int n, Kalakand k[n]){
  for(int i = 0; i < n;i++){
    k[i]=input_kalakand();
  }
}

float find_weight(Kalakand k){
  float weight;
  if(weight <= 5){
    return k.quantity_of_milk + k.quantity_of_sugar;
    }
  else{
   return (pow(k.quantity_of_milk,k.quantity_of_sugar));
  }
  return weight;
  }

float find_n_weight(int n,Kalakand k[n]){
  float sum = 0;
  for(int i = 0; i < n;i++){
    sum += find_weight(k[i]);  
  }
  return sum;
}

void output(int n, Kalakand k[n], float weight){
  printf("The sum of weights are %.2f",weight);
}