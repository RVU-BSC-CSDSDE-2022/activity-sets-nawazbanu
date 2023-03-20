1. Write a program to find the volume of a samosa
Formula for volume= radius*width*height
Formula for height =square_root((width)^2+(radius)^2)


Input
Enter the radius and width:
1 1


Output
The volume of the samosa with radius 1 and width 1  and height 1.41 is 1.41



2.Write a C program to count the occurrences of all the characters in a string. Capital and small letters should be considered the same. Any other character should be counted as other characters.
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
Other characters:4

3. Write a program to find the nth term of the below  dingdong series
	1+x+(x^2/2!)+(x^3/3!)+(x^4/4!)...


Input
0.5 8


Output
The sum is 1.6487


4. 4.Write a program to find the tastiest Yellow Samosa, and Orange Samosa given n different samosas. 

	Formula for height =square_root((width)^2+(radius)^2)


 A samosa s1 is tastier than the samosa s2 if: area of s1> area of s2 
        Area of a Yellow samosa = (radius + width + height)
        Area of a Orange samosa = (radius*width*height)


Function Declarations
typedef struct samosa{
    float radius, width, height, area;
    char color;
} Samosa;

Input:
Enter the number of samosas:
2
Enter the radius and width of samosa 1:
1 1 o
Enter the radius and width of samosa 2:
1 1 y

Output
The tastiest yellow samosa is the samosa with radius 1, width 1, height 1.41, area 3.41.
The tastiest orange samosa is the samosa with radius 1, width 1, height 1.41, area 1.41.











