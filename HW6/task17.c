#include <stdio.h>

int is_happy_number(int n)
{
	int sum = 0, pow = 1;
	while(n)
	{
		sum += n% 10;
		pow *= n %10;
		n /= 10;
	}
	if( sum == pow)
		printf("YES");
	else
		printf("NO");
}
int main(void)
{
	int n;
	scanf("%d", &n);
	is_happy_number(n);

	return 0;
}
