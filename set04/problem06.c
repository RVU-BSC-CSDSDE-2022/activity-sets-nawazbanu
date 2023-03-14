// write a program to count the number of words in a string using strtok (_string.h_)
// input : hello world hello
// output: The number of words in "hello world hello" is 3

#include<stdio.h>
#include<string.h>

void input_string(char *a);
int count_words(char *string);
void output(char *string, int no_words);

int main(){
  char string[100];
  int no_words;
  input_string(string);
  no_words = count_words(string);
  output(string,no_words);
  return 0;
}

void input_string(char *a){
  printf(" ");
  scanf("%s",a);
}

int count_words(char *string){
  int no_words = 0;
  char *word = strtok(string, " ");
  while(word != NULL){
    no_words++;
    word = strtok(NULL, " ");
  }
  return no_words;  
}

void output(char *string, int no_words){
  printf("The number of words in the string %s is %d \n",string,no_words);
}