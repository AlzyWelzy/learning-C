#include <stdio.h>
#include <stdlib.h>
int main()
{
    float *ptr;
    printf("The size of int is %d\n", sizeof(int));
    printf("The size of int* is %d\n", sizeof(ptr));
    printf("The size of float is %d\n", sizeof(float));
    printf("The size of float* is %d\n", sizeof(ptr));
    printf("The size of double is %d\n", sizeof(double));
    printf("The size of double* is %d\n", sizeof(ptr));
    printf("The size of char is %d\n", sizeof(char));
    printf("The size of char* is %d\n", sizeof(ptr));
    printf("The size of long is %d\n", sizeof(long));
    printf("The size of long* is %d\n", sizeof(ptr));
    printf("The size of long long is %d\n", sizeof(long long));
    printf("The size of long long* is %d\n", sizeof(ptr));
    printf("The size of short is %d\n", sizeof(short));
    printf("The size of short* is %d\n", sizeof(ptr));
    printf("The size of signed char is %d\n", sizeof(signed char));
    printf("The size of signed char* is %d\n", sizeof(ptr));
    printf("The size of unsigned char is %d\n", sizeof(unsigned char));
    printf("The size of unsigned char* is %d\n", sizeof(ptr));
    printf("The size of unsigned int is %d\n", sizeof(unsigned int));
    printf("The size of unsigned int* is %d\n", sizeof(ptr));
    printf("The size of unsigned long is %d\n", sizeof(unsigned long));
    printf("The size of unsigned long* is %d\n", sizeof(ptr));
    printf("The size of unsigned long long is %d\n", sizeof(unsigned long long));
    printf("The size of unsigned long long* is %d\n", sizeof(ptr));
    printf("The size of unsigned short is %d\n", sizeof(unsigned short));
    printf("The size of unsigned short* is %d\n", sizeof(ptr));
    ptr = malloc(sizeof(int));
    printf("The size of ptr is %d\n", sizeof(ptr));

    //

    ptr = (float *)malloc(6 * sizeof(float));
    for (int i = 0; i < 6; i++)
    {
        printf("Enter the value of %d element.\n", i);
        scanf("%f", &ptr[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        printf("The value of %d element is %f\n", i, ptr[i]);
    }
    return 0;
}