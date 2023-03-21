/* Write a program to find the weight of a kachori
Formula for weight= (radius*width*weight_of_stuffing)^2
Formula for weight_of_stuffing = fourth_root((radius)^2+(width)^2)
Input
Enter the radius and width:
1 1
Output
The weight of the kachori with radius 1 and width 1  and height 1.41 is 1.39 */

#include<stdio.h>
#include<math.h>

void input(float *radius,float *width);
float calculate_weight_of_stuffing(float radius,float width);
float find_weight(float radius,float width,float weight_of_stuffing);
void output(float radius,float width,float weight_of_stuffing,float weight);

int main(){
  float radius,width,weight_of_stuffing,weight;
  input(&radius,&width);
  weight_of_stuffing = calculate_weight_of_stuffing(radius,width);
  weight = find_weight(radius,width,weight_of_stuffing);
  output(radius,width,weight_of_stuffing,weight);
  return 0;
}

void input(float *radius,float *width){
  printf("Enter radius and width : \n");
  scanf("%f %f",radius,width);
}

float calculate_weight_of_stuffing(float radius,float width){
  return pow(pow(radius,2)+pow(width,2),0.25);
}

float find_weight(float radius,float width,float weight_of_stuffing){
  return pow(radius * width * weight_of_stuffing,2);
}

void output(float radius,float width,float weight_of_stuffing,float weight){
printf("The weight of the kachori with radius %.0f ,width %.0f and is %.2f is %.2f",radius,width,weight_of_stuffing,weight);
}