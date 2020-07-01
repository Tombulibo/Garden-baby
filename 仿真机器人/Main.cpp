#include "All.h"
struct ROBOT
{
	Interface inter;//界面
	Head head;//头
	Eyes eyes;//眼睛
	Mouth mouth;//嘴巴
	Body body;//身体
	Neck neck;//脖子
	Arm arm;//手臂
	Leg leg;//腿
	Dance dance;//舞蹈
	Move move;//移动
}R;
int main()
{
	initgraph(1280,960);//画布大小

	setbkcolor(WHITE);//设置背景色为白色
	cleardevice();//清屏
	R.inter.DrawInterface();//画界面

	R.head.DrawHead();//画头
	R.eyes.DrawEyeball();//画眼球
	R.eyes.DrawPupil();//画眼珠
	R.eyes.DrawEyelid();//画眼皮
	R.mouth.DrawMouth();//画嘴
	R.body.DrawBody();//画身体
	R.neck.DrawNeck();//画脖子
	R.arm.DrawArm();//画手臂
	R.leg.DrawLeg();//画腿

	for(;;)
	{
		R.inter.Choose();
		if(R.inter.value==1)
		{
			R.eyes.OpenEyes();
			R.mouth.Smile();
			R.eyes.Blink();
			R.arm.Wave();
			R.eyes.Blink();
			R.eyes.HalfOpen();
			R.mouth.CloseMouth();
			R.inter.value=0;
			continue;
		}
		if(R.inter.value==2)
		{
			R.move.Contorl();
			R.inter.value=0;
			R.head.SetHead(R.move.Geta(),R.move.Getb());
			R.body.SetBody(R.move.Getc(),R.move.Getd());
			R.arm.SetBody(R.move.Getc(),R.move.Getd());
			R.dance.SetHead(R.move.Geta(),R.move.Getb());
			R.dance.SetBody(R.move.Getc(),R.move.Getd());
			R.eyes.SetHead(R.move.Geta(),R.move.Getb());
			R.leg.SetBody(R.move.Getc(),R.move.Getd());
			R.mouth.SetHead(R.move.Geta(),R.move.Getb());
			R.neck.SetBody(R.move.Getc(),R.move.Getd());
			R.neck.SetHead(R.move.Geta(),R.move.Getb());
			continue;
		}
		if(R.inter.value==3)
		{
			R.eyes.OpenEyes();
			R.mouth.Smile();
			R.eyes.Blink();
			R.leg.Crouchdown();
			R.leg.Split();
			R.leg.Standup();
			R.eyes.Blink();
			R.dance.DanceMove();
			R.eyes.Blink();
			R.eyes.HalfOpen();
			R.mouth.CloseMouth();
			R.inter.value=0;
			continue;
		}
		if(R.inter.value==4)
		{
			R.mouth.Smile();
			R.eyes.OpenEyes();
			R.eyes.Follow();
			R.eyes.Blink();
			R.eyes.HalfOpen();
			R.mouth.CloseMouth();
			R.inter.value=0;
			continue;
		}
		if(R.inter.value==5)
		{
			R.eyes.OpenEyes();
			R.mouth.OpenMouth();
			R.eyes.Blink();
			R.arm.Wave();
			R.mouth.CloseMouth();
			R.eyes.CloseEyes();
			break;
		}
	}

	cleardevice();
	closegraph();
}