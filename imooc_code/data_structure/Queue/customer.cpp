#include<iostream>
#include"customer.h"

using namespace std;

Customer::Customer(string name, int age)
{
	m_name = name;
	m_age = age;
}

void
Customer::printinfo() const
{
	cout << endl << "������ " << m_name << endl;
	cout << "���䣺" << m_age << endl;
} 