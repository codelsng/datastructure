#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    char data;
    struct node * lchild;
    struct node * rchild;
}bin_tree;

void create_list(bin_tree * &bt);
void inorder_list(bin_tree * bt);

int main(void)
{
    bin_tree * bt;
    create_list(bt);
    inorder_list(bt);
    return 0;
}

void create_list(bin_tree * &bt)
{
    char ch;
    scanf("%c", &ch);
    if (ch == '#')
        bt = NULL;
    else
    {
        bt = (bin_tree *)malloc(sizeof(bin_tree));
        bt->data = ch;
        create_list(bt->lchild);
        create_list(bt->rchild);
    }
}
void inorder_list(bin_tree * bt)
{
    if (bt == NULL)
        return;
    else
    {
        inorder_list(bt->lchild);
        printf("%c", bt->data);
        inorder_list(bt->rchild);
    }
}