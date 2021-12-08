#include <graphics.h>
#include <iostream>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    bar(100, 100, 200, 200);

    getchar();
    closegraph();
    return 0;
}