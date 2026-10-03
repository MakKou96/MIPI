#include <stdio.h>
#include <math.h>

float sinus(float x)
{
    float n = 1, sum = x, sum_num = x;

    while (fabs(sum_num) > 0.001)
    {
        sum_num = -sum_num * (x * x) / ((2 * n) * (2 * n + 1));
        sum += sum_num;
        n++;
    }
    return sum;
}
int main(void)
{
	float x;
	scanf("%f", &x);
	x = x * 3.14f / 180.0f;
	printf("%.3f\n", sinus(x));
	return 0;
}
