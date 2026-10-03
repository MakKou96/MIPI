#include <stdio.h>

int grow_up(int n)
{
	int first_num, next_num;
	first_num = n % 10;
	n /= 10;
	while(n)
	{
		next_num = n % 10;
		if(next_num < first_num)
			first_num = next_num;
		else
		{
			printf("NO");
			return 0;
		}
		n /= 10;
	}
	printf("YES");
}
int main(void)
{
	int x;
	scanf("%d", &x);
	grow_up(x);
	return 0;
}
