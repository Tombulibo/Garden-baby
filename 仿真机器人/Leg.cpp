#include "All.h"
void Leg::BothMove()
{
	int Ax=c+55;
			int Ay=d+135;
			int A1x=(int)(c+55-15*cos(i));
			int A1y=(int)(d+135+15*sin(i));
			int A2x=(int)(c+55+15*cos(i));
			int A2y=(int)(d+135-15*sin(i));
			int Bx=(int)(c+55+80*sin(i));
			int By=(int)(d+135+80*cos(i));
			int B1x=(int)(c+55+80*sin(i)-15*cos(i));
			int B1y=(int)(d+135+80*cos(i)+15*sin(i));
			int B2x=(int)(c+55+80*sin(i)+15*cos(i));
			int B2y=(int)(d+135+80*cos(i)-15*sin(i));
			int B3x=(int)(c+55+80*sin(i)-15*cos(j));
			int B3y=(int)(d+135+80*cos(i)+15*sin(j));
			int B4x=(int)(c+55+80*sin(i)+15*cos(j));
			int B4y=(int)(d+135+80*cos(i)-15*sin(j));
			int Cx=(int)(c+55+80*sin(i)+100*sin(j));
			int Cy=(int)(d+135+80*cos(i)+100*cos(j));
			int C1x=(int)(c+55+80*sin(i)+100*sin(j)-15*cos(j));
			int C1y=(int)(d+135+80*cos(i)+100*cos(j)+15*sin(j));
			int C2x=(int)(c+55+80*sin(i)+100*sin(j)+15*cos(j));
			int C2y=(int)(d+135+80*cos(i)+100*cos(j)-15*sin(j));
			int C3x=(int)(c+55+80*sin(i)+100*sin(j)-40*cos(j));
			int C3y=(int)(d+135+80*cos(i)+100*cos(j)+40*sin(j));
			int C4x=(int)(c+55+80*sin(i)+100*sin(j)+40*cos(j));
			int C4y=(int)(d+135+80*cos(i)+100*cos(j)-40*sin(j));

			clearrectangle(c-260,d+120,c+260,d+400);
			clearrectangle(c+195,d+80,c+260,d+400);
			clearrectangle(c-195,d+80,c-260,d+400);//擦除上帧

			setfillcolor(RED);//
			fillroundrect(c-70,d+40,c+70,d+150,40,40);
			line(c-70,d+120,c+70,d+120);
			setfillcolor(RED);
			fillcircle(c,d+80,40);
			setfillcolor(BLUE);
			fillcircle(c,d+80,20);
			line(c-70,d+80,c+70,d+80);
			line(c,d+40,c,d+120);
			floodfill(c,d+135,RED,1);//画身体第三部分

			setfillcolor(YELLOW);
			fillcircle(Ax,Ay,15);
			fillcircle(2*c-Ax,Ay,15);//臀关节
			fillcircle(Bx,By,15);
			fillcircle(2*c-Bx,By,15);//膝关节
			line(A1x,A1y,B1x,B1y);//右
			line(A2x,A2y,B2x,B2y);
			line(2*c-A1x,A1y,2*c-B1x,B1y);//左
			line(2*c-A2x,A2y,2*c-B2x,B2y);
			setfillcolor(BLUE);
			floodfill((Ax+Bx)/2,(Ay+By)/2,WHITE,1);
			floodfill(2*c-(Ax+Bx)/2,(Ay+By)/2,WHITE,1);//画大腿

			setfillcolor(YELLOW);//右
			fillcircle(Cx,Cy,15);
			line(B3x,B3y,C1x,C1y);
			line(B4x,B4y,C2x,C2y);
			fillcircle(2*c-Cx,Cy,15);//左
			line(2*c-B3x,B3y,2*c-C1x,C1y);
			line(2*c-B4x,B4y,2*c-C2x,C2y);
			setfillcolor(BLUE);
			floodfill((Cx+Bx)/2,(Cy+By)/2,WHITE,1);
			floodfill(2*c-(Cx+Bx)/2,(Cy+By)/2,WHITE,1);//画小腿

			setlinecolor(RED);//
			for(int r=0;r<40;r++)
			{
				arc(Cx-r,Cy-r,Cx+r,Cy+r,j,j+Pi);
				arc(2*c-Cx-r,Cy-r,2*c-Cx+r,Cy+r,(-j),Pi-j);
			}
			setlinecolor(BLACK);//画脚
}
void Leg::DrawLeg()
{
	setfillcolor(YELLOW);//
	fillcircle(c+55,d+135,15);
	fillcircle(c-55,d+135,15);
	fillcircle(c+55,d+215,15);
	fillcircle(c-55,d+215,15);
	setfillcolor(BLUE);
	line(c+70,d+135,c+70,d+215);
	line(c+40,d+135,c+40,d+215);
	line(c-70,d+135,c-70,d+215);
	line(c-40,d+135,c-40,d+215);
	floodfill(c+55,d+175,WHITE,1);
	floodfill(c-55,d+175,WHITE,1);//画大腿

	setfillcolor(YELLOW);//
	fillcircle(c+55,d+315,15);
	fillcircle(c-55,d+315,15);
	setfillcolor(BLUE);
	line(c+70,d+315,c+70,d+215);
	line(c+40,d+315,c+40,d+215);
	line(c-70,d+315,c-70,d+215);
	line(c-40,d+315,c-40,d+215);
	floodfill(c+55,d+265,WHITE,1);
	floodfill(c-55,d+265,WHITE,1);//画小腿

	setlinecolor(RED);//
	for(int r=0;r<40;r++)
	{
		arc((int)(c+55-r),(int)(d+315-r),(int)(c+55+r),(int)(d+315+r),0,Pi);
		arc((int)(c-55-r),(int)(d+315-r),(int)(c-55+r),(int)(d+315+r),0,Pi);
	}
	setlinecolor(BLACK);//画脚
}
void Leg::Crouchdown()//蹲下
{
	BeginBatchDraw();

		for(i=0,j=0; i<=Pi/2; i+=Pi/200)
		{
			BothMove();
			
			FlushBatchDraw();
			Sleep(1);
		}
		EndBatchDraw();
}
void Leg::Split()//劈叉
{
	BeginBatchDraw();

		for(i=Pi/2,j=0;j<=Pi/2;j+=Pi/200)
		{
			BothMove();
			
			FlushBatchDraw();
			Sleep(1);
		}
		EndBatchDraw();
}
void Leg::Standup()//站立
{
	BeginBatchDraw();

		for(i=Pi/2,j=Pi/2; i>=0||j>0; i-=Pi/200,j-=Pi/200)
		{
			BothMove();
			
			FlushBatchDraw();
			Sleep(1);
		}
		EndBatchDraw();
}