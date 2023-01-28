	 LinkList CreateList_L(int n)
	 {
	 	LNode *L, *p, *q;
	 	int i;
	 	L = (LNode *)malloc(sizeof(LNode));
	 	L->next = NULL;	//先建立一个带头结点的单链表
		q = L;	//q的初始值指向头结点 
		for(i = 1;i <= n; ++i)
		{
			p  = (LNode *)malloc(sizeof(LNode));	//生成新结点 
			printf("请输入第%d个元素的值：",i);
			scanf("%d",&p->data);	//输入元素值。 
			p->next = L->next; L->next = p;	//将该结点插入到头结点后。 
		 } 
	 }
