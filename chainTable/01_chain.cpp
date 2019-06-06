#include <stdio.h>
#include <stdlib.h>

/*
     定义结构体，链表的单元结构 数据+下一节点地址
*/
struct node
{
    int data;
    struct node *next;
};

int main()
{
    //  初始化变量
    struct node *head, *p, *q, *t;
    int i, n, a;
    scanf("%d", &n);
    head = NULL; //初始化head 指向空

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
        q = p; //q存储当前节点
    }

    //打印 链表
    t = head;
    while (t != NULL)
    {
        printf("%d ", t->data);
        t = t->next;
    }



    //插入链表
    scanf("%d", &a);
    t = head;
    while (t != NULL)
    {
        // t为末尾节点 或 t下一节点得值大于a
        if (t->next == NULL || t->next->data > a)
        {
            p = (struct node *)malloc(sizeof(struct node)); //malloc 动态开辟内存 大小为struct node 得大小
            p->data = a;
            p->next = t->next; // p->next 指向t->next
            t->next = p;
            break;
        }
        t = t->next;
    }

	// t 初始化
    t = head;
    while(t != NULL)
    {
        printf("%d ", t->data);
        t = t->next;
    }

    getchar();getchar();
    return 0;
}
