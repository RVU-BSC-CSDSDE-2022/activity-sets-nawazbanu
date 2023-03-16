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

typedef struct kalakand{
    float quantity_of_milk,quantity_of_sugar, weight_of_dry_fruits;
} Kalakand;

int input_num_of_kalakands();
Kalakand input_kalakand();
void input_n_kalakands(int n, Kalakands k[n]);
float find_weight(Kalakand k);
float find_n_weight(int n,Kalakand k[n]);
void output(int n, Kalakand k[n], float weight);




