#include <stdio.h>

void conv_char(void)
{
	char bykv;
    while (scanf("%c", &bykv) == 1)
    {
		if (bykv == '.')
            break;
        if (bykv >= 'a' && bykv <= 'z')
            bykv = bykv - 32;
        printf("%c", bykv);

    }
}
int main(void)
{

	conv_char();
}
