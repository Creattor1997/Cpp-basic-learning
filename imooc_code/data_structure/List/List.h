#pragma on
#include"Coordinate.h"


class List
{
public:
	List(int size); //����
	~List();        //����
	void ClearList();//���
	bool ListEmpty(); //�ж��Ƿ�Ϊ��
	int ListLength();//��ȡ����
	bool GetElem(int i, Coordinate *e);//��ȡָ��Ԫ��
	int LocateElem(Coordinate *e);//Ѱ�������Ԫ�ص�λ��
	bool PriorElem(Coordinate *currentElem, Coordinate *preElem);//��ȡָ��Ԫ�ص�ǰ��
	bool NextElem(Coordinate *currentElem, Coordinate *nextElem); //��ȡָ��Ԫ�صĺ��
	void ListTraverse();//����
	bool ListInsert(int i, Coordinate *e);//����
	bool ListDelete(int i, Coordinate *e);//ɾ��

private:
	Coordinate * m_pList;
	int m_iLength;
	int m_iSize;
};