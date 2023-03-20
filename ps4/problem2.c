/* Write a C program to count the occurrences of all the characters in a string. Capital and small letters should be considered the same. Any other character should be counted as other characters.
Input
heLLoworld!@#%
Output
d:1
e:1
h:1
l:3
o:2
r:1
w:1
Other characters:4 */

#include<stdio.h>

void input_string(char* str);
void count(char *str, int count[27]);
void output(int count[27]);