
#include "cudalibrary_global.h"

#include "stdio.h"

#define print(arr, len)      \
printf("{");                 \
for (int i = 0; i < len; i++)\
  printf("%d ", arr[i]);     \
printf("}");                 \

int main()
{
    const int arraySize = 5;
    int a[arraySize] = { 1, 2, 3, 4, 5 };
    int b[arraySize] = { 10, 20, 30, 40, 50 };
    int c[arraySize] = { 0 };

    CudaLibrary::Add(a, b, c, 5);
    
    print(a, arraySize); printf(" + ");
    print(b, arraySize); printf(" = ");
    print(c, arraySize); printf("\n");

    return 0;
}
