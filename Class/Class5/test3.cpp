#include <iostream>
#define MAX 100

//定义一个结构体作为链表：
typedef struct node
{ 
	int data;
	//指向下一个元素的地址：
	struct node * next;
}slinknode;

void createlist(slinknode*&list, int arr[], int num);
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
	
	slinknode* list;
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

void createlist(slinknode* &list, int arr[], int num)
{
	list = (slinknode*)malloc(sizeof(slinknode));
	slinknode * tc = list;
    for(int i = 0; i < num; ++i)
    {
        slinknode * temp = (slinknode *)malloc(sizeof(slinknode));
        temp -> data = arr[i];
        tc -> next = temp;
        tc = temp;
    }
}

void dislist(slinknode* list)
{
	slinknode*p= list->next;
	while (NULL != p)
	{
		cout << p->data;
		p = p->next;
	}
}
