#include"employee.h"


employee::employee(int ID, string name, int DeptID)
{
	this->m_ID = ID;
	this->m_Name = name;
	this->m_DeptID = DeptID;
}

//��ʾ������Ϣ
void employee::show_Info()
{
	cout << "ְ����ţ�" << this->m_ID
		<< "\nthe Name of Deployee: " << this->m_Name
		<< "\nPosition: " << this->get_DeptName()
		<< "\n'Responsiblity: Complete the Tasks Assigned by the Manager" << endl;

}

//��ȡ��λ����
string employee::get_DeptName()
{
	return "Deployee";
}