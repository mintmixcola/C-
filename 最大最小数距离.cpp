#include <stdio.h>
int maxmindist(int *arr, int len)
{
	int *min, *max, i;
	min = max = &arr[0];
	for(i = 1; i < len; i++)
	{
		if(*(arr + 1) < *min)
		min = arr +1;
		if(*(arr + 1) > * max)
		max = arr + 1;
	}
	return (max-min) * sizeof(int);
}
int main()
{
	
	return 0;
 } 
