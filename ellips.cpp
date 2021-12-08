#include <graphics.h>
#include <conio.h>
main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, NULL);

    ellipse(100, 100, 0, 360, 50, 25);

    getchar();
    closegraph();
    return 0;
}