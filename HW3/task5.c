#include <stdio.h>

int main(void)
{
	int a, b, c;
	float f;
	scanf("%d %d %d", &a, &b, &c);
	f = (float)(a + b + c) / 3;
	printf("%.2f\n", f);
	
	return 0;
}
	
