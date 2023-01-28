# include <stdio.h>
int f(int x)
{
	int one,ten,hundred;
	one = x % 10;
	ten = x / 10 % 10;
	hundred = x / 100;
	return hundred*2+ten*3+one*4;
}
int g(int x)
{
	int one,ten,hundred,thousand,W;
	one = x % 10;
	ten = x % 100 / 10 ;
	hundred = x % 1000 / 100;
	thousand = x % 10000 / 1000;
	W = x / 10000;
	return W*5+thousand*6+hundred*7+ten*8+one*9;
}
int main()
{
	int laungage,league,number;
	char code;
	int code2;
	scanf ("%d-%d-%d-%c",&laungage,&league,&number,&code);
	code2 = (laungage+f(league)+g(number)) % 11;
	if (code2 !=10 )
	     {
	     if (code2 != code-'0')	   	     
	   	      printf ("%d-%03d-%05d-%d",laungage,league,number,code2);
	     else 
	          printf ("Right"); 
         }
    else 
    	{
    	if (code != 'X') 
			printf ("%d-%03d-%05d-X",laungage,league,number);	
		else 
			printf ("Right"); 
		}
        
	return 0;
}


