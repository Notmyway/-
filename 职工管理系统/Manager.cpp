#include"Manager.h"

manager::manager(int ID, string name, int DeptID)
{
	this->m_ID = ID;
	this->m_Name = name;
	this->m_DeptID = DeptID;
}

//��ʾ������Ϣ
void manager::show_Info()
{
	cout << "ְ����ţ�" << this->m_ID
		<< "\nthe Name of Deployee: " << this->m_Name
		<< "\nPosition: " << this->get_DeptName()
		<< "\nResponsiblity: Complete the Tasks Assigned by the Boss" << endl;

}

//��ȡ��λ����
string manager::get_DeptName()
{
	return "Manager";
}