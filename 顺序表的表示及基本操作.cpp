//���Ա�Ķ�̬����˳�򴢴�ṹ����
#define INIT_SIZE 100 //���Ա�洢�ռ�ĳ�ʼ������

#define INCREMENT 10 //���Ա�洢�ռ�ķ�������

typedef int ElemType;  //Ĭ����������Ϊint
typedef struct
{
	ElemType *elem;  //�洢�ռ�Ļ���ַ�� 
	int length;  //��ǰ���� 
	int listsize;  //��ǰ����Ĵ洢��������sizeof(ElemType)Ϊ��λ�� 
 } SqList;
 
 
//˳���ĳ�ʼ��
 int InitList_Sq(SqList)
 /*��ʼ��˳����ɹ�����1��ʧ�ܷ���0*/
 {
 L->elem = (ElemType*)malloc(INIT_SIZE*sizeof(ElemTYPE));
 if(!L->elem)	return 0;	//��ʼ��ʧ��
 L->length=0;	//��Ϊ�ñ�Ŀǰû��Ԫ��
 L->listsize = INIT_SIZE;
 return 1;
 }
 
 
 //˳���Ĳ���
 int ListInsert_Sq(SqList *L,int i,ElemType e)
 /*��˳���	L�ĵ�i��λ��֮ǰ�����µ�Ԫ��e���ɹ�����1��ʧ�ܷ���0*/
 {
 	int j;
 	ElemType *newbase;
	 if(i<1 || i>L-length + 1)	return 0;	//����λ�ò��Ϸ�
	 if(L->length>=L->listsize)	//��ǰ�洢�ռ����������ӷ���
	 {
	 	newbase = (ElemType *)realloc(L->elem,(L->listsize+
		 				INCREMENT)*sizeof(ElemType));
	if(!newbase)	return 0;	//�洢�ռ����ʧ��
		L->elem = newbase;
		L->listsize += INCREMENT; 
	  } 
	  for(j=L->length-1;j>=i-1;j--)
	  	L->elem[j+1] = L->elem[j];	//����λ�ü�֮���Ԫ�غ���
		L->elem[i-1] = e;	//����e
		++L->length;	//����1
		return 1; 
  }  
   
   
   //˳���Ĳ���
   {
   int LocateElem_Sq(SqList L,ElemType e)
   //��˳�����Ա�L�в��ҵ�1��ֵ��e��ȵ�Ԫ�ص�λ�����ҵ����򷵻�����L�е�λ�򣬷��򷵻�0��
   {
   	int i=1;	//i�ĳ�ֵΪ��һ��Ԫ�ص�λ��
	  while(i<=L.length && L.elem[i-1]!=e)   i++;
	  if(i<=L.length)return i;
	  else return 0;	//�����˱�ĳ��� 
	} 
	
	
	//˳����ɾ��
	int ListDelete_Sq(SqList *L,int i,ElemType *e)
	//��˳���L��ɾ����i��Ԫ�أ�����e������ֵ���ɹ�����1��ʧ�ܷ���0 
	{
		int j;
		if(i<1 ||i>L->length)	return 0;//i��ֵ���Ϸ� 
		*e=L->elem[i-1];	//��ɾ����Ԫ�ص�ֵ����e 
		for(j=i-1;j < L->length - 1 ;j++)
		{
			L->elem[j]= L->elem[j+1];	//��ɾԪ��֮���Ԫ��ǰ�ơ� 
			
		}
		--L->length;
		return 1;
	 } 
   
   
   
   
   
   
   
   
   
   
   
   
   
   
    
