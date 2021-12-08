#include <iostream>
#include <graphics.h>

using namespace std;
int main(int argc, char const *argv[])
{
    int gd = DETECT, gm, x1, y1, x2, y2, x3, y3;

    initgraph(&gd, &gm, NULL);
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x1, y1, x3, y3);
    getch();
    closegraph();
    return 0;
}
