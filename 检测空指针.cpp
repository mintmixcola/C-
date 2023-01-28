#include <stdio.h>
int main()
{
	char *p = NULL;
	if(p != NULL)
	{
		*P = 'A';
		printf("%c\n",*p);
	 } 
	 else
	 	fprintf(stderr,"Uninitialized pointer.\n");
	return 0;
}
//不能运行，原因未知。估计时编译软件的问题。 
