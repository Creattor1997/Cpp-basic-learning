#include<iostream>
#include<cstring>
#include<string>
#include"golf.h"
#pragma warning(disable:4996)
using namespace std;

golf::golf(const char*name, int hc)
{
	strcpy(fullname, name);
	handicap = hc;
}

int golf::setgolf()
{
	cout << "��������: ";
	string strTmp;
	getline(cin, strTmp);
	if ("" == strTmp)
	{
		return (0);
	}
	
	cout << "�����㣺 ";
	int n;
	cin >> n;
	cin.get();
	if (!n) {
		return (0);
	}

	*this = golf(strTmp.c_str(), n);

	return(1);
}

void golf::sethandicap(int hc)
{
	handicap = hc;
}

void golf::showgolf(void) const
{
	cout << fullname << '\t' << handicap;
}