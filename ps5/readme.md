1. Write a program to find the weight of a kachori
Formula for weight= (radius*width*weight_of_stuffing)^2
Formula for weight_of_stuffing = fourth_root((radius)^2+(width)^2)


Input
Enter the radius and width:
1 1


Output
The weight of the kachori with radius 1 and width 1  and height 1.41 is 1.39



2.Write a C program to remove all the white spaces from a string
Input
h ell owor  ld


Output
helloworld

3. Write a program to find the sum of  n terms of the below  dingdong series
	1-x+(x^2/2!)-(x^3/3!)+(x^4/4!)...


Input
0.5 5


Output
The sum is 0.607


4. 4.Write a program to find the kachori with largest volume from n given kachoris

        Formula for weight_of_stuffing = fourth_root((radius)^2+(width)^2)

       if type = 'b'
      volume of kachori = (radius+width+weight_of_stuffing)


     if type = 'f'
     volume of kachori = (radius*width*weight_of_stuffing)
Function Declarations
typedef struct kachori{
    float radius, width, weight_of_stuffing, volume;
    char type;
} Kachori;

Input:
Enter the number of kachori:
2
Enter the radius and width of kachori 1:
1 1 b
Enter the radius and width of kachori 2:
2 2 f

Output
The kachori with the largest volume is the kachori with radius 2 width 2 weight_of_stuffing 1.41 and type f and volume 5.64












