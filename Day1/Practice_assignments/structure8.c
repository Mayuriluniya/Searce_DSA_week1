#include<stdio.h>
#include<stdlib.h>
struct point{
    int x;
    struct point *p;
};
int main()
{
    struct point p1;
    p1.x=10;
    p1.p=NULL;
    struct point p2;
    p2.x=20;
    p2.p=NULL;
    p1.p=&p2;
    printf("%d",p1.p->x);
    return 0;


}