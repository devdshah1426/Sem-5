#include<graphics.h>
#include<stdio.h>
#include<conio.h>
void main()
{
float x,y,x1,y1,delx,dely;
float slope;
int gr=DETECT,gm;

initgraph(&gr,&gm,"C:\\TURBOC3\\BGI");
printf("\n please enter the initial points of x, y = ");
scanf("%f %f",&x,&y);
printf("\n enter the final points of x, y = ");
scanf("%f %f",&x1,&y1);
dely= y1-y;
delx=x1-x;
slope=dely/delx;
if(slope>1.0)
{
while(y<=y1){
putpixel(x,y,1);
x=x+(1/slope);
y=y+1.0;
}
}

else{
while(x<=x1){
putpixel(x,y,1);
y=y+slope;
x=x+1.0;
}
}

getch();
}