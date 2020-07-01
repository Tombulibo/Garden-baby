#include "All.h"
Body::Body()
{
	c=420;
	d=280;
}
void Body::SetBody(double Newc,double Newd)
{
	c=Newc;
	d=Newd;
}
void Body::DrawBody()
{
	setfillcolor(BLUE);
	fillroundrect(c-90,d-100,c+90,d,70,70);//画身体第一部分

	setfillcolor(RED);
	fillcircle(c,d-50,50);//
	POINT pts1[] = { {c-50, d-50}, {c+50, d-50}, {c, d-100} };
	fillpolygon(pts1, 3);
	setfillcolor(MAGENTA);
	POINT pts2[] = { {c-50, d-50}, {c+50, d-50}, {c, d} };
	fillpolygon(pts2, 3);//画胸前标志

	fillroundrect(c-40,d,c+40,d+40,20,20);//画身体第二部分

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
}
void Neck::DrawNeck()
{
	setfillcolor(BLUE);

	setlinecolor(BLACK);

	fillroundrect(a-25,b+40,c+25,d-100,10,10);
}