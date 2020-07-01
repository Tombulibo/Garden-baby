#pragma once
#include "All.h"
#include <iostream>
using namespace std;
class Arm:virtual public Body//手类
{
	public:
		void BothMove();//左右手同时运动
		void DrawArm();//画手
		void Wave();//挥手
	protected:
		double i;
		double j;
		double k;
		double l;//循环语句的变量参数
};