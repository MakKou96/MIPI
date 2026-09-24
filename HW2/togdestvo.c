#include <stdio.h>

int main(void) {
	int not_a = 0, not_b = 0;
	printf("A -> B = !A || B\n\r");
	printf("\n");
	printf("A | B | A -> B|\n\r");
	printf("0 | 0 |   1   |\n\r");
	printf("0 | 1 |   1   |\n\r");
	printf("1 | 0 |   0   |\n\r");
	printf("1 | 1 |   1   |\n\r");
	printf("\n");
	printf("A | B | !A | !A||B |\n\r");
	for(int a = 0; a <= 1; a++)
		for(int b = 0; b <= 1; b++)
		{
			not_a = !a;
			printf("%d | %d |  %d |   %d   |\n\r", a, b, not_a, not_a||b);
		}
	printf("\n");		
	printf("A | B | !A||B | A -> B|\n\r");
	printf("0 | 0 |   1   |   1   |\n\r");
	printf("0 | 1 |   1   |   1   |\n\r");
	printf("1 | 0 |   0   |   0   |\n\r");
	printf("1 | 1 |   1   |   1   |\n\r");	
	printf("\n");		
	printf("A <-> B = (A && B) || (!A && !B)\n\r");
	printf("\n");
	printf("A | B | A <-> B|\n\r");
	printf("0 | 0 |    1   |\n\r");
	printf("0 | 1 |    0   |\n\r");
	printf("1 | 0 |    0   |\n\r");
	printf("1 | 1 |    1   |\n\r");
	printf("\n");
	printf("A | B | !A | !B | A&&B | !A&&!B |(A && B)||(!A && !B)|\n\r");
	for(int a = 0; a <= 1; a++)
		for(int b = 0; b <= 1; b++)
		{
			not_a = !a;
			not_b = !b;
			
			printf("%d | %d |  %d |  %d |   %d  |   %d    |         %d          |\n\r", a, b, not_a, not_b, a&&b, not_a&&not_b, (a&&b)||(not_a&&not_b));
		}
	printf("\n");	
	printf("A | B | A <-> B |(A && B)||(!A && !B)|\n\r");
	printf("0 | 0 |    1    |         1          |\n\r");
	printf("0 | 1 |    0    |         0          |\n\r");
	printf("1 | 0 |    0    |         0          |\n\r");
	printf("1 | 1 |    1    |         1          |\n\r");
    return 0;
}
