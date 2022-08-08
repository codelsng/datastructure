//复习
#include <stdio.h>

//函数声明：
void hello(void);
void sum(void);
void scan_sum(void);
void more_if();
void a_if();
void double_if();
void f_for();

//main()函数：
int main(void)
{
    f_for();
	return 0;
}

//输出Hello World：
void hello(void)
{
    printf("Hello World!\n");
}


//输出两个数之和：
void sum(void)
{
    int num1 = 3;
    int num2 = 5;
    printf("num1 + num2 = %d", num1 + num2);
}

//输出两个数之和：
void scan_sum(void)
{
    int num1 = 0;
    int num2 = 0;
    scanf("%d%d", &num1, &num2);
    printf("num1 + num2 = %d\n", num1 +num2);
}

//单分支：

void a_if(void)
{
	int week = 6;
	if(6 == week)
		printf("Van游戏：\n");
}

//双分支：
void double_if(void)
{
	int week = 0;
	scanf("%d", &week);
	if(6 == week)
	{
		printf("Van游戏：\n");
	}
	else
	{
		printf("打电动：\n");
	}
}

//多分支：
void more_if(void)
{
	int week = 0;
	scanf("%d", &week);
	if(6 == week)
	{
		printf("Van游戏：\n");
	}
	else if(4 == week)
	{
		printf("要恰饭的嘛：\n");
	}
	else if(3 ==week)
	{
		printf("睡觉：\n");
	}
	else
		printf("焯：\n");
}


void f_for(void)
{
    int num = 0;
    int sum = 0;
    scanf("%d", &num);
    for(int i = 0; i <= num; ++i)
    {
        sum += i;
    }
    printf("%d", sum);
}
