#include <stdio.h>

int main(void)
{
	char bykv;
    while (scanf("%c", &bykv) == 1)
    {
		if (bykv == '.')
            break;
        if (bykv >= 'A' && bykv <= 'Z')
            bykv = bykv + 32;
        printf("%c", bykv);

    }
    return 0;
}
