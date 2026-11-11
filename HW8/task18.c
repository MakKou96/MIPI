#include <stdio.h>

#define SIZE 10


int count_crat(int N)
{
	for(int i = 2; i < 10; i++)
	{
		int count = 0;		
		for(int j = N; j >= 2; j--)
			if(j % i == 0)
				count++;
		printf("%d %d\n", i, count);
	}
}

int main(void)
{
	int N;
	scanf("%d", &N);
	count_crat(N);
	
	return 0;
}
