//��ͷ���ĵ�������ɾ��һ����С�����㷨��
LinkList delete_min(LinkList L,int i,ElemType *e) //i-1�ǽ����ţ�e������ֵ��ʧ�ܷ���0 
{
	LNode *p, *q;
   	int j;
   	int min;
   	p = L;j = 0;
   	while (p->next)	//Ѱ�ҵ�i����㣬����pָ����ǰ����
	{
		if(p->next < min)
		{
			min = p->next; 
		}
	 }  
	 q=p->next;
	 *e = min; 	//��e���ر�ɾ������ݵ�ֵ 
	 p->next = q->next;
	free(q);	//ɾ�����ͷŽ�㡣
	return 1; 
}


//2.0˼·
void DeleteMin(LNode *L)	//*L�Ǵ�ͷ���ĵ��������㷨ɾ������Сֵ��
{
	LNode *p,*pre,*q;
	p=L->next;	//*PΪ����ָ�룬ָ�������Ľ�㣬�ٶ�����ǿ�
	pre = L->next;
	pre = L;	//*preָ����Сֵ����ǰ��
	q = p;	//*qָ����Сֵ��㣬��ʼ�ٶ���һԪ�ؽ������Сֵ���
	while(p->next != null)
	{
		if(p->next->data<q->data)
		{
			pre = p;	//����Сֵ��� 
			q =p->next;	
		}	
		P = P->next;	//ָ����� 
	 } 
	 pre->next = q->next;	//������ɾ����Сֵ��� 
	 free(q);	//�ͷ���Сֵ���ռ� 
 } 
