#include <stdio.h>
int strcmp(const char *s1,const char *s2)
{
	for (; *s1 != '\0' && *s2 != '\0'; ++s1, ++s2)
		if(*s1 != *s2) 
		return 0;
		if(*s1 + *s2 == 0)
		return 1;
		return 0;
}
int main()
{
	char *s1 = "hello"; 
	char *s2 = "hello!";
	printf(strcmp(s1,s2) ? "identical" : "different");
	return 0;
}
