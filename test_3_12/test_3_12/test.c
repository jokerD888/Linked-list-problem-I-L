#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//问题 I : 高程08 - 01：编写函数，向链表的尾部插入数据建立一个链表。
//struct node
//{
//	int x;
//	struct node* next;
//};
//
//void insert_tail(struct node* H, int p)
//{//H带有头结点。头结点后面的结点是第一个数据结点
//	//struct node* pt= NULL;
//	//struct node* pr = H;
//	//pt = (struct node*)malloc(sizeof(struct node));
//	//if (pt == NULL)
//	//{
//	//	exit(0);
//	//}
//	//while (pr->next != NULL)
//	//{
//	//	pr = pr->next;
//	//}
//	//pr->next = pt;
//	//pr = pt;
//	//pr->x = pt;
//	//pr->next = NULL;
//	//return H;
//	struct node* new= (struct node*)malloc(sizeof(struct node));
//	struct node* pr = H;
//	while (pr->next != NULL)
//	{
//		pr = pr->next;
//	}
//	pr->next = new;
//	pr = new;
//	pr->x = p;
//	pr->next = NULL;
//	return H;
//
//}
//
//void print(struct node* H)
//{
//	struct node* p;
//	p = H->next;
//	while (p != 0)
//	{
//		printf("%d ", p->x);
//		p = p->next;
//	}
//}
//int main()
//{
//	struct node H;
//	int x;
//	int i;
//
//	H.next = 0;
//
//	for (i = 1; i <= 5; i++)
//	{
//		scanf("%d", &x);
//		insert_tail(&H, x);
//	}
//	print(&H);
//}

//问题 J : 高程08 - 02：编写函数，遍历一个链表
#include <stdio.h>
#include <stdlib.h>
#define LEN sizeof(struct STUDENT)
struct STUDENT
{

    long num;
    float score;
    struct STUDENT* next;
};
int n;
void print(struct STUDENT* head)
{
    struct STUDENT* pr = head;
    while (pr->next != NULL)
    {
        printf("%d %f\n", pr->num, pr->score);
        pr = pr->next;
    }
    printf("%d %f\n", pr->num, pr->score);
    return head;
}

struct STUDENT* creat()
{

    struct STUDENT* head, * p1, * p2;  n = 0;
    p1 = p2 = (struct STUDENT*)malloc(LEN);
    scanf("%ld%f", &p1->num, &p1->score);
    head = NULL;
    while (p1->num != 0)
    {

        n = n + 1;
        if (n == 1)

            head = p1;
        else

            p2->next = p1;
        p2 = p1;
        p1 = (struct STUDENT*)malloc(LEN);
        scanf("%ld%f", &p1->num, &p1->score);
    }
    p2->next = NULL;

    return(head);
}
int main()
{

    struct STUDENT* pt;
    pt = creat();
    print(pt);
    return 0;
}
//
//问题 K : 高程08 - 03：编写函数向链表中插入数据
//#include<stdio.h>
//struct node
//{
//	int x;
//	struct node* next;
//};
//
//void insert(struct node* H, int p)
//{//H带有头结点。头结点后面的结点是第一个数据结点
//	struct node* pr = H;
//	struct node* sign=NULL;
//	struct node* new = (struct node*)malloc(sizeof(struct node));
//	while (pr->x < p)
//	{ 
//		sign = pr;
//		pr = pr->next;
//	}
//	pr = sign;
//	new->x = p;
//	new->next = pr->next;
//
//	pr->next = new;
//
//}
//
//void print(struct node* H)
//{
//	struct node* p;
//	p = H->next;
//	while (p != 0)
//	{
//		printf("%d ", p->x);
//		p = p->next;
//	}
//}
//int main()
//{
//	struct node H, * t, * tail;
//	int x;
//	int i;
//	int p;
//
//	H.next = 0;
//	tail = &H;
//
//	for (i = 1; i <= 4; i++)
//	{
//		scanf("%d", &x);
//		t = (struct node*)malloc(sizeof(struct node));
//		t->x = x;
//		t->next = 0;
//
//		tail->next = t;
//		tail = t;
//	}
//	scanf("%d", &p);
//	insert(&H, p);
//
//	print(&H);
//}

//问题 L : 高程08 - 04：从整数链表中删除指定数
//#include <stdio.h>
//#include <stdlib.h>
//struct Link* AppendNode(struct Link* head);
//void DispLink(struct Link* head);
//struct Link
//{
//
//    int data;
//    struct Link* next;
//};
//
////函数功能：从head指向的链表中删除一个节点数据为nodeData的节点。注意：该链表不带头结点。
////函数返回删除节点后的链表的头节点指针
//struct Link* DeleteNode(struct Link* head, int nodeData)
//{
//    struct Link* pr = head;
//    struct Link* tmp = NULL;
//
//    while (pr->data != nodeData)
//    {
//        tmp = pr;
//        pr = pr->next;
//    }
//    tmp->next = pr->next;
//
//}
//
//int main()
//{
//
//    int  i = 0, data1;
//    struct Link* head = NULL; //指向链表头
//    for (i = 1; i <= 5; i++)
//        head = AppendNode(head);
//    scanf("%d", &data1);
//    DeleteNode(head, data1);
//    DispLink(head);
//    return 0;
//}
////函数功能：新建一个节点，并将该节点添加到链表的末尾，返回添加节点后的链表的头节点指针
//struct Link* AppendNode(struct Link* head)
//{
//
//    struct Link* p = NULL;
//    struct Link* pr = head;
//    int data;
//    p = (struct Link*)malloc(sizeof(struct Link)); //为新节点申请内存
//    if (p == NULL)             //若申请内存失败，则打印错误信息，退出程序
//    {
//        exit(0);
//    }
//    if (head == NULL) //若原链表为空表，则将新建节点置为首节点
//    {
//
//        head = p;
//    }
//    else                  //若原链表为非空，则将新建节点添加到表尾
//    {
//
//        //若未到表尾，则继续移动指针pr，直到pr指向表尾
//        while (pr->next != NULL)
//        {
//
//            pr = pr->next;
//        }
//        pr->next = p; //将新建节点添加到链表的末尾
//    }
//    pr = p;              //让pr指向新建节点
//    scanf("%d", &data);        //输入节点数据
//    pr->data = data;
//    pr->next = NULL; //将新建节点置为表尾
//    return head;                //返回添加节点后的链表的头节点指针
//}
////函数的功能：显示所有已经建立好的节点的节点号和该节点中数据项内容
//void DispLink(struct Link* head)
//{
//
//    struct Link* p = head;
//    while (p != NULL)            //若不是表尾，则循环打印
//    {
//        printf("%d\n", p->data); //打印第j个节点的数据
//        p = p->next;              //让p指向下一个节点
//    }
//}