#pragma once
#include "All.h"
#include <iostream>
using namespace std;
class Dance: virtual public Head,virtual public Body//舞蹈类
{
	public:
		void BothHandMove();//两手同时运动
		void LeftHandMove();//左手运动
		void RightHandMove();//右手运动
		void LeftLegMove();//左脚运动
		void RightLegMove();//右脚运动
		void DanceMove();//舞蹈运动
	protected:
		double i;
		double j;
		double k;
		double l;
		double m;
		double n;
		double o;
		double p;//循环语句的变量参数
};