#include <stdio.h>

int main()
{
    int count = 1;
    char c;

    while((c = getchar()) != EOF){
        if(c == '"'){
            if(count)
                printf("``");
            else
                printf("''");

            count = !count;
        }
        else
            putchar(c);
    }
    return 0;
}
