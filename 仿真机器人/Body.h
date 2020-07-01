#pragma once
#include "All.h"
#include <iostream>
using namespace std;
class Body//身体类
{
	public:
		Body();//构造函数
		void SetBody(double Newc,double Newd);//重新定位
		void DrawBody();//画身体
	protected:
		double c;
		double d;//身体定位
};
class Neck:virtual public Body,virtual public Head//脖子类
{
	public:
		void DrawNeck();//画脖子
};