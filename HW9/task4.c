void print_digit(char s[])
{
    int counts[10] = {0};
    const char *ptr;

    for (ptr = s; *ptr != '\0'; ptr++)
        if (*ptr >= '0' && *ptr <= '9')
            counts[*ptr - '0']++;

    for (int i = 0; i <= 9; i++)
        if (counts[i] > 0)
            printf("%d %d\n", i, counts[i]);
}
