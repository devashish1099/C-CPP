#include<stdio.h>

struct point
{
    int x;
    int y;
};

typedef struct point Point;

Point makePoint(int x, int y){
    Point p1;
    p1.x = x;
    p1.y = y;
    return p1;
}

int main(){
    Point p1, *ptr;
    p1 = makePoint(3,4);
    ptr = &p1;
    printf("%d,%d\n",(*ptr).x,(*ptr).y);
    printf("%d,%d\n",ptr->x,ptr->y);

}