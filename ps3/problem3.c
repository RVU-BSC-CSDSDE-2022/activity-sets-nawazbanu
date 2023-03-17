/* Write a program to find the nth term of the below  dingdong series
	0,1,1,2,3,5,...
Input
7
Output
The nth term is 8 */

#include<stdio.h>

int input_n();
int find_sum(int n);
void output(int n,int term);

int main(){
  int n,term,sum;
  n = input_n();
  term = find_sum(n);
  output(n,term);
  return 0;
}

int input_n(){
  int n;
  printf(" ");
  scanf("%d",&n);
  return n;
}

int find_sum(int n){
  int i;
  int a = 0,b = 1,sum = 0;
    for(i = 1; i<= n;i++){
    sum = a + b;
    a = b;
    b = sum;
    }
  return sum;
}

void output(int n,int term){
  printf("The  %dth term is %d",n,term);
}