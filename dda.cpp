#include <bits/stdc++.h>
#include <stdio.h>
#include <graphics.h>
#include <conio.h>

using namespace std;

int main()
{
    int x, y, x1, x2, y1, y2, k, dx, dy, s, xi, yi, i;

    cout << "Please Enter First Point: ";
    cin >> x1 >> y1;

    cout << "Please Enter Second Point: ";
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
    putpixel(x, y, BLUE);
    for (i = 0; i < s; i++)
    {
        x = x + xi;
        y = y + yi;
        putpixel(x, y, BLUE);
        delay(10);
    }
    getchar();
    closegraph();
    return 0;
}