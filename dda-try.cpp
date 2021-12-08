#include <iostream>
#include <graphics.h>
#include <conio.h>

using namespace std;
int main()
{
    int x1, y1, x2, y2, dx, dy, xi, yi, s, i, x, y;

    cout << "Enter the starting point of the line (x1, y1): ";
    cin >> x1 >> y1;

    cout << "Enter the ending point of the line (x2, y2): ";
    cin >> x2 >> y2;

    int gd = DETECT, gm;

    initgraph(&gd, &gm, NULL);
    x = x1;
    y = y1;

    dx = abs(x2 - x1);
    dy = abs(y2 - y1);
    s = max(dx, dy);

    xi = (round)((double)dx / (double)s);
    yi = (round)((double)dy / (double)s);

    putpixel(x, y, WHITE);

    for (i = 0; i < s; i++)
    {
        x += xi;
        y += yi;
        putpixel(x, y, WHITE);
        delay(50);
    }

    getchar();
    closegraph();

    return 0;
}