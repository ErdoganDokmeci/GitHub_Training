#include <stdio.h>
#include <stdlib.h>

int a;
int main()
{
    printf("Hello world!\n");
    printf("Change favours a prepared mind.\n");
    printf("Enter a value : ");
    scanf("%d", &a);

    for(int i = 0; i < 10; i++)
    {
        printf("%d\n", a);
    }
    return 0;
}
