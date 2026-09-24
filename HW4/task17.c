#include <stdio.h>

int main(void)
{
	int x;

	scanf("%d", &x);
	if(x < 3 || x == 12) printf("winter");
	else if (x >= 3 && x < 6) printf("spring");
	else if (x >= 6 && x < 9) printf("summer");
	else printf("autumn");

	return 0;
}
