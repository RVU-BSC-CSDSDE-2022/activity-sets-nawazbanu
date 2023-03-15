// Write a program to reverse a string.
// input : hello
// output : olleh

#include<stdio.h>
#include<string.h>

void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);

void input_string(char *a){
  printf("Enter the string \n");
  scanf("%s",a);  
}

void str_reverse(char *str, char *rev_str){
int begin,end,count = 0;
  while(str[count] != '\0')
  {
    count++;
    end = count - 1;
  }
  for(begin = 0;begin < count;begin++){
    rev_str[end] = str[begin];
    end--;
  }
  rev_str[begin] = '\0';
  }

void output(char *a, char *reverse_a){
  printf("%s",reverse_a);
}

int main(){
  char str[50],rev_str[50];
  input_string(str);
  str_reverse(str,rev_str);
  output(str,rev_str);
}