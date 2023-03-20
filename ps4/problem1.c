/* Write a program to find the volume of a samosa
Formula for volume= radius*width*height
Formula for height =square_root((width)^2+(radius)^2)
Input
Enter the radius and width:
1 1
Output
The volume of the samosa with radius 1 and width 1  and height 1.41 is 1.41 */

#include<stdio.h>
#include<math.h>

void input(float* radius,float* width);
float calculate_height(float radius, float width);
float find_volume(float radius,float width,float height);
void output(float radius,float width,float height,float volume);

int main(){
  float radius,width,height,volume;
  input(&radius,&width);
  height = calculate_height(radius,width);
  volume = find_volume(radius,width,height);
  output(radius,width,height,volume);
  return 0;
}

void input(float* radius,float* width){
  printf("Enter radius and width \n");
  scanf("%f %f",radius,width);
}

float calculate_height(float radius, float width){
  float height;
  height = sqrt(pow(width,2)+pow(radius,2));
  return height;
  
}
float find_volume(float radius,float width,float height){
  float volume;
  volume = radius * width * height;
  return volume;
}

void output(float radius,float width,float height,float volume){
  printf("The volume of the samosa with radius %f,width %f,height %f is %f",radius,width,height,volume);
}