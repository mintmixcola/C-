int Mergelist_Sq(SqqList LA.SqList LB,SqList*LC)
//��֪˳�����Ա�LA��LB��Ԫ�ذ�ֵ�ǵݼ����У��鲢LA��LB�õ��µ�˳�����Ա�LC��LC��Ԫ
//��Ҳ��ֵ�ǵݼ����У��ɹ�����1��ʧ�ܷ���0.
{
	int i = 0,j = 0,k = 0;
	LC->listsize = LA.length + LB.length;
	LC->elem = (ElemType *)malloc(LC->sizeof(ElemType));
	if(!LC->elem) return 0;
	while(i<LA.length && j<LB.length)
	{
		if(LA.elem[i] <= LB.elem[j])
			LC->elem[k++]=LA.elem[i++];
		else 
			LC->elem[k++]=LB.elem[j++];
	}
	while(j<LA.length) LC->elem[k++] = LA.elem[i++];
	while(j<LB.length) LC->elem[k++] = LB.elem[i++];
	LC->length=k;
	return 1;
 } 
