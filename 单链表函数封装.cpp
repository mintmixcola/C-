#include <stdio.h>
#include <stdlib.h>
#define INIT_SIZE 100
#define INCREMENT 10
//线性表的单链存储结构描述
typedef int ElemType;  //默认数据类型为int
typedef struct LNode
{
	ElemType data;
	struct LNode *next;
 } LNode, *LinkList;
 /*上面定义的LNode是结点的类型，LinkList是指向LNode结点类型的指针类型。可定义一个LinkList
 类型的变量L，如LinkList L,作为单链表的头指针，来表示一个单链表 。若L为空（L=NULL),则
 所表示的线性表为空表，其长度n为零。*/
 



//获取最大最小
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


//删除重复元素
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


//删除偶数节点
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

/*单链表的查找*/
	int LocationElem_L(LinkList L.ElemType e)
	//在带头结点的单链表L中查找与给定值相同的元素的位序
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
	 } //改算法的时间复杂度微博O(n) 
	 
	 int ListInsert_L(LinkList L, int i, ElemType e)
  /*在带头结点的单链表L中的第i个位置之前插入元素e，成功返回1，失败返回0*/
  {
  	LNode *p, *s;
  	int i;
  	p = L;
  	j = 0;
  	while(p && j<i-1)
  	{
  		p = p->next;	//寻找第i-1个结点 
		++j;
	  }
	
	if(!p || j>i-1)	return 0;	//i值不合法。 
	s = (LNode *)malloc(sizeof(LNode));	//生成新结点
	s->data = e;
	s->next = p->next;	p->next = s;	//实现插入
	return 1; 
   } 
   
   //单链表的删除
   int ListDelete_L(LinkList L,int i,ElemType *e)
   /*在带头结点的单链表L中，删除第i个元素，并由e返回其值2，成功返回1，失败返回0*/
   {
   	LNode *p, *q;
   	int j;
   	p = L;j = 0;
   	while (p->next && j<i-1)	//寻找第i个结点，并令p指向其前驱。
	{
		p = p->next;	++j;
	 } 
	 if(!(p->next) || j>i-1)	return 0;	//删除位置不合法。 
	 q=p->next;
	 *e = q->next; 	//用e返回被删结点数据的值 
	 p->next = q->next;
	free(q);	//删除并释放结点。
	return 1; 
	} 
	//改算法的时间复杂度为On。
