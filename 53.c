//联合-共用体


#include <stdio.h>

union Un
{
    char c;
    int i;
};


int main()
{
    union Un u;
    printf("%d\n",sizeof(u));
    printf("%p\n",&u);
    printf("%p\n",&(u.c));
    printf("%p\n",&(u.i));        //共用内存空间 
    return 0;
}