#include<stdio.h>
#include<stdlib.h>
struct student{
    char name[50];
    int age;
    int roll_no;
    float marks;

};
void printdata(char name[],int age,int roll_no,float marks)
{
    printf("%s %d %d %.2f",name,age,roll_no,marks);
}
int main()
{
    struct student s1={"Rahul",20,40,78};
    printdata(s1.name,s1.age,s1.roll_no,s1.marks);
    return 0;
}

