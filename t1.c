#include <stdio.h>
int main()
{
    int arr[10] = {0};
    int i = 0;
    int sz = sizeof(arr)/sizeof(arr[0]);
    
    for(i=0; i<sz; ++i)
    {
        printf("&arr[%d] = %p arr[%d] = %d\n", i, &arr[i],i,arr[i]);  //一个字节给一个地址，相差4
    }

    return 0;
}