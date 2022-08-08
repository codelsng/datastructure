#include <iostream>
#define MAX 100
using namespace std;

int stk[MAX] = {0};
int top = -1;
char ch[MAX] = {0};

int main(void)
{
    cout << "Please input arguments for the string array.(Only I/O)" << endl;
    cin >> ch;
    bool flag = 1;

    // Using the while loop:
    // int i = 0;
    // while (ch[i] != '\0')

    for (int i = 0;'\0' != ch[i]; i++)
    {
        if ('I' == ch[i])
            top++;
        else if ('O' == ch[i])
            top--;
        else
        {
            flag = false;
            cout << "Error, exiting..." << endl;
            break;
        }
        // Using the while loop:
        // i++;
    }
    
    if (0 == flag || -1 != top)
        cout << "No\t" << "top = " << top << ", flag =" << flag << endl;
    else
        cout << "Yes\t" << "top = " << top << ", flag =" << flag << endl;


    // Using stack methods:
    // int num = 0;
    // cout << "input a number for the array's count" << endl;
    // cin >> num;
    // cout << "input arguments for the array about the stack" << endl;
    // for (int i = 0; i < num; i++, top++)
    //     cin >> stk[i];
    // for (; top != -1; top--)
    //     cout << stk[top] << endl;

    // Using array methods:
    // int num = 0;
    // cout << "input a number:" << endl;
    // cin >> num;
    // cout << "input arguments for this arrage" << endl;
    // for (int i = 0; i < num; i++)
    //     cin >> stk[i];
    // for (int i = num - 1; i > -1; i--)
    //     cout << stk[i] << endl;

    return 0;
}