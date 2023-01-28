#include <stdio.h>
#include <stdlib.h>
#define INIT_SIZE 100
#define INCREMENT 10
//���Ա�ĵ����洢�ṹ����
typedef int ElemType;  //Ĭ����������Ϊint
typedef struct LNode
{
	ElemType data;
	struct LNode *next;
 } LNode, *LinkList;
 /*���涨���LNode�ǽ������ͣ�LinkList��ָ��LNode������͵�ָ�����͡��ɶ���һ��LinkList
 ���͵ı���L����LinkList L,��Ϊ�������ͷָ�룬����ʾһ�������� ����LΪ�գ�L=NULL),��
 ����ʾ�����Ա�Ϊ�ձ��䳤��nΪ�㡣*/
 



//��ȡ�����С
int GetMaxAndMin(LNode *L)
{
	LNode *p,*pMin,*pMax;
    pMin=pMax=p=L->next;
	while(p)
	{
		if (p->data<pMin->data)pMin=p;
		if (p->data>pMax->data)pMax=p;
		p=p->next;
	}
	return 1;
}


//ɾ���ظ�Ԫ��
int LinkListDeleteDup(LNode *L)
{
	LNode *p1,*p2;
	LNode *q;
	p1=L->next;
	p2=p1;
	while(p1)
	{
		while(p2->next)
		{
			if(p2->next->data==p1->data)
			{
				q=p2->next;
				p2->next=q->next;
				free(q);
			}
			p2=p2->next;
		}
		p1=p1->next;
		p2=p1;
	}
    return 1;
}


//ɾ��ż���ڵ�
int LinkListDeleteEven(LNode *L)
{
	LNode *p,*q;
	p=L->next;
	q=L;
	while(p)
	{
		if (0==p->data%2)
		{
			q->next=p->next;
			free(p);
			p=q->next;
		}
		else
		{
			q=p;
			p=q->next;
		}
	}
	return 1;
}

/*������Ĳ���*/
	int LocationElem_L(LinkList L.ElemType e)
	//�ڴ�ͷ���ĵ�����L�в��������ֵ��ͬ��Ԫ�ص�λ��
	{
		LNode *p;
		int i;
		p = L->next;i = 1;
		while(p && p->data!=e)
		{
			p = p->next;
			i++;
		 } 
		 if(p==NULL)
		 return 0;
		 else return i;
	 } //���㷨��ʱ�临�Ӷ�΢��O(n) 
	 
	 int ListInsert_L(LinkList L, int i, ElemType e)
  /*�ڴ�ͷ���ĵ�����L�еĵ�i��λ��֮ǰ����Ԫ��e���ɹ�����1��ʧ�ܷ���0*/
  {
  	LNode *p, *s;
  	int i;
  	p = L;
  	j = 0;
  	while(p && j<i-1)
  	{
  		p = p->next;	//Ѱ�ҵ�i-1����� 
		++j;
	  }
	
	if(!p || j>i-1)	return 0;	//iֵ���Ϸ��� 
	s = (LNode *)malloc(sizeof(LNode));	//�����½��
	s->data = e;
	s->next = p->next;	p->next = s;	//ʵ�ֲ���
	return 1; 
   } 
   
   //�������ɾ��
   int ListDelete_L(LinkList L,int i,ElemType *e)
   /*�ڴ�ͷ���ĵ�����L�У�ɾ����i��Ԫ�أ�����e������ֵ2���ɹ�����1��ʧ�ܷ���0*/
   {
   	LNode *p, *q;
   	int j;
   	p = L;j = 0;
   	while (p->next && j<i-1)	//Ѱ�ҵ�i����㣬����pָ����ǰ����
	{
		p = p->next;	++j;
	 } 
	 if(!(p->next) || j>i-1)	return 0;	//ɾ��λ�ò��Ϸ��� 
	 q=p->next;
	 *e = q->next; 	//��e���ر�ɾ������ݵ�ֵ 
	 p->next = q->next;
	free(q);	//ɾ�����ͷŽ�㡣
	return 1; 
	} 
	//���㷨��ʱ�临�Ӷ�ΪOn��
