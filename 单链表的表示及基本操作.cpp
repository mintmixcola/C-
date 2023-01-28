//���Ա�ĵ����洢�ṹ����
typedef struct LNode
{
	ElemType data;
	struct LNode *next;
 } LNode, *LinkList;
 /*���涨���LNode�ǽ������ͣ�LinkList��ָ��LNode������͵�ָ�����͡��ɶ���һ��LinkList
 ���͵ı���L����LinkList L,��Ϊ�������ͷָ�룬����ʾһ�������� ����LΪ�գ�L=NULL),��
 ����ʾ�����Ա�Ϊ�ձ��䳤��nΪ�㡣*/
 
 
 //������ĳ�ʼ��
 LinkList InitList_L(LinkList L)
 /*����һ����������L������ͷָ�룬ʧ�ܷ���0.*/ 
 {
 	L = (LNode *)malloc(sizeof(LNode)) ;//����һ��ͷ���
	if(!L) return 0;
	L->next = NULL;//ͷ����ָ����Ϊ�� 
	return L; //���ص���ͷ����ָ�뼴��ַ�� 
  } 
  
  
  //������Ĳ���
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
	
	
	
	//������Ľ���
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
			p->next = NULL;	q->next = p; q =p;	//���ý����뵽��β 
		 } 
	 }
	//���㷨��ʱ�临�Ӷ�ΪOn�� 
	
	
	/*������Ĳ���*/
	int LocationElem_L(LinkList L,ElemType e)
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
	
