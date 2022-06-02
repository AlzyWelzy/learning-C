#include <stdio.h>

typedef struct complex
{
    int real, complex;
} complex;

void display(complex c)
{
    printf("The value of real and complex part is %d and %d respectively.\n", c.real, c.complex);
}

int main()
{
    complex numbers[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the real value for %d number.\n");
        scanf("%d", &numbers[i].real);

        printf("Enter the complex value for %d number.\n");
        scanf("%d", &numbers[i].complex);
    }
    for (int i = 0; i < 5; i++)
    {
        display(numbers[i]);
    }
    return 0;
}