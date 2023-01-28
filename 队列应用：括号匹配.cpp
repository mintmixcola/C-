int matching(char exp[])
//括号匹配算法，exp为括号序列，用字符数组存储，匹配失败返回0，成功返回1
{
	int state = 1;
	SqStack S;	//定义一个顺序栈
	char ch;	//存储栈顶元素
	while (exp[i] != '/0' && state)	//当exp[i] == '/0'表示括号序列结束
	{
		switch (exp[i])
		{
			case "(":
			{
			Push(&S,exp[i]);
			i++;	
				break;
			}
			case ")":
			{
				if(!StackEmpty (S))
				{
					GetTop(S,&ch);
					if(ch == "(")	//左右括号匹配，出栈；
					{
						Pop(S,&ch);
						i++;
					 } 
					 else 
					 {
					 	state = 0;
					 }
				}
				else
					 {
					 	state = 0;
					 }
				break;
			}
			
		}
	 } 
	 if(StackEmpty(S) && state)	return 1;
	 else return 0;
 } 
