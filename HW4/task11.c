#include <stdio.h>

int main(void)
{
	int arr[5];
	int x, min_num, max_num, count = 0;
	
	while((count < 5) && ((scanf("%d", &x)) == 1))
		arr[count++] = x;
	if(count == 0)
		return 0;
	min_num = max_num = arr[0];
	for(int i = 1; i < 5; i++)
	{
		if(max_num < arr[i])
			max_num = arr[i];
		if(min_num > arr[i])
			min_num = arr[i];
		}
	printf("%d\n", min_num + max_num);
	
	return 0;
}
	
