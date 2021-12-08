#include <iostream>
#include <graphics.h>

using namespace std;

int main()
{
    int x1, x2, y1, y2, tx, ty;

    int gd = DETECT, gm;
    cout << "\n Enter the coordinates of line [x1,y1,x2,y2] : ";
    cin >> x1 >> y1 >> x2 >> y2;

    cout << "\nEnter x and y translation:";
    cin >> tx >> ty;

    initgraph(&gd, &gm, NULL);
    line(x1, y1, x2, y2);
    line(x1 + tx, y1 + ty, x2 + tx, y2 + ty);
    delay(7000);
    closegraph();
    return 0;
}