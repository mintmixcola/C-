/*˫������Ĵ洢�ṹ����*/
typedef struct DuLNode
{
	ElemType data;
	struct DuLNode *prior;
	struct DuLNode *next;
 } DuLNode,*DuLinkList;
 
 
 /*˫�������еĽ�����*/
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
  
  
  /*˫�������н��Ĳ���*/
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
   
   
   /*˫�������н���ɾ��*/
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
	
	
	/*˫������Ĵ���*/
	DuLinkList CreateDuLinkList_L(int n)
	{
		DuLNode *p,*L,*K,*q;
		int i;
		L = (DuLNode *)malloc(sizeof(DuLNode ));
		L->next = L;q =L;K = L;	//K�ǿ���ɾ���ģ����ࡣ 
		for(i=1; i<=n;++i)
		{
			p =(DuLNode *)malloc(sizeof(DuLNode ));
			printf("�������%d��Ԫ�ص�ֵ��",i);
			scanf("%d",&p->data);
			p->prior =K;
			p->next = NULL;
			q->next = p;
			K = p;
			q = p; 
		}
		return L;
	}
	
	
	
	/*��������������La��Lb�ϲ�Ϊһ����������*/
	LinkList MergeList_L(LinkList La, LinkList Lb)
	/*��֪������La��Lb��Ԫ�ذ�ֵ�ǵݼ����С��鲢La��Lb�õ��µĵ�����Lc��Lc��Ԫ��Ҳ��ֵ�ǵݼ�����*/ 
	{
		LNode *pa, *pb, *pc, *Lc;
		pa = La->next;pb = Lb->next;
		Lc=pc=La;	/*��La��ͷ�����ΪLc��ͷ���*/ 
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
			pc->next = pa?pa:pb;/*����ʣ���*/ 
			free(Lb);	/*�ͷ�Lb��ͷ���*/ 
			return Lc;
		}
	 } 
