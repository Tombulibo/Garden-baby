#pragma once
#include "All.h"
#include <iostream>
using namespace std;
class Leg:virtual public Body//腿类
{
	public:
		void BothMove();//左右腿同时运动
		void DrawLeg();//画腿
		void Crouchdown();//蹲下
		void Split();//劈叉
		void Standup();//站立
	protected:
		double i;
		double j;
		double k;
		double l;//循环语句的变量参数
};