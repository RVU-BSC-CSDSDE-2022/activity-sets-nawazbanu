//Write a C program to compare two strings, character by character.

#include<stdio.h>
#include<string.h>

void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);

int main(){
  char string1[100],string2[100];  
  
  input_two_strings(string1 , string2);
  
  if(stringcompare(string1,string2) == 1){
  output(string1,string2,1);
  }
  else if(stringcompare(string1,string2) == 0){
  output(string1,string2,0);
    }
  
  return 0;
  }


void input_two_strings(char *string1, char *string2){
  printf("Enter the first string: ");
  scanf("%s",string1);
  printf("Enter the second string: ");
  scanf("%s",string2);
}

int stringcompare(char *string1, char *string2){
  int a = strlen(string1);
  int b = strlen(string2);
    int i;
    
    for(i=0; string1[i] != '\0' && string2[i] != '\0';i++){
      if(string1[i] != string2[i])
        return(0);
      }
      if(string1[i] != '\0' && string2[i] != '\0'){
      
        return(1);
        }
      else{
        return(0);
      }  
}
  
 void output(char *string1, char *string2, int result){
if(result == 1){
  printf("same");
  }
  else if(result == 0){
  printf("%s is greater than %s",string2,string1);
    }
}
  