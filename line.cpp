#include <graphics.h>
#include <conio.h>
main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, NULL);

    // Declaration: void line(int x1, int y1, int x2, int y2);
    line(100, 100, 200, 200);

    getchar();
    closegraph();
    return 0;
}