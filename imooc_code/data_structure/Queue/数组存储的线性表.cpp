//���Ա��˳��洢ʵ��
#include <stdio.h>
#include<iostream>
#include <malloc.h>
#define MAXSIZE 100;

using namespace std;

typedef int ElementType; //Elementtype  �ɶ���Ϊ�κ�����

class List
{
public:
	ElementType Date[MAXSIZE];
	int Last; 
public:
	List();
	~List();
	friend ElementType FindKth(int K, List &L);//���ҵ�K��Ԫ��
	friend int Find(ElementType X, List &L); //����X���ĸ�λ��
	friend void Insert(ElementType X, int i, List &L); //��λ��iǰ����һ����Ԫ��X
	friend void Delete(int i, List &L); //ɾ��ָ��λ��i��Ԫ��
	friend int Length(List &L); //�������Ա�L�ĳ���
};





//��ʼ��
List::List()
{
	
	Last = -1;
	
}

//����X���ĸ�λ�õ�һ�γ���
int Find(ElementType X, List &L)
{
	int i = 0;
	while (i <= L.Last&&L.Date[i] != X)
		i++;
	if (i > L.Last) return -1; //û�ҵ�����-1
	else return i;
}

//����
void Insert(ElementType X, int i, List &L)
{
	int j;
	if (L.Last == (MAXSIZE - 1)) //��ռ�����
	{
		cout << "����" << endl;
		
	}

	if (i<1 || i >L.Last + 2) //����λ�úϷ��Լ��
	{
		cout << "λ�ò��Ϸ�" << endl;
		
	}
	
	for (j = L.Last; j >= i - 1; j--)
	{
		L.Date[j + 1] = L.Date[j]; //i�����ÿ������ƶ�һλ
	}

	L.Date[i - 1] = X;
	L.Last++; //ĩβ��ʶ�޸�
}

//ɾ��
void Delete(int i, List &L)
{
	int j;
	if (i<1 || i> L.Last + 1)
	{
		cout << "�����ڵ�" << i << "��Ԫ��" << endl;
		return;
	}
	for (j = i; j <= L.Last; j++)//ɾ�껹Ҫ�����ƶ�
		L.Date[j - 1] = L.Date[j];
	L.Last--;
}

//�������
ElementType FindKth(int K, List &L)
{
	if (K < 0 || L.Last < K)//������
	{
		cout << "�����ڸ�Ԫ��" << endl;
		return 0;
	}
	
	return L.Date[K];
	
}

//��
int Length(List &L)
{
	return L.Last + 1;
}


//���Գ���
int main() {
	int i = 0;
	List L;
	Insert(11, 0, L);
	cout << "�����Ա�L-Data[0]����11\n";
	Insert(25, 0, L);
	cout << "�����Ա�L-Data[0]����25\n";
	Insert(33, 0, L);
	cout << "�����Ա�L-Data[0]����33\n";
	Insert(77, 0, L);
	cout << "�����Ա�L-Data[0]����77\n";
	cout << "��ʱ�����Ա�Ϊ��";
	for (i = 0; i < Length(L); i++)
		cout << L.Date[i];
	cout << endl;
	cout << "����ֵΪ12���±��ǣ�" << Find(12, L) << endl;
	cout << "�±�Ϊ3�����Ա��ֵ�ǣ�" << FindKth(3, L) << endl;;
	Delete(2, L);
	cout << "ɾ�����Ա����±�Ϊ2��Ԫ��\n";
	Delete(2, L);
	cout << "ɾ�����Ա����±�Ϊ2��Ԫ��\n";
	cout << "��ʱ�����Ա�Ϊ��";
	for (i = 0; i < Length(L); i++)
		cout << L.Date[i];

	cout << endl;

	system("pause");
	return 0;
}

