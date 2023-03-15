/* Write a program to find the volume of rasgulla
Formula = 2 * 3.14 * radius / height
Input
1 1
Output
The volume of the rasgulla with radius 1.00 and height 1.00 is 6.18 */

#include<stdio.h>

void input(float *radius, float *height);
float find_volume(float radius, float height);
void output(float radius,float height,float volume);

int main(){
  float radius,height,volume;
  input(&radius,&height);
  volume = find_volume(radius,height);
  output(radius,height,volume);
  return 0;
}

void input(float *radius, float *height){
  printf("Enter radius and height \n");
  scanf("%f %f",radius,height);
}

float find_volume(float radius, float height){
  float volume;
  volume = 2 * 3.14 * radius / height;
  return volume;
}

void output(float radius,float height,float volume){
  printf("The volume of the rasagulla with radius %.2f and height %.2f is %.2f",radius,height,volume);
}
