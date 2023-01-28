/*双向链表的存储结构描述*/
typedef struct DuLNode
{
	ElemType data;
	struct DuLNode *prior;
	struct DuLNode *next;
 } DuLNode,*DuLinkList;
 
 
 /*双向链表中的结点插入*/
 int DuLinkListInsert(DuLNode *L,int i,Elemtype e)
 {
 	DuLNode *p, *s;
 	int j;
 	p = L;j = 0;
 	while(p!=NULL && j<i-1)
 	{
 		p = p->next;
 		++i;
	 }
	 if(p ==NULL || j<i-1)
	 return 0;
	 s = (DuLNode *)malloc(sizeof(DuLNode));
	 s->data = e;
	 s->prior = p;
	 s->next =p->next;
	 p->next->prior=s;
	 p->next = s;
	 return 1; 
  } 
  
  
  /*双向链表中结点的插入*/
  int DuLinkListInsert(DuLNode *L,int i,Elemtype e)
  {
  	DuLNode *p, *s;
  	int j;
  	p = L;j = 0;
  	whlie(p!=NULL && j < i-1)
  		{
  			p = p->next;
  			++i;
		  }
	if(p == NULL && j > i-1)
	{
		return 0;
	}
	s = (DuLNode *)malloc(sizeof(DuLNode ));
	s->data = e;
	s->prior = p;
	s->next = p->next;
	p->next->prior = s;
	p->next = s;
	return 1;
   } 
   
   
   /*双向链表中结点的删除*/
   int DuLinkListDelete(DuLNode *L,int i,Elemtype e)
   {
   	DuLNode *p;
   	int j;
   	p = L;
   	j = 0;
   	while(p->next != NULL && j<=i-1)
   	{
   		p = p->next;
   		++j;
	   }
	if(!(p->next) || j>i)
	{
		return 0;
	}
	*e = p->data;
	p->prior->next = p->next;
	p->next->prior = p->prior;
	free(p);
	return 1;
	} 
	
	
	/*双向链表的创建*/
	DuLinkList CreateDuLinkList_L(int n)
	{
		DuLNode *p,*L,*K,*q;
		int i;
		L = (DuLNode *)malloc(sizeof(DuLNode ));
		L->next = L;q =L;K = L;	//K是可以删掉的，多余。 
		for(i=1; i<=n;++i)
		{
			p =(DuLNode *)malloc(sizeof(DuLNode ));
			printf("请输入第%d个元素的值：",i);
			scanf("%d",&p->data);
			p->prior =K;
			p->next = NULL;
			q->next = p;
			K = p;
			q = p; 
		}
		return L;
	}
	
	
	
	/*将两个有序链表La和Lb合并为一个有序链表*/
	LinkList MergeList_L(LinkList La, LinkList Lb)
	/*已知单链表La和Lb的元素按值非递减排列。归并La和Lb得到新的单链表Lc，Lc的元素也按值非递减排列*/ 
	{
		LNode *pa, *pb, *pc, *Lc;
		pa = La->next;pb = Lb->next;
		Lc=pc=La;	/*用La的头结点作为Lc的头结点*/ 
		while(pa && pb)
		{
			if(pa->data <= pb->data)
			{
				pc->next = pa;
				pc = pa;
				pa = pa->next;
			}
			else 
			{
				pc->next = pb;
				pc = pb;
				pb = pb->next;
			}
			pc->next = pa?pa:pb;/*插入剩余段*/ 
			free(Lb);	/*释放Lb的头结点*/ 
			return Lc;
		}
	 } 
