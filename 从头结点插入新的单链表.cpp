	 LinkList CreateList_L(int n)
	 {
	 	LNode *L, *p, *q;
	 	int i;
	 	L = (LNode *)malloc(sizeof(LNode));
	 	L->next = NULL;	//�Ƚ���һ����ͷ���ĵ�����
		q = L;	//q�ĳ�ʼֵָ��ͷ��� 
		for(i = 1;i <= n; ++i)
		{
			p  = (LNode *)malloc(sizeof(LNode));	//�����½�� 
			printf("�������%d��Ԫ�ص�ֵ��",i);
			scanf("%d",&p->data);	//����Ԫ��ֵ�� 
			p->next = L->next; L->next = p;	//���ý����뵽ͷ���� 
		 } 
	 }
