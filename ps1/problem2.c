/* Write a program to capitalise the letter after every fullstop in a given string.
Input
hello.world Output hello.World */
#include<stdio.h>
#include<string.h>

void input_string(char* string);
void capitalise(char* string);
void output(char *string);

int main(){
  char string[50];
  input_string(string);
  capitalise(string);
  output(string);
  return 0;
}

void input_string(char* string){
  printf("Enter the string \n");
  scanf("%s",string);
}

void capitalise(char* string){
  for(int i = 0;string[i] != '\0';i++){
    if(string[i] == '.'){
      string[i + 1] = string[i + 1] - 32;
    }
  }
}

void output(char *string){
  printf("%s",string);
}