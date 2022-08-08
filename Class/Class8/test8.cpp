#include <stdio.h>
#include <string.h>

int main(void)
{
    char arr1[100] = {0};
    char arr2[100] = {0};
    printf("Input arr1's arguments:\n");
    scanf("%s", arr1);
    printf("Input arr1's arguments:\n");
    scanf("%s", arr2);
    int i = 0;
    int j = 0;
    while (i < strlen(arr1) && j < strlen(arr2))
    {
        if (arr1[i] == arr2[j])
        {
            i++;
            j++;
        }
        else
        {
            i = i - j + 1;
            j = 0;
        }
    }
    if (j >= strlen(arr2))
        // printf("arr[%zd]\n", i - strlen(arr2));
        printf("%d", i - j);
    else
        printf("no\n");
    return 0;
}