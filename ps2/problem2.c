/* Write a program to remove all the vowels from a given string
Input
helloworld
Output
hllwrld*/
#include<stdio.h>

void input_string(char* string);
void remove_vowels(char* string);
void output(char *string);

int main(){
  char string[50];
  input_string(string);
  remove_vowels(string);
  output(string);
  return 0;
}

void input_string(char* string){
  printf("Enter the string");
  scanf("%s",string);
}

void remove_vowels(char* string){
  int i = 0;
  while(string[i] != '\0'){
  if(string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u' || string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U')
  {
    int j = i;
    while(string[j] != '\0'){
      string[j] = string[j + 1];
      j++;
    }
  }
    else
    i++;
}
  }

void output(char *string){
  printf("string after removing vowels are %s",string);
}