#include <stdio.h>
struct carrige
{
	int data;
	struct carrige *next;
}; 
int main()
{
	struct carrige first, second, third;
	struct carrige *p;
	int i;
	first.data = 1; first.next = &second;
	second.data = 2;second.next = &third;
	third.data = 3;third.next = NULL;
	for(p = &first;p != NULL; p = p->next)
	{
		printf ("%5d", p->data);
	}
		return 0;
}
