/* Write a program to find the sum of volumes of n different jalebis
Formula: type_of_jalebi == "paneer":
volume = amount_of_sugar*amount_of_color*amount_of_flour
    type_of_jalebi == "besan":
	volume = amount_of_sugar+amount_of_color+amount_of_flour
Enter 0 for paneer as input
Enter 1 for besan as input
Function Declarations
Input
Enter the number of jalebis:
2
Enter the amount_of_sugar, amount_of_color, amount_of_flour, type for jalebi 1:
1 1 6 0
Enter the amount_of_sugar, amount_of_color, amount_of_flour, type for kalakand 2:
1 1 4 1
Output
The sum of volume is  12.0 */

#include<stdio.h>

typedef struct jalebi{
    float amount_of_sugar, amount_of_color, amount_of_flour ;
    int type;
} Jalebi;

int input_num_of_jalebis();
Jalebi input_jalebi();
void input_n_jalebi(int n, Jalebi j[n]);
float find_volume(Jalebi k);
float find_n_volume(int n,Jalebi j[n]);
void output(int n, Jalebi j[n], float volume);

int input_num_of_jalebis(){
  int n;
  printf("Enter number of jalebis ");
  scanf("%d",&n);
  return n;
}

int main(){
  int n;
  n = input_num_of_jalebis();
  Jalebi j[n];
  input_n_jalebi(n,j);
  float volume = find_n_volume(n,j);
  output(n,j,volume);
  return 0;
}


Jalebi input_jalebi(){
  Jalebi j;
  printf("Enter the amount_of_sugar, amount_of_color, amount_of_flour, type for jalebi :");
  scanf("%f %f %f %d",&j.amount_of_sugar, &j.amount_of_color,&j.amount_of_flour,&j.type);
  return j;
}

void input_n_jalebi(int n, Jalebi j[n]){
  for(int i = 0; i < n;i++){
    j[i] = input_jalebi();
  }
}

float find_volume(Jalebi k){
  if(k.type == 0){
    return k.amount_of_sugar * k.amount_of_color * k.amount_of_flour;
  }
    else{
      return k.amount_of_sugar+k.amount_of_color+k.amount_of_flour;
    }
  return 0;
}

float find_n_volume(int n,Jalebi j[n]){
  float sum = 0;
  for(int i = 0;i < n;i++){
    sum += find_volume(j[i]);
  }
  return sum;
}

void output(int n, Jalebi j[n], float volume){
  printf("The sum of volume is %.1f",volume);
}