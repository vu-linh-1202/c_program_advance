#include <stdio.h>
#include <stdlib.h>


void some_func(int a)
{
    printf("This is someFunction being called and arg is: %d\n", a);
    printf("Whoops leaving the function now!\n");
}

int compare (const void* left, const void* right)
{
    return (*(int*)right - *(int*)left);
    // return (*(int*)left - *(int*)right);
}

int main()
{
    // void (*pointer_func)(int);
    // pointer_func = &some_func;
    // printf("We're about to call some_func() using a pointer!\n");
    // (pointer_func)(5);
    // printf("Wow that was cool. Back to main now!\n\n");

    int (*comp)(const void*, const void*);
    comp = &compare;
    unsigned int c = 0;
    int arr[] = {1,2,3,4,5,6,7,8,9};
    qsort(arr, sizeof(arr)/sizeof(*arr), sizeof(*arr), comp);
    while(c < (sizeof(arr)/sizeof(*arr)))
    {
        printf("%d \t", arr[c]);
        c++;
    }
    return 0;
}
