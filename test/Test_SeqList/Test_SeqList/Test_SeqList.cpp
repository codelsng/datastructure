#include <iostream>
#define MAX 100
using namespace std;
typedef char SL;

typedef struct node {
	SL data[MAX];
	int length;
}SeqList;

void CreateList(SeqList &L, SL arr[], int length) {
	int i = 0;
	for (i = 0; i < length; i++)
		L.data[i] = arr[i];
	L.length = i;	//num - 1;
}

void DisplayList(SeqList L) {
	for (int i = 0; i < L.length; i++)
		cout << L.data[i] << " ";
}

int main(void)
{
	SL arr[MAX] = { 0 };
	int length = 0;
	cout << "Enter length for the array:" << endl;
	cin >> length;
	cout << "Enter arguments for the array:" << endl;
	for (int i = 0; i < length; i++)
		cin >> arr[i];
	SeqList L;
	CreateList(L, arr, length);
	DisplayList(L);
	return 0;
}