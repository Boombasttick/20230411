//联合体的大小

#include <stdio.h>

union Un
{
    char arr[5];
    int i;
};


int main()
{
    union Un u;
    printf("%d\n",sizeof(u));
    return 0;
}