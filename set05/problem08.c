/* Write program to find the weight of a truck load of n camels.

Take inputs for:- truck weight - height, radius and length of n different camels
total_truck_weight = truck_weight + weight_of_camels
Enter the number of camels: 3
Enter the height of camel no. 1:1
Enter the length of camel no. 1:1
Enter the radius of camel no. 1:1
Enter the height of camel no. 2:1
Enter the length of camel no. 2:1
Enter the radius of camel no. 2:1
Enter the height of camel no. 3:1
Enter the length of camel no. 3:1
Enter the radius of camel no. 3:1
Enter the weight of the truck:2000
***Output : The Total weight of the truck is: 2009.424561 */

#include<stdio.h>
#include<stdlib.h>

typedef struct _camel {
    float radius, height, length, weight;
} Camel;

void input(int n, Camel c[n], float *truck_weight);
void find_camel_weight(int n, Camel c[n]);
float compute_total_weight(int n, Camel c[n], float truck_weight);
void output(float total_weight);

int main(){
  int n;
  float truck_weight,total_weight;
  printf("Enter the number of camels in the truck : \n");
  scanf("%d",&n);
  Camel camels[n];
  input(n,camels,&truck_weight);
  find_camel_weight(n,camels);
  total_weight = compute_total_weight(n,camels,truck_weight);
  output(total_weight);
  return 0;
}

void input(int n, Camel c[n], float *truck_weight){
  int camel_no;
  for(int i = 0; i < n;i++){
    camel_no = i + 1;
    printf("Enter the height , length and radius of camel %d : \n",camel_no);
    scanf("%f %f %f",&c[i].height,&c[i].length,&c[i].radius);
  }
  printf("Enter the weight of truck : \n");
  scanf("%f",truck_weight);
}

void find_camel_weight(int n, Camel c[n]){
 int i;
 for(i = 0;i < n;i++){
    c[i].weight = c[i].radius * c[i].height * c[i].length * 0.75;
  }
}

float compute_total_weight(int n, Camel c[n], float truck_weight){
  float total,camel_weight;
  camel_weight = 0.0;
  int i;
  for(i = 0;i < n;i++){
    camel_weight = camel_weight + c[i].weight;
  }
  total = camel_weight + truck_weight;
  return total;
}

void output(float total_weight){
  printf("The total weight of the truck is : %f \n",total_weight);
}
