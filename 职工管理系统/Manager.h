#pragma once
#include<iostream>
#include<string>
#include"worker.h"
using namespace std;

class manager : public worker
{
public:
	//构造函数
	manager(int ID, string name, int DeptID);

	//显示个人信息
	virtual void show_Info();

	//获取岗位名称
	virtual string get_DeptName();

};