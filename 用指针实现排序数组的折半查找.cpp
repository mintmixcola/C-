#include <stdio.h>

int find (int a[], int len, int key);

const int LEN = 5;
 
int main ()
{
	int a[] = {11, 22, 33, 44, 55};
	if (find(a,LEN,33) > 0)
		printf("Found.");
	else printf("Not found");
	
	return 0;
 } 
 
int find (int a[], int len, int key)
{
	int *head = a, *tail = a + len - 1;//头尾指针 
	int *mid;
	
	while (head <= tail)
	{
		mid = head + (tail - head) / 2;//中间指针 
		if (*mid == key)
			return 1;
		else if (*mid < key)//说明待查数在mid指针后面
		 
			head = mid + 1;
		else  			//否则在前面 
			tail = mid - 1;
	}
	return -1;
}
