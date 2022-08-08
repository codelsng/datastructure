#include <iostream>
#define MAX 100

//定义一个结构体作为链表：
typedef struct node
{ 
	int data;
	//递归定义，指向下一个元素的地址：
	struct node * next;
}slinknode;

//创建链表的函数声明：
void createlist(slinknode*&list, int arr[], int num);
//打印链表的函数声明：
void dislist(slinknode * list);

using namespace std;

int main(void)
{
	int num = 0;
	int arr[MAX] = {0};
	
	cout << "请输入数组元素个数：" << endl;
	cin >> num;
	cout << "请输入数组元素:" << endl;
	for (int i = 0; i < num; ++i)
		cin >> arr[i];
	
	//定义结构体指针list：
	slinknode* list;
	//调用创建、打印函数：
	createlist(list, arr, num);
	dislist(list);

	return 0;
}

////头插入法：
//void createlist(slinknode*&list, int num, int arr[])
//{
//	list = (slinknode * )malloc(sizeof(slinknode));
//	list -> next = NULL;
//	for (int i = 0; i < num; ++i)
//	{
//		slinknode* temp = (slinknode*)malloc(sizeof(slinknode));
//		temp -> data = arr[i];
//		temp -> next = list -> next;
//		list -> next = temp;
//	}
//}

//定义创建链表的函数:
void createlist(slinknode* &list, int arr[], int num)
{
	//分配地址空间给list：
	list = (slinknode*)malloc(sizeof(slinknode));
	slinknode * tc = list;

	//下列循环执行过程：
	//1、将arr[0]赋给temp->data，尔后将temp赋给tc->next，再将temp赋给tc
	//
	//
    for(int i = 0; i < num; ++i)
    {
        slinknode * temp = (slinknode *)malloc(sizeof(slinknode));
        temp -> data = arr[i];
        tc -> next = temp;
        tc = temp;
    }
}

//定义查看链表的函数:
void dislist(slinknode* list)
{
	slinknode*p= list->next;
	while (NULL != p)
	{
		cout << p->data;
		p = p->next;
	}
}
