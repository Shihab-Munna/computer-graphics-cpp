#include <graphics.h>
#include <conio.h>
main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, NULL);

    outtext("Press any key to close the graphics mode...");
    getchar();

    //Declaration: void closegraph();
    closegraph();
    return 0;
}