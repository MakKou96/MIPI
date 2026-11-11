#include <stdio.h>

void digit_to_mass(int* arr_num, int x)
{
    int count = 0;
    while(x / 10)
    {
        arr_num[count++] = x % 10;
        x /= 10;
    }
    arr_num[count] = x;
}
int mass_to_digit(int* arr_num, int len_arr)
{
    int temp_num = arr_num[0];
    for(int i = 1; i < len_arr; i++)
        temp_num = temp_num * 10 + arr_num[i];
    return temp_num;
}
void sort_arr(int* arr_num, int len_arr)
{
    for(int i = 0; i < len_arr; i++)
        for(int j = 0; j < len_arr - i - 1; j++)
        {
            int temp = 0;
            if(arr_num[j] < arr_num[j + 1])
            {
                temp = arr_num[j];
                arr_num[j] = arr_num[j + 1];
                arr_num[j + 1] = temp;
            }
        }
}
int swap_digit(int x)
{
    int len_arr = 1, temp = x;
    while(temp / 10)
    {
        ++len_arr;
        temp /= 10;
    }
    int arr_num[len_arr];
    digit_to_mass(arr_num, x);
    sort_arr(arr_num, len_arr);
    return mass_to_digit(arr_num, len_arr);
}
int main()
{
    int x;
    scanf("%d", &x);
    printf("%d", swap_digit(x));
    return 0;
}
