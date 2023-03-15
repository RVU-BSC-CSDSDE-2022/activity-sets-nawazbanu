/* Write a program to find out if the name of the camel is a nice name.
A camel has a nice name if it has at least 2 vowels and 2 consonants in it
Input  :  Conky
  Output :The camel does not have a nice name */

#include<stdio.h>
#include<string.h>

void input(char *name);
int has_nice_name(char *name);
void output(int res);

int main(){
  char name[50];
  input(name);
  int res = has_nice_name(name);
  output(res);
  return 0;
}

void input(char *name){
  printf(" ");
  scanf("%s",name);
}

int has_nice_name(char *name){
  int vowel = 0;
  int consonant = 0;
  int length = strlen(name);
  for(int i = 0; i < strlen(name);i++){
    char str[i];
    if(name[i] == 'a' || name[i] == 'e' || name[i] == 'o' || name[i] == 'u' || name[i] == 'A' || name[i] == 'E' || name[i] == 'o' || name[i] == 'U' ){
      vowel++;
    }else{
      consonant++;
    }
  }
  return vowel >= 2 && consonant >= 2;
}

void output(int res){
  if(res){
    printf("The camel has a nice name");
  }else{
    printf("The camel does not have nice name");
  }
}
