#include <bits/stdc++.h> // include  a lots of library
#include <graphics.h>
#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
    int gd = DETECT, gm, x, y, r, xx, yy;

    cout << "Please Enter the Center Coordinates of the Circle[x,y]: ";
    cin >> x >> y;

    cout << "Please Enter the Radius of the Circle: ";
    cin >> r;

    cout << "Please Enter the Coordinates of the Point to be Translated:";
    cin >> xx >> yy;

    initgraph(&gd, &gm, NULL);

    circle(x, y, r);

    circle(x + xx, y + yy, r);
    getch();

    closegraph();

    return 0;
}