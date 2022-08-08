//结构体初阶：
#include <stdio.h>

struct Student
{
    char name;
    int age;

};

int main(void)
{
    struct Student t[3];
    t[0].name = 'A';
    t[0].age = 10;
    t[1].name = 'B';
    t[1].age = 20;
    t[2].name = 'C';
    t[2].age = 30;
    for(int i = 0; i < 3; ++i)
    {
        printf("姓名：%c\n年龄：%d\n", t[i].name, t[i].age);
        putchar('\n');
    }
    return 0;
}