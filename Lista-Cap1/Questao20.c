#include <stdio.h>  // biblioteca para o printf
#include <stdlib.h> // biblioteca para o system("PAUSE")

int main()
{
    printf("%c%c%c%c\n", '\xC9', '\xCD', '\xCD', '\xBB');
    printf("%c  %c\n", '\xBA', '\xBA');
    printf("%c  %c\n", '\xBA', '\xBA');
    printf("%c%c%c%c\n", '\xC8', '\xCD', '\xCD', '\xBC');

    system("PAUSE");
    return 0;
}