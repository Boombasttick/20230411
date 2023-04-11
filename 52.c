//枚举
#include <stdio.h>

enum Color
{
    red,     //可以red = 2,  给一个初始值    确定后不能再改
    green,
    blue
};
int main()
{
    enum Color c = blue;
    printf("%d %d %d",red,green,blue);   //不定义，得到0,1,2   
    return 0;
}