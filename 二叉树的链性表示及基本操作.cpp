/*�������Ķ�������*/
typedef struct BiTNode
{
	elemtype data;
	struct BiTNode *Ichild,*rchild;//���Һ���ָ�� 
 } BiTNode,BiTree*;
 /*����һ�ſն�����*/
 int Initiate(BiTree bt)
 /*��ʼ������������*bt��ͷ��㣬0��ʾ����ʧ�ܣ�1��ʾ�ɹ���*/
 {
 	if ((*bt=(BiTNode *)malloc(sizeeof(BiTNode)))==NULL)
 	return 0;
 	*bt->Ichild = NULL;
 	*bt->rchild = NULL;
 	return 1;
  } 
  /*����һ�Ŷ�����*/
  BiTree Create(elemtype x,BiTree Ibt,BiTree rbt)
  /*����һ����XΪ���ڵ��������ֲ��Ibt ��rbtΪ���������Ķ�����*/
  {
  	BiTree p;
  	if((p=(BiTNode *)malloc(sizeof(BiTNode)))=NULL)
  	return NULL;
  	p->data = x;
  	p->Ichild = Ibt;
  	p->rchild =rbt;
  	return p;
   } 
  /*�������в���һ���ڵ�*/
  BiTree InsertL(BiTree bt,elemtype x,BiTree parent)
  /* �ڶ�����bt�Ľ��parent������������������Ԫ��x*/
  {
  	BiTree p;
  	if(parent == NULL)
  	{
  		printf("\n�������");
		  return NULL; 
	  }
	if((p=(BiTNode *)malloc(sizeof(BiTNode)))=NULL)
	return NULL;
	p->data = x;
	p->Ichild = NULL;
	p->rchild = NULL;
	if(parent->Ichild == NULL)
	parent->Ichild = p;
	else
	{
		p->Ichild = parent->Ichild;
		parent->Ichild =p;
	}
	return bt;
   } 
   /*������ɾ�����*/
   BiTree DeleteL(BiTree bt,BiTree parent)
   /*�ڶ�����bt��ɾ�����parent ��������*/
   {
   	BiTree p;
   	if(parent == NULL || parent ->Ichild == NULL)
   	{
   		printf("\nɾ������");
   		return NULL;
	   }
	   p=parent->Ichild;
	   parent->Ichild = NULL;
	   /*��PΪ��Ҷ�ӽڵ�ʱ������ɾ�����ͷ�����ɾ���������Ŀռ�*/
	   free (p);
	   /*��Ҫɾ��������֧�еĽ�㣬���ú�����ܵı���������ʵ��*/
	   return br; 
	} 
	/*�������������*/
	void PreOrder(BiTree bt)
	/*�������������bt*/
	{
	if(bt == NULL)return;/*�ݹ���õĽ�������*/
	Visit(bt->data);/*���ʽ��������򣬼����ڵ�*/
	PreOrder(bt->Ichild);//�������bt��������
	PreOrder(bt->rchild);//����ݹ����bt��������	
	 } 
	 /*�������������*/
	 viod PostOrder(BiTree bt)
	 /*�������������bt*/
	 {
	 	if(bt == NULL) return;	//�ݹ���õĽ�������
		 PostOrder(bt->Ochild);	//����ݹ����bt��������
		 PostOrder(bt->rchild);	//�������bt��������
		 Vist(bt->data);	//���ʽ��������� 
	 	
	  } 
