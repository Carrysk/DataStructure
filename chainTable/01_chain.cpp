#include <stdio.h>
#include <stdlib.h>

/*
     ����ṹ�壬����ĵ�Ԫ�ṹ ����+��һ�ڵ��ַ
*/
struct node
{
    int data;
    struct node *next;
};

int main()
{
    //  ��ʼ������
    struct node *head, *p, *q, *t;
    int i, n, a;
    scanf("%d", &n);
    head = NULL; //��ʼ��head ָ���

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a);
        p = (struct node *)malloc(sizeof(struct node));
        p->data = a;
        p->next = NULL;
        if (head == NULL)
        {
            head = p;
        }
        else
        {
            q->next = p;
        }
        q = p; //q�洢��ǰ�ڵ�
    }

    //��ӡ ����
    t = head;
    while (t != NULL)
    {
        printf("%d ", t->data);
        t = t->next;
    }



    //��������
    scanf("%d", &a);
    t = head;
    while (t != NULL)
    {
        // tΪĩβ�ڵ� �� t��һ�ڵ��ֵ����a
        if (t->next == NULL || t->next->data > a)
        {
            p = (struct node *)malloc(sizeof(struct node)); //malloc ��̬�����ڴ� ��СΪstruct node �ô�С
            p->data = a;
            p->next = t->next; // p->next ָ��t->next
            t->next = p;
            break;
        }
        t = t->next;
    }

	// t ��ʼ��
    t = head;
    while(t != NULL)
    {
        printf("%d ", t->data);
        t = t->next;
    }

    getchar();getchar();
    return 0;
}
