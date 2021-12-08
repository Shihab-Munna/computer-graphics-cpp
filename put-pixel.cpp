#include <graphics.h>
#include <conio.h>
int main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, NULL);

    // Declaration: void putpixel(int x, int y, int color);
    putpixel(100, 100, WHITE);

    getchar();
    closegraph();
    return 0;
}