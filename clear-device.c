#include <graphics.h>
#include <conio.h>
main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    outtext("Press any key to clear the screen.");
    char y = getchar();
    cleardevice();
    outtext("Press any key to exit...");

    char x = getchar();
    closegraph();
    return 0;
}