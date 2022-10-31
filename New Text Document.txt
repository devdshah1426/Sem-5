#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
int main()
{
int i, gd=DETECT, gm;
initgraph(&gd,&gm,"C\\TURBOC3\\BGI");
setcolor(GREEN);
settextstyle(GOTHIC_FONT,0,10);
delay(1000);
while(!kbhit());
{
setcolor(rand()%16);
circle(rand()%630, rand()%530, rand()%26);
delay(140);
}
getch();
closegraph();
return 0;
}