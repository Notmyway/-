#pragma once
#include<iostream>
#include<string>

using namespace std;

//职工抽象基类
class worker
{
public:
	//显示个人信息
	virtual void show_Info() = 0;

	//获取岗位名称
	virtual string get_DeptName() = 0;

	string m_Name;
	int m_ID;
	int m_DeptID;
};