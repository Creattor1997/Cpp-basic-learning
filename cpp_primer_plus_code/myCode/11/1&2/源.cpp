#include<iostream>
#include<fstream>
#include<limits>
#include<stdio.h>
#include<time.h>
#include"vect.h"

using namespace std;
using namespace n_vector;

int
main(void)
{
	ofstream of;
	of.open("output.txt");

	while (true) {
		double step;
		double distance;
		unsigned cnt_steps = 0;

		cout << "���벽���� ";
		cin >> step;

		if (!cin || step <= 0)
		{
			break;
		}
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');	// ������뻺��������

		cout << "������룺 ";
		cin >> distance;
		if (!cin || distance <= 0)
		{
			break;
		}
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		of << "��ʼ" << endl;
		TVector vec(0, 0, TVector::POL);
		srand((unsigned)time(NULL));//��ϵͳʱ�ӻ�ȡ�����
		while (vec.getLength() < distance)
		{
			vec += TVector(step, rand() % 361, TVector::POL);
			of << cnt_steps++ << "��" << vec << endl;
		}
		of << "����<<<<<<<<<<" << endl;
		of << "����" << distance << "������" << step << "������" << cnt_steps << "�����꣬�յ�����" << vec << endl;
		of << "==========\n" << endl;
	}

	of.close();

	cout << endl;

	system("pause");
	return 0;
		
	

}