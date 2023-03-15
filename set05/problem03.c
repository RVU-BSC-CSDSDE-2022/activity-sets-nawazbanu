// Write a program to find the weight of the camel given height, length and stomach radius using four functions *(Structures)*
//weight = pi * stomach_radius^3 * sqrt(height * length)`
// input 1 1 1
//The weight of the camel with radius: 1.0, height: 1.0, length: 1.0 is 3.1415

#include<stdio.h>
#include<math.h>

struct camel {
	float radius, height, length,weight;
};

typedef struct camel Camel;

Camel input();
//float find_weight(Camel c);  //pass by value
void find_weight(Camel *c); //passing address variable
void output(Camel c);

int main(){
  Camel c;
  c = input();
  find_weight(&c);
  output(c);
  return 0;
}

Camel input(){
  Camel c;
  printf("Enter radius , height and weight \n");
  scanf("%f %f %f",&c.radius,&c.height,&c.length);
  return c;
}

void find_weight(Camel *c){
  float pi = 3.1415,radius,height,length;
  float weight = pi * pow(radius , 3) * sqrt (height * length);
}

void output(Camel c){
  printf("The weight of the camel with radius %0.1f,height %0.1f,length %0.1f is %0.4f ",c.radius,c.height,c.length,c.weight);
}
