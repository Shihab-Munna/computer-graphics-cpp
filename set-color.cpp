#include <graphics.h>
#include <conio.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    circle(100, 100, 50); /* drawn in white color */
    setcolor(RED);
    circle(200, 200, 50); /* drawn in red color   */

    getchar();
    closegraph();
    return 0;
}