#include"Boss.h"


boss::boss(int ID, string name, int DeptID)
{
	this->m_ID = ID;
	this->m_Name = name;
	this->m_DeptID = DeptID;
}

//显示个人信息
void boss::show_Info()
{
	cout << "职工编号：" << this->m_ID
		<< "\nthe Name of Deployee" << this->m_Name
		<< "\nPosition: " << this->get_DeptName()
		<< "\n'Responsiblity: Manage all the Affairs of the Company" << endl;

}

//获取岗位名称
string boss::get_DeptName()
{
	return "Deployee";
}