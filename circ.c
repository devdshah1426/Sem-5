
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main(){
 int gd = DETECT,gm;
 int x ,y ,radius=100;
 clrscr();
 initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
 /* Initialize center of circle with center of screen */
 x = getmaxx()/2;
 y = getmaxy()/2;
 //outtextxy(x-100, 50, "circle at center");
 /* Draw circle on screen */
 circle(x, y, radius);
 getch();
 closegraph();
 return 0;
}