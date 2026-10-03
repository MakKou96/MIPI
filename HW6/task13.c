#include <stdio.h>
#include <math.h>

float cosinus(float x)
{
    double n = 1, sum = 1, sum_num = 1;

    while (fabs(sum_num) > 0.001)
    {
        sum_num = -sum_num * (x * x) / ((2 * n) * (2 * n - 1));
        sum += sum_num;
        n++;
    }
    return (float)sum;
}
int main(void)
{
	float x;
	scanf("%f", &x);
	x = x * 3.14159265358979323846f / 180.0f;
	printf("%.3f\n", cosinus(x));
	return 0;
}
