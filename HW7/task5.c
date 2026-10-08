#include <stdio.h>

int conv_to_bi(int n) {
    if (n < 2)
        return n;
    return conv_to_bi(n / 2) * 10 + (n % 2);
}

int main(void)
{
	int n;
	scanf("%d", &n);
	printf("%d\n", conv_to_bi(n));
	return 0;
}
