#include <stdio.h>


int main(void)
{
	int num, nine_count = 0;
	scanf("%d", &num);

	while(num)
	{
		if((num % 10) == 9)
			nine_count++;
		if(nine_count > 1)
		{
			printf("NO");
			return 0;
		}
		num = num / 10;
	}	 
    if (nine_count == 1) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
	return 0;
}
