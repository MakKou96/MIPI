#include <stdio.h>

void reverse_string() {
	
	int c;
	c = getchar();
    if (c == '.')
        return;
    reverse_string();
    printf("%c", c);
}

int main(void)
{
	reverse_string();
	
	return 0;
}
