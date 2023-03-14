//write a program to find the index of the largest number in an array
// input 4 2 9 1 7    output : The index of the largest number in the array is 2

#include<stdio.h>

int input_size();
void input_array(int n, int a[n]);
int find_largest_index(int n, int a[n]);
void output(int index);

int main(){
  int n,a[100],index;
  n = input_size();
  input_array(n,a);
  index = find_largest_index(n,a);
  output(index);
  return 0;
}

int input_size(){
  int n;
  printf("Enter the size");
  scanf("%d",&n);
  return n;
} 

void input_array(int n, int a[n]){
  int i;
  for(int i = 0;i < n;i++){
    printf("Enter a number \n");
    scanf("%d",&a[i]);
    }
}

int find_largest_index(int n, int a[n]){
  int i,largest = a[0],index = 0;
  for(i = 1;i < n;i++){
    if(a[i] > largest){
      largest = a[i];
      index = i;
    }
  }
  return index;
}

void output(int index){
 printf("The index of the largest number in an array is %d",index); 
}
