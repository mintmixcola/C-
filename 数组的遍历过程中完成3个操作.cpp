#include <stdio.h>

double inc (double e)
{
	return ++e;
 } 
 
 double square(double e)
 {
 	return e * e;
 }
 
 double negative(double e)
 {
 	return -e;
 }
 
 double out(double e)
 {
 	printf("%7.2f", e);
 	return e;
 }
 
 void traverse(double a[], int len,double (*f)(double))
 {
 	int i;
 	
 	for (i = 0;i < len; ++i) a[i] = f(a[i]);
 	
 }
 
 int main()
 {
 	#define N 10
	 double a[10] = {0.9, -1.1,  2.2, 3.3, -4.4, 5.5, 6.6, 7.7, 8.8,-9.9} ;
	 
	 printf("origininal:\n");
	 traverse(a,N,out);
	 putchar('\n');
	 
	 printf("increased:\n");
	 traverse(a,N,inc);
	 traverse(a,N,out);
	 putchar('\n');
	 
	 printf("squared:\n");
	 traverse(a,N,square);
	 traverse(a,N,out);
	 putchar('\n');
	 
	  printf("negatived:\n");
	 traverse(a,N,negative);
	 traverse(a,N,out);
	
	
	return 0;
 }
