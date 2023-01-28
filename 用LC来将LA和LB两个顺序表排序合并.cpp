int Mergelist_Sq(SqqList LA.SqList LB,SqList*LC)
//已知顺序线性表LA和LB的元素按值非递减排列，归并LA和LB得到新的顺序线性表LC，LC的元
//素也按值非递减排列，成功返回1，失败返回0.
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
