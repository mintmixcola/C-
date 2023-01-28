//带头结点的单链表中删除一个最小结点的算法。
LinkList delete_min(LinkList L,int i,ElemType *e) //i-1是结点序号，e返回其值，失败返回0 
{
	LNode *p, *q;
   	int j;
   	int min;
   	p = L;j = 0;
   	while (p->next)	//寻找第i个结点，并令p指向其前驱。
	{
		if(p->next < min)
		{
			min = p->next; 
		}
	 }  
	 q=p->next;
	 *e = min; 	//用e返回被删结点数据的值 
	 p->next = q->next;
	free(q);	//删除并释放结点。
	return 1; 
}


//2.0思路
void DeleteMin(LNode *L)	//*L是带头结点的单链表，本算法删除其最小值点
{
	LNode *p,*pre,*q;
	p=L->next;	//*P为工作指针，指向待处理的结点，假定链表非空
	pre = L->next;
	pre = L;	//*pre指向最小值结点的前驱
	q = p;	//*q指向最小值结点，初始假定第一元素结点是最小值结点
	while(p->next != null)
	{
		if(p->next->data<q->data)
		{
			pre = p;	//查最小值结点 
			q =p->next;	
		}	
		P = P->next;	//指针后移 
	 } 
	 pre->next = q->next;	//从链表删除最小值结点 
	 free(q);	//释放最小值结点空间 
 } 
