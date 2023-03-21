/* Write a C program to remove all the white spaces from a string
Input
h ell owor  ld
Output
helloworld */

#include<stdio.h>

void input(char* string);
void remove_space(char* string);
void output(char *string);

int main(){
  char string[50];
  input(string);
  remove_space(string);
  output(string);
  return 0;
}

void input(char* string){
  printf("Enter ");
  scanf("%s",string);
}

void remove_space(char* string){
  int i,j;
  for(i = 0;string[i] != '\0';i++){
    if(string[i] == ' '){
      for(j = i;string[j] != '\0';j++){
        string[j] = string[j + 1];
      }
      i--;
    }
  }
}

void output(char *string){
  printf("%s",string);
}