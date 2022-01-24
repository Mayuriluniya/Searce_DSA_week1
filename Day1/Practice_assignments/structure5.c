#include<stdio.h>
#include<stdlib.h>
struct point{
    int x;
    int y;
};
struct point edit(struct point p)
{
    p.x=p.x+2;
    p.y=p.y+3;
    return p;
}
void print(struct point p)
{
    printf("%d %d\n",p.x,p.y);
}
int main()
{
    struct point p1={10,20};
    struct point p2={30,40};
    p1=edit(p1);
    p2=edit(p2);
    print(p1);
    print(p2);
    return 0;

}