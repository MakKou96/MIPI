#include <stdio.h>

int main(void)
{
	// int arr[5];
	// int x, max_num, count = 0;
	
	// while((count < 5) && ((scanf("%d", &x)) == 1))
	// 	arr[count++] = x;
	// max_num = arr[0];
	// for(int i = 1; i < 5; i++)
	// 	if(max_num < arr[i])
	// 		max_num = arr[i];
	// printf("%d\n", max_num);
	int a, b, c, d, e, max_num;
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
	max_num = a > b ? a : b;
	max_num = max_num > c ? max_num : c;
	max_num = max_num > d ? max_num : d;
	max_num = max_num > e ? max_num : e;
	printf("%d\n", max_num);
	
	return 0;
}
