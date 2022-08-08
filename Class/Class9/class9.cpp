#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    char data;
    struct node * lchild;
    struct node * rchild;
}btree;

void createbtree(btree * &bt);
void inorder(btree * bt);

int main(void)
{
    btree * bt;
    createbtree(bt);
    inorder(bt);
    return 0;
}

void createbtree(btree * &bt)
{
    char ch;
    scanf("%c", &ch);
    if (ch == '#')
        bt = NULL;
    else
    {
        bt = (btree *)malloc(sizeof(btree));
        bt -> data = ch;
        createbtree(bt->lchild);
        createbtree(bt->rchild);
    }
}

void inorder(btree * bt)
{
    if (bt == NULL)
        return;
    inorder(bt->lchild);
    printf("%c", bt->data);
    inorder(bt->rchild);
}
