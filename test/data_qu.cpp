#include <iostream>
#define MAX 100

//Declare three varliables to the queue:
int arr[MAX] = {0};
int front = -1;
int rear = -1;

using namespace std;

int main(void)
{
    //Using num to count arguments for arrays about the queue:
    int num = 0;
    cout << "Please input argument for the array's arguments." << endl;
    cin >> num;
    for (int i = 0; i < num; ++i)
        cin >> arr[++rear];
    for (;front != rear;)
        cout << arr[++front] << endl;

    return 0;
}
