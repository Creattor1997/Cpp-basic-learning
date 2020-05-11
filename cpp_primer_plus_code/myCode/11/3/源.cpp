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
		
		double max = 0.0;
		double min = numeric_limits<unsigned>::max();
		double sum = 0.0;
		double average = 0.0;
		unsigned times;

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

		cout << "������Դ�����";
		cin >> times;
		if (!cin) {
			break;
		}
		cin.clear();	// ������뻺���������־λ
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');	// ������뻺��������
		of << "��ʼ" << endl;

		for (unsigned i = 0; i < times; ++i) {

			unsigned cnt_steps = 0;
			TVector vec(0, 0, TVector::POL);
			srand((unsigned)time(NULL));//��ϵͳʱ�ӻ�ȡ�����
			while (vec.getLength() < distance)
			{
				vec += TVector(step, rand() % 361, TVector::POL);
				of << cnt_steps++ << "��" << vec << endl;

			}

			cout << cnt_steps << "���ߵ�" << vec << endl;

			if (cnt_steps > max) {
				max = cnt_steps;
			}
			if (cnt_steps < min) {
				min = cnt_steps;
			}

			sum = sum + cnt_steps;
		}

		cout << "����<<<<<<<<<<" << endl;
		cout << "����" << distance << "������" << step << "������" << step << endl;
		cout << max << endl;
		cout << min << endl;
		cout << sum / times << endl;
		of << "==========\n" << endl;
		
	}
	of.close();

	cout << endl;

	system("pause");
	return 0;
		
	

}