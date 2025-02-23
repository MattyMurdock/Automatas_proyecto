#include <stdio.h>
#include <conio.h>
#include <graphics.h>
void main(){

int a=9, b=2;
initgraph(&a,&b,"c:\\tc\\bgi");

//austronauta
setcolor(7);//mochilar
setfillstyle(1,7);
int mochila [10] = { 60,160,180,160,180,270,60,270, 60,160};
fillpoly(5,mochila);

//casco
setcolor(15);
circle(120,130,40);
setfillstyle(1,15);
floodfill(130,150, 15);
setrgbpalette(1,215,255,255);
setcolor(1);
arc(120,130,195,350,35);
arc(120,130,15,165,35);
arc(86,130,270,90,10);
arc(153,130,90,270,10);
setfillstyle(1,1);
floodfill(130,150,1);

//chaleco
setcolor(15);
ellipse(120,174,0,180,52,10);
ellipse(72,220,90,270,5,40);
ellipse(120,258,180,0,50,20);
ellipse(168,220,270,90,5,40);
setfillstyle(1,15);
//brazo derecho
arc(144,110,185,233,120);
arc(144,100,190,230,100);
ellipse(35,120,0,360,14,4);

//brazo izquierdo
arc(95,110,310,355,120);
arc(95,100,315,348,100);
ellipse(203,123,0,360,14,4);
floodfill(120,180,15);
//colorear antebrazo
setfillstyle(1,7);
floodfill(204,123,15);
floodfill(35,120,15);
setcolor(1);
int chaleco []={93,180,150,180,150,245,93,245,93,180};
fillpoly(5, chaleco);
setfillstyle(1,10);
circle(102,195,6);
circle(118,195,6);
circle(138,205,9);
circle(102,211,6);
circle(118,211,6);
setfillstyle(1,9);
fillellipse(105,230,10,5);
fillellipse(130,230,11,8);

//manos
setcolor(15);
arc(24,104,20,270,13);
ellipse(40,100,290,180,7,20);
setfillstyle(1,7);
floodfill(24,104,15);
arc(213,106,270,130,13);
ellipse(197,100,0,290,7,20);
floodfill(213,106,15);
//pierna derecha
setcolor(15);
line(70,300,70,258);
line(110,335,110,278);
ellipse(63,320,80,230,30,20);
line(45,335,110,335);
setfillstyle(1,15);
floodfill(100,300, 15);
ellipse(42,341,128,340,8,13);
ellipse(105,341,200,50,7,13);
arc(56,347, 170,10,6);
arc(67,347,170,10,6);
arc(78,347,170,10,6);
arc(91,347,170,10,7);
setfillstyle(1,7);
floodfill(100,341,15);
setcolor(14);
ellipse(90,290,0,360,20,4);
setfillstyle(1,14);
floodfill(90,290,14);

//pierna izquierda
setcolor(15);
line(128,275,128,336);
line(170,255,170,310);
ellipse(175,317,270,100,30,19);
line(128,336,175,336);
ellipse(132,341,128,340,8,13);
ellipse(200,339,200,70,7,13);
arc(145,347,170,10,6);
arc(157,347,170,10,7);
arc(172,347,170,10,7);
arc(186,347,170,10,7);
setfillstyle(1,15);
floodfill(140,280,15);
setfillstyle(1,7);
floodfill(157,346,15);
setcolor(14);
ellipse(150,290,0,360,20,4);
setfillstyle(1,14);
floodfill(150,290,14);

ellipse(29,225,200,360,30,16);
line(0,220,0,230);
line(60,215,60,225);
ellipse(29,214,200,360,30,16);
setfillstyle(1,7);
floodfill(1,222,14);


setfillstyle(1,12);
setcolor(0);

setfillstyle(1,3);
setcolor(0);
fillellipse(640,480, 150,150);
//setcolor(15);
//setfillstyle(1,15);
//fillellipse(400, 50,50,50);
//nave


//estrellas

int star2[]={70,445,80,440,85,430,90,440,100,445,90,450,85,460,80,450,70,445};
setfillstyle(1,7);
fillpoly(8,star2 );
int nova1[]={254,22, 248,46, 229,54, 248,62, 254,86, 259,63, 280,55, 261,46, 254,22};
setfillstyle(1,7);
fillpoly(9,nova1);
int nova2[]={428,109, 422,133, 402,139, 422,147, 428,171, 433,147, 453,139, 434,132, 428,109};
setfillstyle(1,7);
fillpoly(9,nova2);
int nova3[]={552,196, 546,219, 528,229, 547,235, 552,259, 558,235, 575,228, 558,218, 552,196};
setfillstyle(1,7);
fillpoly(9,nova3);
int nova4[]={395,346, 389,370, 368,378, 389,386, 396,411, 401,386, 423,378, 402,369, 395,346};
setfillstyle(1,7);
fillpoly(9,nova4);
int estrella1[]={426,6, 418,27, 393,27, 413,40, 405,62, 426,50, 446,62, 440,42, 460,27, 435,27, 426,6};
setfillstyle(1,7);
fillpoly(11,estrella1);
int estrella2[]={254,366, 247,390, 222,390, 242,403, 233,426, 254,414, 273,426, 267,403, 285,390, 262, 390, 254,366};
setfillstyle(1,7);
fillpoly(11,estrella2) ;





//satelite
int sat[]={310,240,360,265, 335,290,285,265,310,240};
setfillstyle(1,8);
fillpoly(4,sat);
int sat2[]={400,250,425,275,350,350,325,325,375,250};
setfillstyle(1,15);
fillpoly(4,sat2);
int sat3 []={425,300,475,325,450,350,400,325,425,300};
setfillstyle(1,8);
fillpoly(4,sat3);
setcolor(15);
line(375,280,375,300);

//line(355,270,375,300);
//line(350,275,375,300);

line(375,300,400,320);
line(375,300,410,310);
line(375,300,420,300 );
setcolor(0);
int tierra[]={590,380,630,380,630,400,640,405,645,415,640,440,645,460,635,465,630,460,615,460,615,440,615,415,605,405,605,420,600,425,605,420,580,400,590,380};
setfillstyle(1,2);
fillpoly(16,tierra);
int tierra2[]={540,380,540,400,560,390,580,410,550,430,550,450,530,430,540,425,510,415,515,400,540,380};
fillpoly(10,tierra2);
//int tierra3[]={595,330,615,355,635,350,635,380,600,375,620,340,580,370,595,330};
//fillpoly(7,tierra3);
//estrellas distantes
putpixel(30,20,15);
putpixel(150,20,15);
putpixel(300,20,15);
putpixel(450,20,15);
putpixel(600,100,15);
putpixel(600,200,15);
putpixel(600,300,15);
putpixel(600,400,15);
putpixel(200,450,15);
putpixel(300,450,15);
putpixel(400,450,15);
putpixel(500,450,15);
putpixel(462,232,15);
putpixel(336,143,15);
putpixel(381,69,15);
putpixel(323,46,15);
putpixel(233, 148,15);
putpixel(315,355,15);
putpixel(317,445,15);
putpixel(426,442,15);
putpixel(502,268,15);
putpixel(606,205,15);
///el sol creo que es esto
setcolor(15);
circle(530,100,50);
setfillstyle(1,14);
floodfill(530,100,15);

getch();

}
