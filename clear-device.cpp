#include <graphics.h>
#include <conio.h>
#include <iostream>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    outtext("Press any key to clear the screen");
    char x = getchar();

    // Declaration: void cleardevice();
    cleardevice();
    outtext("Press any key to exit");
    char y = getchar();
    closegraph();

    return 0;
}