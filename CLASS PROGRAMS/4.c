#include <stdio.h>
void function()
{
    int x = 20;
    static int y = 30;
    x = x + 10;
    y = y + 10;
    printf("\n\tLocal: %d\n\tStatic: %d\n",x,y);
}
int main()
{
    printf("first call:");
    function();
    printf("second call");
    function();
    printf("third call");
    function();
    return 0;
}