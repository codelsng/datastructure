#include <iostream>
using namespace std;
typedef struct node
{
    char data;
    struct node * lchild;
    struct node * rchild;
}bin_tree;
void create_tree(bin_tree * &bt);
void inorder(bin_tree * bt);
int main(void)
{
    bin_tree * bt;
    create_tree(bt);
    inorder(bt);
    free(bt);
    return 0;
}
void create_tree(bin_tree * &bt)
{
    char ch;
    cout << "Please input arguments for biniary tree:" << endl;
    cin >> ch;
    if ('#' == ch)
        bt = NULL;
    else
    {
        bt = (bin_tree *)malloc(sizeof(bin_tree));
        bt->data = ch;
        create_tree(bt->lchild);
        create_tree(bt->rchild);
    }
}
void inorder(bin_tree * bt)
{
    if(NULL == bt)
        return;
    else
    {
        inorder(bt->lchild);
        cout << bt->data;
        inorder(bt->rchild);
    }
}