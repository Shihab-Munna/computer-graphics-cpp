#include <graphics.h>
#include <conio.h>
int main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, NULL);

    //Declaration: void bar3d(int left, int top, int right, int bottom, int depth, int topflag);
    bar3d(100, 100, 200, 200, 20, 1);

    getchar();
    closegraph();
    return 0;
}