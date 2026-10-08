#include <stdio.h>

void reverse_num(int n) 
{
    
    printf("%d ", n);	
	if(n <= 1)
		return;
	reverse_num(--n);

}

int main(void)
{
	int n;
	scanf("%d", &n);
	reverse_num(n);
	
	return 0;
}
