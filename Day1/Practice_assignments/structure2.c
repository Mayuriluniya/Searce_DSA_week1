#include<stdio.h>
#include<stdlib.h>
struct charset{
    char c;
    int i;

};
void keyValue(char *c,int *i){
    scanf("%c %d",c,i);

}
int main()
{
    struct charset cs;
    keyValue(&cs.c,&cs.i);
    printf("%c %d",cs.c,cs.i);
    return 0;
    

}