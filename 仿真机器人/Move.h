#pragma once
#include "All.h"
#include <iostream>
using namespace std;
class Move:virtual public Body,virtual public Head,virtual public Eyes,virtual public Mouth,virtual public Neck,virtual public Arm,virtual public Leg//移动类
{
	public:
		Move();//构造函数
		double Geta();//得到新的a
		double Getb();//得到新的b
		double Getc();//得到新的c
		double Getd();//得到新的d
		void Contorl();//控制移动
	protected:
		int out;//是否退出移动模式  0：未退出；1：退出
};