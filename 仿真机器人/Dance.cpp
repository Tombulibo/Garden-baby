#include"All.h"
void Dance::BothHandMove()//双手同时运动
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
	clearrectangle(c-75,d-180,c-400,d-280);//擦除上帧

	setfillcolor(BLUE);//
	setlinecolor(BLACK);
	fillrectangle(c+70,d-100,c+120,d-60);
	fillrectangle(c-120,d-100,c-70,d-60);
	setfillcolor(YELLOW);
	fillcircle(c+70,d-80,20);
	fillcircle(c-70,d-80,20);
	fillcircle(Ax,Ay,20);
	fillcircle(2*c-Ax,Ay,20);//画肩膀

	fillcircle(Bx,By,20);//
	fillcircle(2*c-Bx,By,20);//肘关节
	
	line(A1x,A1y,B1x,B1y);//右
	line(A2x,A2y,B2x,B2y);
	line(2*c-A1x,A1y,2*c-B1x,B1y);//左
	line(2*c-A2x,A2y,2*c-B2x,B2y);
	setfillcolor(BLUE);
	floodfill((Ax+Bx)/2,(Ay+By)/2,WHITE,1);
	floodfill(2*c-(Ax+Bx)/2,(Ay+By)/2,WHITE,1);//画上臂

	arc(Cx-40,Cy-40,Cx+40,Cy+40,j,j+Pi);//右
	arc(Cx-20,Cy-20,Cx+20,Cy+20,j,j+Pi);
	line(B3x,B3y,C1x,C1y);
	line(B4x,B4y,C2x,C2y);
	arc(2*c-Cx-40,Cy-40,2*c-Cx+40,Cy+40,(-j),Pi-j);//左
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
	line(C1x,C1y,C3x,C3y);//右
	line(C2x,C2y,C4x,C4y);
	line(2*c-C1x,C1y,2*c-C3x,C3y);//左
	line(2*c-C2x,C2y,2*c-C4x,C4y);
	setfillcolor(BLUE);
	floodfill((Cx+Bx)/2,(Cy+By)/2,WHITE,1);
	floodfill(2*c-(Cx+Bx)/2,(Cy+By)/2,WHITE,1);//画下臂
}
void Dance::LeftHandMove()//左手运动
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

			//clearrectangle(c+91,d-400,c+400,d+120);
			//clearrectangle(c+75,d+20,c+400,d+120);
			//clearrectangle(c+75,d-180,c+400,d-280);
			clearrectangle(c-91,d-400,c-400,d+120);
			clearrectangle(c-75,d+20,c-400,d+120);
			clearrectangle(c-75,d-180,c-400,d-280);//擦除上帧

			setfillcolor(BLUE);//
			setlinecolor(BLACK);
			//fillrectangle(c+70,d-100,c+120,d-60);
			fillrectangle(c-120,d-100,c-70,d-60);
			setfillcolor(YELLOW);
			//fillcircle(c+70,d-80,20);
			fillcircle(c-70,d-80,20);
			//fillcircle(Ax,Ay,20);
			fillcircle(2*c-Ax,Ay,20);//画肩膀

			//fillcircle(Bx,By,20);//
			fillcircle(2*c-Bx,By,20);//肘关节
	
			//line(A1x,A1y,B1x,B1y);//右
			//line(A2x,A2y,B2x,B2y);
			line(2*c-A1x,A1y,2*c-B1x,B1y);//左
			line(2*c-A2x,A2y,2*c-B2x,B2y);
			setfillcolor(BLUE);
			//floodfill((Ax+Bx)/2,(Ay+By)/2,WHITE,1);
			floodfill(2*c-(Ax+Bx)/2,(Ay+By)/2,WHITE,1);//画上臂

			//arc(Cx-40,Cy-40,Cx+40,Cy+40,j,j+Pi);//右
			//arc(Cx-20,Cy-20,Cx+20,Cy+20,j,j+Pi);
			//line(B3x,B3y,C1x,C1y);
			//line(B4x,B4y,C2x,C2y);
			arc(2*c-Cx-40,Cy-40,2*c-Cx+40,Cy+40,(-j),Pi-j);//左
			arc(2*c-Cx-20,Cy-20,2*c-Cx+20,Cy+20,(-j),Pi-j);
			line(2*c-B3x,B3y,2*c-C1x,C1y);
			line(2*c-B4x,B4y,2*c-C2x,C2y);
			setlinecolor(RED);
			for(int r=21;r<40;r++)
			{
				//arc(Cx-r,Cy-r,Cx+r,Cy+r,j,j+Pi);
				arc(2*c-Cx-r,Cy-r,2*c-Cx+r,Cy+r,(-j),Pi-j);
			}
			setlinecolor(BLACK);
			//line(C1x,C1y,C3x,C3y);//右
			//line(C2x,C2y,C4x,C4y);
			line(2*c-C1x,C1y,2*c-C3x,C3y);//左
			line(2*c-C2x,C2y,2*c-C4x,C4y);
			setfillcolor(BLUE);
			//floodfill((Cx+Bx)/2,(Cy+By)/2,WHITE,1);
			floodfill(2*c-(Cx+Bx)/2,(Cy+By)/2,WHITE,1);//画下臂
}
void Dance::RightHandMove()//右手运动
{
	int Ax0=c+120;
			int Ay0=d-80;
			int A1x0=(int)(c+120-20*cos(k));
			int A1y0=(int)(d-80+20*sin(k));
			int A2x0=(int)(c+120+20*cos(k));
			int A2y0=(int)(d-80-20*sin(k));
			int Bx0=(int)(c+120+80*sin(k));
			int By0=(int)(d-80+80*cos(k));
			int B1x0=(int)(c+120+80*sin(k)-20*cos(k));
			int B1y0=(int)(d-80+80*cos(k)+20*sin(k));
			int B2x0=(int)(c+120+80*sin(k)+20*cos(k));
			int B2y0=(int)(d-80+80*cos(k)-20*sin(k));
			int B3x0=(int)(c+120+80*sin(k)-20*cos(l));
			int B3y0=(int)(d-80+80*cos(k)+20*sin(l));
			int B4x0=(int)(c+120+80*sin(k)+20*cos(l));
			int B4y0=(int)(d-80+80*cos(k)-20*sin(l));
			int Cx0=(int)(c+120+80*sin(k)+100*sin(l));
			int Cy0=(int)(d-80+80*cos(k)+100*cos(l));
			int C1x0=(int)(c+120+80*sin(k)+100*sin(l)-20*cos(l));
			int C1y0=(int)(d-80+80*cos(k)+100*cos(l)+20*sin(l));
			int C2x0=(int)(c+120+80*sin(k)+100*sin(l)+20*cos(l));
			int C2y0=(int)(d-80+80*cos(k)+100*cos(l)-20*sin(l));
			int C3x0=(int)(c+120+80*sin(k)+100*sin(l)-40*cos(l));
			int C3y0=(int)(d-80+80*cos(k)+100*cos(l)+40*sin(l));
			int C4x0=(int)(c+120+80*sin(k)+100*sin(l)+40*cos(l));
			int C4y0=(int)(d-80+80*cos(k)+100*cos(l)-40*sin(l));

			clearrectangle(c+91,d-400,c+400,d+120);
			clearrectangle(c+75,d+20,c+400,d+120);
			clearrectangle(c+75,d-180,c+400,d-280);
			//clearrectangle(c-91,d-400,c-400,d+120);
			//clearrectangle(c-75,d+20,c-400,d+120);
			//clearrectangle(c-75,d-180,c-400,d-280);//擦除上帧

			setfillcolor(BLUE);//
			setlinecolor(BLACK);
			fillrectangle(c+70,d-100,c+120,d-60);
			//fillrectangle(c-120,d-100,c-70,d-60);
			setfillcolor(YELLOW);
			fillcircle(c+70,d-80,20);
			//fillcircle(c-70,d-80,20);
			fillcircle(Ax0,Ay0,20);
			//fillcircle(2*c-Ax0,Ay0,20);//画肩膀

			fillcircle(Bx0,By0,20);//
			//fillcircle(2*c-Bx0,By0,20);//肘关节
	
			line(A1x0,A1y0,B1x0,B1y0);//右
			line(A2x0,A2y0,B2x0,B2y0);
			//line(2*c-A1x0,A1y0,2*c-B1x0,B1y0);//左
			//line(2*c-A2x0,A2y0,2*c-B2x0,B2y0);
			setfillcolor(BLUE);
			floodfill((Ax0+Bx0)/2,(Ay0+By0)/2,WHITE,1);
			//floodfill(2*c-(Ax0+Bx0)/2,(Ay0+By0)/2,WHITE,1);//画上臂

			arc(Cx0-40,Cy0-40,Cx0+40,Cy0+40,l,l+Pi);//右
			arc(Cx0-20,Cy0-20,Cx0+20,Cy0+20,l,l+Pi);
			line(B3x0,B3y0,C1x0,C1y0);
			line(B4x0,B4y0,C2x0,C2y0);
			//arc(2*c-Cx0-40,Cy0-40,2*c-Cx0+40,Cy0+40,(-l),Pi-l);//左
			//arc(2*c-Cx0-20,Cy0-20,2*c-Cx0+20,Cy0+20,(-l),Pi-l);
			//line(2*c-B3x0,B3y0,2*c-C1x0,C1y0);
			//line(2*c-B4x0,B4y0,2*c-C2x0,C2y0);
			setlinecolor(RED);
			for(int r=21;r<40;r++)
			{
				arc(Cx0-r,Cy0-r,Cx0+r,Cy0+r,l,l+Pi);
				//arc(2*c-Cx0-r,Cy0-r,2*c-Cx0+r,Cy0+r,(-l),Pi-l);
			}
			setlinecolor(BLACK);
			line(C1x0,C1y0,C3x0,C3y0);//右
			line(C2x0,C2y0,C4x0,C4y0);
			//line(2*c-C1x0,C1y0,2*c-C3x0,C3y0);//左
			//line(2*c-C2x0,C2y0,2*c-C4x0,C4y0);
			setfillcolor(BLUE);
			floodfill((Cx0+Bx0)/2,(Cy0+By0)/2,WHITE,1);
			//floodfill(2*c-(Cx0+Bx0)/2,(Cy0+By0)/2,WHITE,1);//画下臂
}
void Dance::LeftLegMove()//左脚运动
{
	int Ax2=c+55;
			int Ay2=d+135;
			int A1x2=(int)(c+55-15*cos(m));
			int A1y2=(int)(d+135+15*sin(m));
			int A2x2=(int)(c+55+15*cos(m));
			int A2y2=(int)(d+135-15*sin(m));
			int Bx2=(int)(c+55+80*sin(m));
			int By2=(int)(d+135+80*cos(m));
			int B1x2=(int)(c+55+80*sin(m)-15*cos(m));
			int B1y2=(int)(d+135+80*cos(m)+15*sin(m));
			int B2x2=(int)(c+55+80*sin(m)+15*cos(m));
			int B2y2=(int)(d+135+80*cos(m)-15*sin(m));
			int B3x2=(int)(c+55+80*sin(m)-15*cos(n));
			int B3y2=(int)(d+135+80*cos(m)+15*sin(n));
			int B4x2=(int)(c+55+80*sin(m)+15*cos(n));
			int B4y2=(int)(d+135+80*cos(m)-15*sin(n));
			int Cx2=(int)(c+55+80*sin(m)+100*sin(n));
			int Cy2=(int)(d+135+80*cos(m)+100*cos(n));
			int C1x2=(int)(c+55+80*sin(m)+100*sin(n)-15*cos(n));
			int C1y2=(int)(d+135+80*cos(m)+100*cos(n)+15*sin(n));
			int C2x2=(int)(c+55+80*sin(m)+100*sin(n)+15*cos(n));
			int C2y2=(int)(d+135+80*cos(m)+100*cos(n)-15*sin(n));
			int C3x2=(int)(c+55+80*sin(m)+100*sin(n)-40*cos(n));
			int C3y2=(int)(d+135+80*cos(m)+100*cos(n)+40*sin(n));
			int C4x2=(int)(c+55+80*sin(m)+100*sin(n)+40*cos(n));
			int C4y2=(int)(d+135+80*cos(m)+100*cos(n)-40*sin(n));

			clearrectangle(c-260,d+120,c,d+400);
			//clearrectangle(c,d+120,c+260,d+400);
			//clearrectangle(c+195,d+80,c+260,d+400);
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
			//fillcircle(Ax,Ay,15);
			fillcircle(2*c-Ax2,Ay2,15);//臀关节
			//fillcircle(Bx,By,15);
			fillcircle(2*c-Bx2,By2,15);//膝关节
			//line(A1x,A1y,B1x,B1y);//右
			//line(A2x,A2y,B2x,B2y);
			line(2*c-A1x2,A1y2,2*c-B1x2,B1y2);//左
			line(2*c-A2x2,A2y2,2*c-B2x2,B2y2);
			setfillcolor(BLUE);
			//floodfill((Ax+Bx)/2,(Ay+By)/2,WHITE,1);
			floodfill(2*c-(Ax2+Bx2)/2,(Ay2+By2)/2,WHITE,1);//画大腿

			setfillcolor(YELLOW);//右
			//fillcircle(Cx,Cy,15);
			//line(B3x,B3y,C1x,C1y);
			//line(B4x,B4y,C2x,C2y);
			fillcircle(2*c-Cx2,Cy2,15);//左
			line(2*c-B3x2,B3y2,2*c-C1x2,C1y2);
			line(2*c-B4x2,B4y2,2*c-C2x2,C2y2);
			setfillcolor(BLUE);
			//floodfill((Cx+Bx)/2,(Cy+By)/2,WHITE,1);
			floodfill(2*c-(Cx2+Bx2)/2,(Cy2+By2)/2,WHITE,1);//画小腿

			setlinecolor(RED);//
			for(int r=0;r<40;r++)
			{
				//arc(Cx-r,Cy-r,Cx+r,Cy+r,n,n+Pi);
				arc(2*c-Cx2-r,Cy2-r,2*c-Cx2+r,Cy2+r,(-n),Pi-n);
			}
			setlinecolor(BLACK);//画脚
}
void Dance::RightLegMove()//右手运动
{
	int Ax1=c+55;
			int Ay1=d+135;
			int A1x1=(int)(c+55-15*cos(o));
			int A1y1=(int)(d+135+15*sin(o));
			int A2x1=(int)(c+55+15*cos(o));
			int A2y1=(int)(d+135-15*sin(o));
			int Bx1=(int)(c+55+80*sin(o));
			int By1=(int)(d+135+80*cos(o));
			int B1x1=(int)(c+55+80*sin(o)-15*cos(o));
			int B1y1=(int)(d+135+80*cos(o)+15*sin(o));
			int B2x1=(int)(c+55+80*sin(o)+15*cos(o));
			int B2y1=(int)(d+135+80*cos(o)-15*sin(o));
			int B3x1=(int)(c+55+80*sin(o)-15*cos(p));
			int B3y1=(int)(d+135+80*cos(o)+15*sin(p));
			int B4x1=(int)(c+55+80*sin(o)+15*cos(p));
			int B4y1=(int)(d+135+80*cos(o)-15*sin(p));
			int Cx1=(int)(c+55+80*sin(o)+100*sin(p));
			int Cy1=(int)(d+135+80*cos(o)+100*cos(p));
			int C1x1=(int)(c+55+80*sin(o)+100*sin(p)-15*cos(p));
			int C1y1=(int)(d+135+80*cos(o)+100*cos(p)+15*sin(p));
			int C2x1=(int)(c+55+80*sin(o)+100*sin(p)+15*cos(p));
			int C2y1=(int)(d+135+80*cos(o)+100*cos(p)-15*sin(p));
			int C3x1=(int)(c+55+80*sin(o)+100*sin(p)-40*cos(p));
			int C3y1=(int)(d+135+80*cos(o)+100*cos(p)+40*sin(p));
			int C4x1=(int)(c+55+80*sin(o)+100*sin(p)+40*cos(p));
			int C4y1=(int)(d+135+80*cos(o)+100*cos(p)-40*sin(p));

			//clearrectangle(c-260,d+120,c,d+400);
			clearrectangle(c,d+120,c+260,d+400);
			clearrectangle(c+195,d+80,c+260,d+400);
			//clearrectangle(c-195,d+80,c-260,d+400);//擦除上帧

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
			fillcircle(Ax1,Ay1,15);
			fillcircle(2*c-Ax1,Ay1,15);//臀关节
			fillcircle(Bx1,By1,15);
			//fillcircle(2*c-Bx,By,15);//膝关节
			line(A1x1,A1y1,B1x1,B1y1);//右
			line(A2x1,A2y1,B2x1,B2y1);
			//line(2*c-A1x,A1y,2*c-B1x,B1y);//左
			//line(2*c-A2x,A2y,2*c-B2x,B2y);
			setfillcolor(BLUE);
			floodfill((Ax1+Bx1)/2,(Ay1+By1)/2,WHITE,1);
			//floodfill(2*c-(Ax+Bx)/2,(Ay+By)/2,WHITE,1);//画大腿

			setfillcolor(YELLOW);//右
			fillcircle(Cx1,Cy1,15);
			line(B3x1,B3y1,C1x1,C1y1);
			line(B4x1,B4y1,C2x1,C2y1);
			//fillcircle(2*c-Cx,Cy,15);//左
			//line(2*c-B3x,B3y,2*c-C1x,C1y);
			//line(2*c-B4x,B4y,2*c-C2x,C2y);
			setfillcolor(BLUE);
			floodfill((Cx1+Bx1)/2,(Cy1+By1)/2,WHITE,1);
			//floodfill(2*c-(Cx+Bx)/2,(Cy+By)/2,WHITE,1);//画小腿

			setlinecolor(RED);//
			for(int r=0;r<40;r++)
			{
				arc(Cx1-r,Cy1-r,Cx1+r,Cy1+r,p,p+Pi);
				//arc(2*c-Cx-r,Cy-r,2*c-Cx+r,Cy+r,(-p),Pi-p);
			}
			setlinecolor(BLACK);//画脚
}
void Dance::DanceMove()//舞蹈动作
{
	//双手动作
	BeginBatchDraw();

		for(i=0,j=0; i<=Pi/2||j<=Pi/2; i+=Pi/200,j+=Pi/200)
		{
			BothHandMove();
			
			FlushBatchDraw();
			Sleep(1);
		}
		EndBatchDraw();
		
		//左右手、左右脚同时不同动作
	for(int count=0;count<2;count++)
	{
		BeginBatchDraw();

		for(i=Pi/2,j=Pi/2,k=Pi/2,l=Pi/2,m=0,n=0,o=0,p=0; j<=Pi||l>=0||m<=Pi/2; j+=Pi/200,l-=Pi/200,m+=Pi/200)
		{
			if(j>Pi)
			{
				j=Pi;
			}
			if(l<0)
			{
				l=0;
			}
			if(m>Pi/2)
			{
				m=Pi/2;
			}
			//左手

			LeftHandMove();

			//右手

			RightHandMove();

			//左脚

			LeftLegMove();

			//右脚

			RightLegMove();

			FlushBatchDraw();
			Sleep(1);
		}
		EndBatchDraw();

		BeginBatchDraw();

		for(i=Pi/2,j=Pi,k=Pi/2,l=0,m=Pi/2,n=0,o=0,p=0; i<Pi||j>=Pi/2||k>=0||l<=Pi/2||m>=0||o<=Pi/2;i+=Pi/200, j-=Pi/200,k-=Pi/200,l+=Pi/200,m-=Pi/200,o+=Pi/200)
		{
			if(i>Pi)
			{
				i=Pi;
			}
			if(j<Pi/2)
			{
				j=Pi/2;
			}
			if(k<0)
			{
				k=0;
			}
			if(l>Pi/2)
			{
				l=Pi/2;
			}
			if(m<0)
			{
				m=0;
			}
			if(0>Pi/2)
			{
				o=Pi/2;
			}
			//左手

			LeftHandMove();

			//右手

			RightHandMove();

			//左脚

			LeftLegMove();

			//右脚

			RightLegMove();

			FlushBatchDraw();
			Sleep(1);
		}
		EndBatchDraw();

		BeginBatchDraw();

		for(i=Pi,j=Pi/2,k=0,l=Pi/2,m=0,n=0,p=0,o=Pi/2;j<=Pi||l>=0||o>=0||m<=Pi/2;j+=Pi/200,l-=Pi/200,o-=Pi/200,m+=Pi/200)
		{
			if(j>Pi)
			{
				j=Pi;
			}
			if(l<0)
			{
				l=0;
			}
			//左手

			LeftHandMove();

			//右手

			RightHandMove();

			//左脚

			LeftLegMove();

			//右脚

			RightLegMove();
			
			FlushBatchDraw();
			Sleep(1);
		}
		EndBatchDraw();

		BeginBatchDraw();

		for(i=Pi,j=Pi,k=0,l=0,m=Pi/2,n=0,o=0,p=0;i>=Pi/2||k<=Pi/2||m>=0||o<=Pi/2;i-=Pi/200,k+=Pi/200,m-=Pi/200,o+=Pi/200)
		{
			if(i<Pi/2)
			{
				i=Pi/2;
			}
			if(k>Pi/2)
			{
				k=Pi/2;
			}
			//左手

			LeftHandMove();

			//右手

			RightHandMove();

			//左脚

			LeftLegMove();

			//右脚

			RightLegMove();
			
			FlushBatchDraw();
			Sleep(1);
		}
		EndBatchDraw();

		BeginBatchDraw();

		for(i=Pi/2,j=Pi,k=Pi/2,l=0,m=0,n=0,p=0,o=Pi/2;j>=Pi/2||l<=Pi/2||o>=0;j-=Pi/200,l+=Pi/200,o-=Pi/200)
		{
			if(j<Pi/2)
			{
				j=Pi/2;
			}
			if(l>Pi/2)
			{
				l=Pi/2;
			}
			//左手

			LeftHandMove();

			//右手

			RightHandMove();

			//左脚

			LeftLegMove();

			//右脚

			RightLegMove();
			
			FlushBatchDraw();
			Sleep(1);
		}
		EndBatchDraw();

		//反方向再来一遍

		BeginBatchDraw();

		for(k=Pi/2,l=Pi/2,i=Pi/2,j=Pi/2,m=0,n=0,o=0,p=0; l<=Pi||j>=0||m<=Pi/2; l+=Pi/200,j-=Pi/200,m+=Pi/200)
		{
			if(l>Pi)
			{
				l=Pi;
			}
			if(j<0)
			{
				j=0;
			}
			//左手

			LeftHandMove();

			//右手

			RightHandMove();

			//左脚

			LeftLegMove();

			//右脚

			RightLegMove();

			FlushBatchDraw();
			Sleep(1);
		}
		EndBatchDraw();

		BeginBatchDraw();

		for(k=Pi/2,l=Pi,i=Pi/2,j=0,m=Pi/2,n=0,o=0,p=0; k<Pi||l>=Pi/2||i>=0||j<=Pi/2||m>=0||o<=Pi/2;k+=Pi/200, l-=Pi/200,i-=Pi/200,j+=Pi/200,m-=Pi/200,o+=Pi/200)
		{
			if(k>Pi)
			{
				k=Pi;
			}
			if(l<Pi/2)
			{
				l=Pi/2;
			}
			if(i<0)
			{
				i=0;
			}
			if(j>Pi/2)
			{
				j=Pi/2;
			}
			//左手

			LeftHandMove();

			//右手

			RightHandMove();

			//左脚

			LeftLegMove();

			//右脚

			RightLegMove();

			FlushBatchDraw();
			Sleep(1);
		}
		EndBatchDraw();

		BeginBatchDraw();

		for(k=Pi,l=Pi/2,i=0,j=Pi/2,m=0,n=0,p=0,o=Pi/2;l<=Pi||j>=0||o>=0||m<=Pi/2;l+=Pi/200,j-=Pi/200,o-=Pi/200,m+=Pi/200)
		{
			if(l>Pi)
			{
				l=Pi;
			}
			if(j<0)
			{
				j=0;
			}
			//左手

			LeftHandMove();

			//右手

			RightHandMove();

			//左脚

			LeftLegMove();

			//右脚

			RightLegMove();
			
			FlushBatchDraw();
			Sleep(1);
		}
		EndBatchDraw();

		BeginBatchDraw();

		for(k=Pi,l=Pi,i=0,j=0,m=Pi/2,n=0,o=0,p=0;k>=Pi/2||i<=Pi/2||m>=0||o<=Pi/2;k-=Pi/200,i+=Pi/200,m-=Pi/200,o+=Pi/200)
		{
			if(k<Pi/2)
			{
				k=Pi/2;
			}
			if(i>Pi/2)
			{
				i=Pi/2;
			}
			//左手

			LeftHandMove();

			//右手

			RightHandMove();

			//左脚

			LeftLegMove();

			//右脚

			RightLegMove();
			
			FlushBatchDraw();
			Sleep(1);
		}
		EndBatchDraw();

		BeginBatchDraw();

		for(k=Pi/2,l=Pi,i=Pi/2,j=0,m=0,n=0,p=0,o=Pi/2;l>=Pi/2||j<=Pi/2||o>=0;l-=Pi/200,j+=Pi/200,o-=Pi/200)
		{
			if(l<Pi/2)
			{
				l=Pi/2;
			}
			if(j>Pi/2)
			{
				j=Pi/2;
			}
			//左手

			LeftHandMove();

			//右手

			RightHandMove();

			//左脚

			LeftLegMove();

			//右脚

			RightLegMove();
			
			FlushBatchDraw();
			Sleep(1);
		}
		EndBatchDraw();
		BeginBatchDraw();
	}

		for(i=Pi/2,j=Pi/2; i>=0||j>=0; i-=Pi/200,j-=Pi/200)
		{
			BothHandMove();
			
			FlushBatchDraw();
			Sleep(1);
		}
		EndBatchDraw();
}