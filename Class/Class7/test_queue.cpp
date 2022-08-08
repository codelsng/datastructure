#include <iostream>
#define MAX 100
using namespace std;

int qu[MAX] = {0};
int front = -1;
int rear = -1;

int main(void)
{
    int num = 0;
    cout << "Please input a argument about the arrage's length." << endl;
    cin >> num;
    cout << "Please input arguments about the arrge about queue." << endl;
    //入队操作：
    for (int i = 0; i  < num; i++)
        cin >> qu[++rear];
    //出队操作：
    while (front != rear)
        cout << qu[++front] << endl;
    return 0;
}