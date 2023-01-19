//  Write a program find whether a number is a composite number
//composite numbers have more than 2 factors

#include<stdio.h>
#include<math.h>


int input_number();
int is_composite(int n);
void output(int n, int result);

int main(){
  int n;
  int result;
  n = input_number();
  result = is_composite(n);
  output(n,result);
  return 0;
}

int input_number(){
  int n;
  scanf("%d",&n);
  return n;
}

int is_composite(int n){
  int i;
  int result = 0;
  findsqrt();
  for(i = 2 ; i <= sqrt(n) ; i++)
      if(n % i == 0)
      result = 1;
  return result;
      
  }
  
void output(int n, int result){
  if(result == 1)
    printf(" %d is a composite number \n",n);
  else
    printf(" %d is not a composite number \n",n);
  }

