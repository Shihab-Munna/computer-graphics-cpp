#include <graphics.h>
#include <conio.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    // Declaration: void rectangle(int left, int top, int right, int bottom);
    rectangle(100, 100, 200, 200);

    getchar();
    closegraph();
    return 0;
}