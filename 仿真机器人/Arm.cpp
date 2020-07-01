#include "All.h"
void Arm::BothMove()
{
	int Ax=c+120;
	int Ay=d-80;
	int A1x=(int)(c+120-20*cos(i));
	int A1y=(int)(d-80+20*sin(i));
	int A2x=(int)(c+120+20*cos(i));
	int A2y=(int)(d-80-20*sin(i));
	int Bx=(int)(c+120+80*sin(i));
	int By=(int)(d-80+80*cos(i));
	int B1x=(int)(c+120+80*sin(i)-20*cos(i));
	int B1y=(int)(d-80+80*cos(i)+20*sin(i));
	int B2x=(int)(c+120+80*sin(i)+20*cos(i));
	int B2y=(int)(d-80+80*cos(i)-20*sin(i));
	int B3x=(int)(c+120+80*sin(i)-20*cos(j));
	int B3y=(int)(d-80+80*cos(i)+20*sin(j));		
	int B4x=(int)(c+120+80*sin(i)+20*cos(j));
	int B4y=(int)(d-80+80*cos(i)-20*sin(j));
	int Cx=(int)(c+120+80*sin(i)+100*sin(j));
	int Cy=(int)(d-80+80*cos(i)+100*cos(j));
	int C1x=(int)(c+120+80*sin(i)+100*sin(j)-20*cos(j));
	int C1y=(int)(d-80+80*cos(i)+100*cos(j)+20*sin(j));
	int C2x=(int)(c+120+80*sin(i)+100*sin(j)+20*cos(j));
	int C2y=(int)(d-80+80*cos(i)+100*cos(j)-20*sin(j));
	int C3x=(int)(c+120+80*sin(i)+100*sin(j)-40*cos(j));
	int C3y=(int)(d-80+80*cos(i)+100*cos(j)+40*sin(j));
	int C4x=(int)(c+120+80*sin(i)+100*sin(j)+40*cos(j));
	int C4y=(int)(d-80+80*cos(i)+100*cos(j)-40*sin(j));

			clearrectangle(c+91,d-400,c+400,d+120);
			clearrectangle(c+75,d+20,c+400,d+120);
			clearrectangle(c+75,d-180,c+400,d-280);
			clearrectangle(c-91,d-400,c-400,d+120);
			clearrectangle(c-75,d+20,c-400,d+120);
			clearrectangle(c-75,d-180,c-400,d-280);//²Á³ýÉÏÖ¡

			setfillcolor(BLUE);//
			setlinecolor(BLACK);
			fillrectangle(c+70,d-100,c+120,d-60);
			fillrectangle(c-120,d-100,c-70,d-60);
			setfillcolor(YELLOW);
			fillcircle(c+70,d-80,20);
			fillcircle(c-70,d-80,20);
			fillcircle(Ax,Ay,20);
			fillcircle(2*c-Ax,Ay,20);//»­¼ç°ò

			fillcircle(Bx,By,20);//
			fillcircle(2*c-Bx,By,20);//Öâ¹Ø½Ú
	
			line(A1x,A1y,B1x,B1y);//ÓÒ
			line(A2x,A2y,B2x,B2y);
			line(2*c-A1x,A1y,2*c-B1x,B1y);//×ó
			line(2*c-A2x,A2y,2*c-B2x,B2y);
			setfillcolor(BLUE);
			floodfill((Ax+Bx)/2,(Ay+By)/2,WHITE,1);
			floodfill(2*c-(Ax+Bx)/2,(Ay+By)/2,WHITE,1);//»­ÉÏ±Û

			arc(Cx-40,Cy-40,Cx+40,Cy+40,j,j+Pi);//ÓÒ
			arc(Cx-20,Cy-20,Cx+20,Cy+20,j,j+Pi);
			line(B3x,B3y,C1x,C1y);
			line(B4x,B4y,C2x,C2y);
			arc(2*c-Cx-40,Cy-40,2*c-Cx+40,Cy+40,(-j),Pi-j);//×ó
			arc(2*c-Cx-20,Cy-20,2*c-Cx+20,Cy+20,(-j),Pi-j);
			line(2*c-B3x,B3y,2*c-C1x,C1y);
			line(2*c-B4x,B4y,2*c-C2x,C2y);
			setlinecolor(RED);
			for(int r=21;r<40;r++)
			{
				arc(Cx-r,Cy-r,Cx+r,Cy+r,j,j+Pi);
				arc(2*c-Cx-r,Cy-r,2*c-Cx+r,Cy+r,(-j),Pi-j);
			}
			setlinecolor(BLACK);
			line(C1x,C1y,C3x,C3y);//ÓÒ
			line(C2x,C2y,C4x,C4y);
			line(2*c-C1x,C1y,2*c-C3x,C3y);//×ó
			line(2*c-C2x,C2y,2*c-C4x,C4y);
			setfillcolor(BLUE);
			floodfill((Cx+Bx)/2,(Cy+By)/2,WHITE,1);
			floodfill(2*c-(Cx+Bx)/2,(Cy+By)/2,WHITE,1);//»­ÏÂ±Û
}
void Arm::DrawArm()
{
	setfillcolor(BLUE);//
	setlinecolor(BLACK);
	fillrectangle(c+70,d-100,c+120,d-60);
	fillrectangle(c-120,d-100,c-70,d-60);
	setfillcolor(YELLOW);
	fillcircle(c+70,d-80,20);
	fillcircle(c-70,d-80,20);
	fillcircle(c+120,d-80,20);
	fillcircle(c-120,d-80,20);//»­¼ç°ò

	fillcircle(c+120,d,20);//
	fillcircle(c-120,d,20);//Öâ¹Ø½Ú
	
	line(c+100,d-80,c+100,d);//
	line(c+140,d-80,c+140,d); 
	line(c-100,d-80,c-100,d);
	line(c-140,d-80,c-140,d);
	setfillcolor(BLUE);
	floodfill(c+120,d-40,WHITE,1);
	floodfill(c-120,d-40,WHITE,1);//»­ÉÏ±Û

	arc(c+80,d+60,c+160,d+140,0,3.141592);//
	arc(c+100,d+80,c+140,d+120,0,3.141592);
	line(c+80,d+100,c+100,d+100);
	line(c+140,d+100,c+160,d+100);
	arc(c-160,d+60,c-80,d+140,0,3.141592);
	arc(c-140,d+80,c-100,d+120,0,3.141592);
	line(c-100,d+100,c-80,d+100);
	line(c-160,d+100,c-140,d+100);
	setlinecolor(RED);
	for(int r=21;r<40;r++)
	{
		arc((int)(c+120-r),(int)(d+100-r),(int)(c+120+r),(int)(d+100+r),0,Pi);
		arc((int)(c-120-r),(int)(d+100-r),(int)(c-120+r),(int)(d+100+r),0,Pi);
	}
	setlinecolor(BLACK);
	line(c+100,d,c+100,d+100);
	line(c+140,d,c+140,d+100);
	line(c-100,d,c-100,d+100);
	line(c-140,d,c-140,d+100);
	setfillcolor(BLUE);
	floodfill(c+120,d+40,WHITE,1);
	floodfill(c-120,d+40,WHITE,1);//»­ÏÂ±Û
}
void Arm::Wave()
{
	BeginBatchDraw();
		for(i=0,j=0; i<=Pi/2||j<=3*Pi/4; i+=Pi/200,j+=Pi/200)
		{
			if(i>Pi/2)
			{
				i=Pi/2;
			}
			if(j>3*Pi/4)
			{
				j=3*Pi/4;
			}
			BothMove();
			
			FlushBatchDraw();
			Sleep(1);
		}
		EndBatchDraw();
	for(int count=0;count<3;count++)
	{
		BeginBatchDraw();
		for(i=Pi/2,j=3*Pi/4; j<=5*Pi/4; j+=Pi/200)
		{
			BothMove();
			
			FlushBatchDraw();
			Sleep(1);
		}
		EndBatchDraw();

		BeginBatchDraw();

		for(i=Pi/2,j=5*Pi/4;j>=3*Pi/4;j-=Pi/200)
		{
			BothMove();
			
			FlushBatchDraw();
			Sleep(1);
		}
		EndBatchDraw();
	}
	BeginBatchDraw();

		for(i=Pi/2,j=3*Pi/4; i>=0||j>=0; i-=Pi/300,j-=Pi/200)
		{
			if(i<0)
			{
				i=0;
			}
			if(j<0)
			{
				j=0;
			}
			BothMove();
			
			FlushBatchDraw();
			Sleep(1);
		}
		EndBatchDraw();
}