#include <stdio.h>
#include <stdlib.h>

int main()
{

    // ��ʼ��
    int data[101], right[101];
    int t, i, n, len;

    scanf("%d", &n);
    len = n; //���һ����

    // ��ʼ��
    for (i = 1; i <= len; i++)
    {
        scanf("%d", &data[i]);
        if (i != n)
        {
            right[i] = i + 1;
        }
        else
        {
            right[i] = 0;  //right[i] = 0; ��������
        }
        printf("t = %d\n", right[i]);

    }
    len++;
    scanf("%d", &data[len]);

    t = 1;
    while (t != 0)
    {
        // ��ǰ���ұߵ����ִ����������������
        if (data[right[t]] > data[len])
        {
            right[len] = right[t]; //���һ������ָ��ǰ��ָ�����һ������
            right[t] = len; //��ǰ��ָ�����һ������
            break;
        }
        // �� right[t] == 0 ˵�� �Ѿ��������� ������Ϊ�����
        if (right[t] == 0)
        {
            right[t] = len;
            right[len] = 0;
        }
        t = right[t];
    }

    // ���
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
