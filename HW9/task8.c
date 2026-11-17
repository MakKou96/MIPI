#include <stdio.h>

int find_miss_num(int* arr, int len_arr)
{
    int max = arr[0], min = arr[0], miss_num;
    for(int i = 1; i < len_arr; i++)
    {
        if(max < arr[i])
            max = arr[i];
        if(min > arr[i])
            min = arr[i];
    }
    for(miss_num = min; miss_num <= max; miss_num++)
    {
        int flag = 0;
        for(int j = 0; j < len_arr; j++)
            if(arr[j] == miss_num)
            {
                flag = 1;
                break;
            }
        if(!flag)
            return miss_num;
    }
}

int main()
{
    int arr[1000];
    int len_arr = 0;
    while(len_arr < 1000 && scanf("%d", &arr[len_arr]) == 1 && arr[len_arr] != 0)
        len_arr++;
  
    printf("%d", find_miss_num(arr, len_arr));
    return 0;
	

}
