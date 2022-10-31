
#include <graphics.h>
int main()
{

    int gd = DETECT, gm;
    int arr[] = {450,150, 430,120, 430,100, 450,70, 500,70, 520,100, 520,120, 500,150, 450,150};
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    drawpoly(9, arr);
  
    getch();
    closegraph();
  
    return 0;
}