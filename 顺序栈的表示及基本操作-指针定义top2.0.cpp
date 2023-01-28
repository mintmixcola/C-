/*Õ»µÄ¶¯Ì¬·ÖÅäË³Ğò½á¹¹´æ´¢ÃèÊö*/
#define STACK_INIT_SIZE 10	/*´æ´¢¿Õ¼ä³õÊ¼»¯·ÖÅäÁ¿*/
#define STACK_INCREMENT 2	/*´æ´¢¿Õ¼ä·ÖÅäÔöÁ¿*/
typedef int SElemType;
typedef struct SqStack
{
	SElemType *base;	/*Õ»µ×Ö¸Õë*/ 
	int *top;	/*Õ»¶¥Ö¸Õë*/ 
	int stacksize;
 } SqStack;	/*Ë³ĞòÕ»*/ 

/*Ö¸ÕëÖ¸ÏòÕ»¶¥ÔªËØ*/	
/*Õ»µÄ³õÊ¼»¯*/ 
int InitStack(SqStack *S)
/*¹¹Ôì¿ÕÕ»£¬³É¹¦·µ»Ø1£¬Ê§°Ü·µ»Ø0*/
{
	S->base =(SElemType *)malloc(STACK_INIT_SIZE*sizeof(SElemType));
	if(!S->base)
		return 0;	//´æ´¢·ÖÅäÊ§°Ü 
	S->base = S->top + 1; 
	 S->stacksize = STACK_INIT_SIZE;
	 return 1;
 } 
 
 
 /*ÈëÕ»*/
 int Push(SqStack *S,SElemType e)
 /*²åÈëÔªËØeÎªĞÂµÄÕ»¶¥ÔªËØ£¬³É¹¦·µ»Ø1£¬Ê§°Ü·µ»Ø2.*/
 {
 	if(S->top - S->base + 1>= S->stacksize)	//Õ»Âú£¬×·¼Ó´æ´¢¿Õ¼ä¡£
	 {
	 	S->base = (SElemType *)realloc(S->base,(S->stacksize + STACK_INCREMENT)*sizeof(SElemType));
	 	if(!(S->base))
	 	{
	 		return 0;	//´æ´¢¿Õ¼ä·ÖÅäÊ§°Ü¡£ 
		 }
		S->top = S->base + S->stacksize -1;
		S->stacksize +=  STACK_INCREMENT;
	  } 
	  *++S->top = e;
	  return 1;
  } 
  
  
  /*³öÕ»*/
  int Pop(SqStack *S,SElemType e) 
  /*ÈôÕ»²»¿Õ£¬ÔòÉ¾³ıSµÄÕ»¶¥ÔªËØ£¬ÓÃe·µ»ØÆäÖµ£¬²¢·µ»Ø1£¬·ñÔò·µ»Ø0*/
  {
  	if(S->top == S->base - 1)	/*Õ»¿Õ*/
	  return 0;
	  *e = *S->top--;
	  return 1; 
   } 
   
   /*È¡Õ»¶¥ÔªËØ*/
   int GetTop(SqStack *S,SElemType e)
   /*ÈôÕ»²»¿Õ£¬ÔòÓÃe·µ»ØSµÄÕ»¶¥ÔªËØ£¬²¢·µ»Ø1£¬·ñÔò·µ»Ø0*/
   {
   	if(S.top >=S.base)
   	{
   		*e = (S.top);
   		return 1;
	   }
	   else
	   return 0;
	} 
