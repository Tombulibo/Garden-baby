#pragma once
#include "All.h"
#include <iostream>
using namespace std;
class Head           //头类
{
	public:
		Head();//构造函数
		void SetHead(double Newa,double Newb);//重新定位
		void DrawHead();//画头
	protected:
		double a;
		double b;   //头部定位
};
class Eyes: virtual public Head//眼类
{
	public:
		void DrawEyeball();//画眼球
		void DrawPupil();//画眼珠
		void DrawEyelid();//画眼皮
		void OpenEyes();//睁眼
		void CloseEyes();//闭眼
		void HalfOpen();//半睁眼
		void Blink();//眨眼
		void Follow();//眼动
	protected:
		int EyesStatus;//0:闭眼；1:半睁；2:全睁
		MOUSEMSG u;		// 定义鼠标消息
};
class Mouth: virtual public Head//嘴类
{
	public:
		void DrawMouth();//画嘴
		void OpenMouth();//张嘴
		void CloseMouth();//闭嘴
		void Smile();//微笑
	protected:
		int MouthStatus;//0:闭嘴；1:张嘴；2:微笑；
};
