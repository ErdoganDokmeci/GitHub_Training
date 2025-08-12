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
        printf("1 - Abaci, \
               2 - Altay, \
               3 - Demirci,
               4 - Dökmeci,
               5 - Duyar,
               6 - Engin,
               7 - Gök,
               8 - Ýnan,
               9 - Kürekçi,
               10 - Topuz,
               11 - Usta,
               12 - Yavuz,
               13 - Yelkenci,
               14 - Yýlmaz
               ");
    }
    return 0;
}
