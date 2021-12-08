#include <graphics.h>
#include <conio.h>
int main()
{
   int gd = DETECT, gm;

   initgraph(&gd, &gm, NULL);

   arc(100, 100, 0, 135, 50);

   getchar();
   getchar();
   getchar();
   getchar();
   closegraph();
   return 0;
}
