#include <stdio.h>

int main()
{
    int a[6];
    printf("按回车开始博饼\n");
    while(getchar()!='Q')
    {
       Random(a);
       GetLevel(a);
       printf("输入Q退出\n");
    }
    return 0;
}
