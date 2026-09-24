#include <stdio.h>

int main(void)
{
	// int arr[5];
	// int x, min_num, count = 0;
	
	// while((count < 5) && ((scanf("%d", &x)) == 1))
	// 	arr[count++] = x;
	// min_num = arr[0];
	// for(int i = 1; i < 5; i++)
	// 	if(min_num > arr[i])
	// 		min_num = arr[i];
	// printf("%d\n", min_num);
	
	// return 0;
		int a, b, c, d, e, min_num;
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
	min_num = a < b ? a : b;
	min_num = min_num < c ? min_num : c;
	min_num = min_num < d ? min_num : d;
	min_num = min_num < e ? min_num : e;
	printf("%d\n", min_num);
}
	
