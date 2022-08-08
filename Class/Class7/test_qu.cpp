#include <iostream>
#define MAX 100
using namespace std;

int qu[MAX] = {0};
int rear = 0;
int front = 0;

int main(void)
{
    int num = 0;
    cout << "Please input arguments for array's length." << endl;
    cin >> num;
    cout << "Please input arguments for the array." << endl;
    //入队：
    for (int i = 0; i < num; i++)
        cin >> qu[++rear];
    //出队：
    while (rear != front)
        cout << qu[++front] << endl;
    return 0;
}