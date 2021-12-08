#include <graphics.h>
#include <iostream>
#include <conio.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    circle(100, 100, 50);

    delay(50000);
    closegraph();
    return 0;
}