#include <stdio.h>

void check_sym(void)
{
	char c;
	int count_l = 0, count_r = 0;
	if((c = getchar()) != '(')
	{
		printf("NO\n");
		return;
	}
	while((c = getchar()) != '\n')
	{
		if(c == '(')
			count_l++;
		else if(c == ')')
			count_r++;
	}
    if ((count_l + 1) == count_r)
        printf("YES\n");
    else
        printf("NO\n");
	
}
int main(void)
{
		check_sym();

	return 0;
}
