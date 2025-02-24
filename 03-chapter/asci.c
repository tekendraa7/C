#include <stdio.h>
int main()
{
    int i;
    for (i = 65; i <= 122; i++)
    {
        if (i > 90 && i < 97)
        {
            continue;
        }
        else
        {
            printf("%c = %d\n", i, i);
        }
    }
    return 0;
}