#include <stdio.h>

int main(void)
{
	int x1, x2;

	scanf("%d %d", &x1, &x2);
	if(x1 > x2) printf("Above");
	else if(x1 < x2) printf("Less");
	else printf("Equal");
	
	return 0;
}
	
