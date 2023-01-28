
#include <stdio.h>
#include <stdlib.h>
#define INIT_SIZE 100
#define INCREMENT 10
/*预定义线性链表相关内容*/
typedef int ElemType;
typedef struct{
	ElemType *elem;
	int length;
	int listsize;
} SqList;

/*初始化线性链表*/
int SqListInit(SqList *L)
{
	L->elem = (ElemType*)malloc(INIT_SIZE*sizeof(ElemType));
	if(!L->elem) return 0;
    L->length=0;
	L->listsize=INIT_SIZE;
	return 1;
}

 
int SqlListInsert(SqList *L,int i,ElemType e)
{
	int j;
	ElemType * newbase;
	if(i<1||i>L->length+1) return 0;
	if(L->length>=L->listsize)
	{
		newbase = (ElemType *)realloc(L->elem,(L->listsize+INCREMENT)*sizeof(ElemType));
		if(!newbase) return 0;
		L->length=*newbase;
    	L->listsize+=INCREMENT;
	}
	for(j=L->length-1;j>=i-1;j--)
		L->elem[j+1]=L->elem[j];
	L->elem[i-1]=e;
	++L->length;
	return 1;
}


int SqListDelete(SqList *L,int i,ElemType *e)
{
  int j;
  if(i<1||i>L->length+1) return 0;
  *e = L->elem[i-1];
  for(j=i-1;j<L->length-1;j++)
		L->elem[j]=L->elem[j+1];
  --L->length;
  return 1;
}

/*实现线性链表查找操作*/
int SqListLocate(SqList L,ElemType e)
{
	int i=1;
	while(i<=L.length&&L.elem[i-1]!=e) i++;
	if(i<=L.length) return i;
	else return 0;
}






