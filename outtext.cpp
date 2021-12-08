#include <graphics.h>
#include <conio.h>
int main()
{
   int gd = DETECT, gm;

   initgraph(&gd, &gm, NULL);

   // Declaration: void outtext(char *string);
   outtext("To display text at a particular position on the screen use outtextxy");

   getchar();
   closegraph();
   return 0;
}