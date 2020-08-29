#include"employee.h"


employee::employee(int ID, string name, int DeptID)
{
	this->m_ID = ID;
	this->m_Name = name;
	this->m_DeptID = DeptID;
}

//显示个人信息
void employee::show_Info()
{
	cout << "职工编号：" << this->m_ID
		<< "\nthe Name of Deployee: " << this->m_Name
		<< "\nPosition: " << this->get_DeptName()
		<< "\n'Responsiblity: Complete the Tasks Assigned by the Manager" << endl;

}

//获取岗位名称
string employee::get_DeptName()
{
	return "Deployee";
}