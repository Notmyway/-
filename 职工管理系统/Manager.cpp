#include"Manager.h"

manager::manager(int ID, string name, int DeptID)
{
	this->m_ID = ID;
	this->m_Name = name;
	this->m_DeptID = DeptID;
}

//显示个人信息
void manager::show_Info()
{
	cout << "职工编号：" << this->m_ID
		<< "\nthe Name of Deployee: " << this->m_Name
		<< "\nPosition: " << this->get_DeptName()
		<< "\nResponsiblity: Complete the Tasks Assigned by the Boss" << endl;

}

//获取岗位名称
string manager::get_DeptName()
{
	return "Manager";
}