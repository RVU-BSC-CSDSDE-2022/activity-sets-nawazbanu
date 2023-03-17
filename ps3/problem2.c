/* Write a program to remove all the adjacent duplicate characters from a string
Function Declarations
Input
helloworld
Output
heloworld
Input
helllo
Output
helo */

#include<stdio.h>

void input_string(char* string);
void remove_dup(char* string);
void output(char* string);

int main(){
  char string[50];
  input_string(string);
  remove_dup(string);
  output(string);
  return 0;
}

void input_string(char* string){
  printf("Enter string ");
  scanf("%s",string);
}

void remove_dup(char* string){
  int i,j;
  for(i = 0;string[i] != '\0';i++){
    if(string[i] == string[i + 1]){
      j = i;
      while(string[j] != '\0'){
        string[j] = string[j + 1];
        j++;
      }
      i--;
    }
  }
}

void output(char* string){
  printf("%s",string);
}
