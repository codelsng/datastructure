#include <iostream>
#define MAX 100

int arr[MAX] = {0};
int top = -1;

using namespace std;

int main(void)
{
    int num = 0;
    cout << "Please input a argument for the array." << endl;
    cin >> num;
    for (int i = 0; i < num; ++i)
        cin >> arr[++top];
    for (;top > -1;)
        cout << arr[top--] << endl;
    return 0;
}
