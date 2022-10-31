#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
int main(){
int gd = DETECT, gm;
initgraph(&gd, &gm, (char*) "C:\\TURBOC3\\BGI" );
setcolor(BLUE);
circle(300,200,150);
//setfillstyle(SOLID_FILL, BLUE);
floodfill(300, 100, BLUE);
circle(250,150,20);
setcolor(BLACK);
setfillstyle(SOLID_FILL, BLACK);
circle(350,150,20);
setcolor(BLACK);
setfillstyle(SOLID_FILL, BLACK);
line(300,175,300,250);
arc(300,225,230,310,75);
getch();
closegraph();
return 0;
}