//  Write a program find whether a number is a composite number
//composite numbers have more than 2 factors
//prime nos are not composite no
//8 

#include<stdio.h>


int input_number();
int is_composite(int n);
void output(int n, int result);

int main(){
  int n,result;
  n = input_number();
  result = is_composite(n);
  output(n,result);
  return 0;
}

int input_number(){
  int n;
  printf("Enter the value ");
  scanf("%d",&n);
  return n;
}

int is_composite(int n){
  int i,result;
  for(i = 1; i <= n;i++){
    if(n % i == 0)
      result++;            // result = count
  }
  return result;
  }
  
void output(int n, int result){
  if(result > 2)
  {
    printf(" %d is composite number",n);
    }
    else{
    printf(" %d is not a composite number ",n);
      }
  }

