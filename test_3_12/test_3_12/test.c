#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//���� I : �߳�08 - 01����д�������������β���������ݽ���һ������
//struct node
//{
//	int x;
//	struct node* next;
//};
//
//void insert_tail(struct node* H, int p)
//{//H����ͷ��㡣ͷ������Ľ���ǵ�һ�����ݽ��
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

//���� J : �߳�08 - 02����д����������һ������
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
//���� K : �߳�08 - 03����д�����������в�������
//#include<stdio.h>
//struct node
//{
//	int x;
//	struct node* next;
//};
//
//void insert(struct node* H, int p)
//{//H����ͷ��㡣ͷ������Ľ���ǵ�һ�����ݽ��
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

//���� L : �߳�08 - 04��������������ɾ��ָ����
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
////�������ܣ���headָ���������ɾ��һ���ڵ�����ΪnodeData�Ľڵ㡣ע�⣺��������ͷ��㡣
////��������ɾ���ڵ��������ͷ�ڵ�ָ��
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
//    struct Link* head = NULL; //ָ������ͷ
//    for (i = 1; i <= 5; i++)
//        head = AppendNode(head);
//    scanf("%d", &data1);
//    DeleteNode(head, data1);
//    DispLink(head);
//    return 0;
//}
////�������ܣ��½�һ���ڵ㣬�����ýڵ���ӵ������ĩβ��������ӽڵ��������ͷ�ڵ�ָ��
//struct Link* AppendNode(struct Link* head)
//{
//
//    struct Link* p = NULL;
//    struct Link* pr = head;
//    int data;
//    p = (struct Link*)malloc(sizeof(struct Link)); //Ϊ�½ڵ������ڴ�
//    if (p == NULL)             //�������ڴ�ʧ�ܣ����ӡ������Ϣ���˳�����
//    {
//        exit(0);
//    }
//    if (head == NULL) //��ԭ����Ϊ�ձ����½��ڵ���Ϊ�׽ڵ�
//    {
//
//        head = p;
//    }
//    else                  //��ԭ����Ϊ�ǿգ����½��ڵ���ӵ���β
//    {
//
//        //��δ����β��������ƶ�ָ��pr��ֱ��prָ���β
//        while (pr->next != NULL)
//        {
//
//            pr = pr->next;
//        }
//        pr->next = p; //���½��ڵ���ӵ������ĩβ
//    }
//    pr = p;              //��prָ���½��ڵ�
//    scanf("%d", &data);        //����ڵ�����
//    pr->data = data;
//    pr->next = NULL; //���½��ڵ���Ϊ��β
//    return head;                //������ӽڵ��������ͷ�ڵ�ָ��
//}
////�����Ĺ��ܣ���ʾ�����Ѿ������õĽڵ�Ľڵ�ź͸ýڵ�������������
//void DispLink(struct Link* head)
//{
//
//    struct Link* p = head;
//    while (p != NULL)            //�����Ǳ�β����ѭ����ӡ
//    {
//        printf("%d\n", p->data); //��ӡ��j���ڵ������
//        p = p->next;              //��pָ����һ���ڵ�
//    }
//}