int matching(char exp[])
//����ƥ���㷨��expΪ�������У����ַ�����洢��ƥ��ʧ�ܷ���0���ɹ�����1
{
	int state = 1;
	SqStack S;	//����һ��˳��ջ
	char ch;	//�洢ջ��Ԫ��
	while (exp[i] != '/0' && state)	//��exp[i] == '/0'��ʾ�������н���
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
					if(ch == "(")	//��������ƥ�䣬��ջ��
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
