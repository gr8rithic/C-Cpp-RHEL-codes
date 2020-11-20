#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
#include<graphics.h>
void main()
{int gd=DETECT,gm,i;
initgraph(&gd,&gm,"C:\\TC\\bgi");
for(i=1;i<300;i++)
{
setcolor(rand()%10);
circle(rand()%600,rand()%500,rand()%20);
delay(20);
}
}
