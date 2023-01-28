/*二叉树的二叉链表*/
typedef struct BiTNode
{
	elemtype data;
	struct BiTNode *Ichild,*rchild;//左右孩子指针 
 } BiTNode,BiTree*;
 /*建立一颗空二叉树*/
 int Initiate(BiTree bt)
 /*初始化建立二叉树*bt的头结点，0表示建立失败，1表示成功。*/
 {
 	if ((*bt=(BiTNode *)malloc(sizeeof(BiTNode)))==NULL)
 	return 0;
 	*bt->Ichild = NULL;
 	*bt->rchild = NULL;
 	return 1;
  } 
  /*生成一颗二叉树*/
  BiTree Create(elemtype x,BiTree Ibt,BiTree rbt)
  /*生成一颗以X为根节点的数据域植以Ibt 和rbt为左右子树的二叉树*/
  {
  	BiTree p;
  	if((p=(BiTNode *)malloc(sizeof(BiTNode)))=NULL)
  	return NULL;
  	p->data = x;
  	p->Ichild = Ibt;
  	p->rchild =rbt;
  	return p;
   } 
  /*二叉树中插入一个节点*/
  BiTree InsertL(BiTree bt,elemtype x,BiTree parent)
  /* 在二叉树bt的结点parent的左子树插入结点数据元素x*/
  {
  	BiTree p;
  	if(parent == NULL)
  	{
  		printf("\n插入出错");
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
   /*二叉树删除结点*/
   BiTree DeleteL(BiTree bt,BiTree parent)
   /*在二叉树bt中删除结点parent 的左子树*/
   {
   	BiTree p;
   	if(parent == NULL || parent ->Ichild == NULL)
   	{
   		printf("\n删除出错");
   		return NULL;
	   }
	   p=parent->Ichild;
	   parent->Ichild = NULL;
	   /*当P为非叶子节点时，这样删除仅释放了所删子树根结点的空间*/
	   free (p);
	   /*若要删除子树分支中的结点，需用后面介绍的遍历操作来实现*/
	   return br; 
	} 
	/*先序遍历二叉树*/
	void PreOrder(BiTree bt)
	/*先序遍历二叉树bt*/
	{
	if(bt == NULL)return;/*递归调用的结束条件*/
	Visit(bt->data);/*访问结点的数据域，即根节点*/
	PreOrder(bt->Ichild);//先序遍历bt的左子树
	PreOrder(bt->rchild);//先序递归遍历bt的右子树	
	 } 
	 /*后序遍历二叉树*/
	 viod PostOrder(BiTree bt)
	 /*后序遍历二叉树bt*/
	 {
	 	if(bt == NULL) return;	//递归调用的结束条件
		 PostOrder(bt->Ochild);	//后序递归遍历bt的左子树
		 PostOrder(bt->rchild);	//后序遍历bt的右子树
		 Vist(bt->data);	//访问结点的数据域 
	 	
	  } 
