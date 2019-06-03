#include <stdio.h>
#include <stdlib.h>

int main()
{

    // 初始化
    int data[101], right[101];
    int t, i, n, len;

    scanf("%d", &n);
    len = n; //最后一个数

    // 初始化
    for (i = 1; i <= len; i++)
    {
        scanf("%d", &data[i]);
        if (i != n)
        {
            right[i] = i + 1;
        }
        else
        {
            right[i] = 0;  //right[i] = 0; 最大的数字
        }
        printf("t = %d\n", right[i]);

    }
    len++;
    scanf("%d", &data[len]);

    t = 1;
    while (t != 0)
    {
        // 当前数右边的数字大于最后新增得数字
        if (data[right[t]] > data[len])
        {
            right[len] = right[t]; //最后一个数字指向当前数指向得下一个数字
            right[t] = len; //当前数指向最后一个数字
            break;
        }
        // 当 right[t] == 0 说明 已经到最大的数 新增数为最大数
        if (right[t] == 0)
        {
            right[t] = len;
            right[len] = 0;
        }
        t = right[t];
    }

    // 输出
    t = 1;
    while (t != 0)
    {
        printf("%d ", data[t]);
        t = right[t];
    }

    getchar();
    getchar();
    printf("Hello world!\n");
    return 0;
}
