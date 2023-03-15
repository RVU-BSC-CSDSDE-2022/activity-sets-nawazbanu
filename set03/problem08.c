8. Write a program to find the permeter of a polygon

//Enter the number of sides of the polygon:4
//Enter the coordinates of point 1 (x,y):0 0 
//Enter the coordinates of point 2 (x,y):1 0
Enter the coordinates of point 3 (x,y):
1 1
Enter the coordinates of point 4 (x,y):
0 1
```

***Output***
```
The perimeter of the polynomial is 4.000000
```










typedef struct point {
    float start_end_x, start_end_y;
} Point;

typedef struct line {
    Point p;
    float distance;
} Line;

typedef struct polygon {
    int sides;
    Line l[100];
    float perimeter;
} Polygon;

int input_n();
Line input_line(int n);
void input_n_lines(int n, Line *l);
int input_polygon(Polygon *p);
float find_distance(Point a, Point b);
void find_n_distance(int n, Line *l);
void find_perimeter(Polygon* p);
void output(Polygon p);