#include <stdio.h>

void print_count_dig(char* num)
{
    int counts[10] = {0};
    const char *ptr;

    for (ptr = num; *ptr != '\0'; ptr++)
        counts[*ptr - '0']++;

    for (int i = 0; i <= 9; i++)
        if (counts[i] > 0)
            printf("%d %d\n", i, counts[i]);
}
int main()
{
    char num[1005];
    scanf("%1004s", num);
    
    print_count_dig(num);
    
    return 0;

}
