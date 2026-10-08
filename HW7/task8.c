#include <stdio.h>

void reverse_numab(int a, int b, int first, int second) 
{
    if(a < b)
    {
		if(first > second)
			return;
		printf("%d ", first); 
		reverse_numab(a, b, ++first, second);
	}
	    if(a > b)
    {
		if(first < second)
			return;
		printf("%d ", first); 
		reverse_numab(a, b, --first, second);
	}
	if(a == b)
		printf("%d ", a);
	

}

int main(void)
{
	int a, b, first, second;
	scanf("%d %d", &a, &b);
	first = a;
	second = b;
	reverse_numab(a, b, first, second);
	
	return 0;
}
