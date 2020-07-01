#pragma once
#include "All.h"
#include <iostream>
using namespace std;
class Interface//界面类
{
	public:
		Interface();//构造函数初始化
		void DrawInterface();// 主界面
		void Choose();//选择模式
		int value;//模式代号
		MOUSEMSG m;		// 定义鼠标消息
};