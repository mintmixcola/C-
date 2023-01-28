//线性表的动态分配顺序储存结构描述
#define INIT_SIZE 100 //线性表存储空间的初始分配量

#define INCREMENT 10 //线性表存储空间的分配增量

typedef int ElemType;  //默认数据类型为int
typedef struct
{
	ElemType *elem;  //存储空间的基地址。 
	int length;  //当前长度 
	int listsize;  //当前分配的存储容量（以sizeof(ElemType)为单位） 
 } SqList;
 
 
//顺序表的初始化
 int InitList_Sq(SqList)
 /*初始化顺序表，成功返回1，失败返回0*/
 {
 L->elem = (ElemType*)malloc(INIT_SIZE*sizeof(ElemTYPE));
 if(!L->elem)	return 0;	//初始化失败
 L->length=0;	//因为该表目前没有元素
 L->listsize = INIT_SIZE;
 return 1;
 }
 
 
 //顺序表的插入
 int ListInsert_Sq(SqList *L,int i,ElemType e)
 /*在顺序表	L的第i个位置之前插入新的元素e，成功返回1，失败返回0*/
 {
 	int j;
 	ElemType *newbase;
	 if(i<1 || i>L-length + 1)	return 0;	//插入位置不合法
	 if(L->length>=L->listsize)	//当前存储空间已满，增加分配
	 {
	 	newbase = (ElemType *)realloc(L->elem,(L->listsize+
		 				INCREMENT)*sizeof(ElemType));
	if(!newbase)	return 0;	//存储空间分配失败
		L->elem = newbase;
		L->listsize += INCREMENT; 
	  } 
	  for(j=L->length-1;j>=i-1;j--)
	  	L->elem[j+1] = L->elem[j];	//插入位置及之后的元素后移
		L->elem[i-1] = e;	//插入e
		++L->length;	//表长增1
		return 1; 
  }  
   
   
   //顺序表的查找
   {
   int LocateElem_Sq(SqList L,ElemType e)
   //在顺序线性表L中查找第1个值与e相等的元素的位序，若找到，则返回其在L中的位序，否则返回0；
   {
   	int i=1;	//i的初值为第一个元素的位序
	  while(i<=L.length && L.elem[i-1]!=e)   i++;
	  if(i<=L.length)return i;
	  else return 0;	//超过了表的长度 
	} 
	
	
	//顺序表的删除
	int ListDelete_Sq(SqList *L,int i,ElemType *e)
	//在顺序表L中删除第i个元素，并用e返回其值，成功返回1，失败返回0 
	{
		int j;
		if(i<1 ||i>L->length)	return 0;//i的值不合法 
		*e=L->elem[i-1];	//被删除的元素的值赋给e 
		for(j=i-1;j < L->length - 1 ;j++)
		{
			L->elem[j]= L->elem[j+1];	//被删元素之后的元素前移。 
			
		}
		--L->length;
		return 1;
	 } 
   
   
   
   
   
   
   
   
   
   
   
   
   
   
    
