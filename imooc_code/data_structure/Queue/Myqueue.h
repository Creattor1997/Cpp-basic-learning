#pragma once
#include"customer.h"

//���ζ���
class MyQueue
{
public:
	MyQueue(int queueCapacity); //��������
	virtual ~MyQueue();//���ٶ���
	void ClearQueue();//��ն���
	bool QueueEmpty() const; //�пն���
	bool QueueFull() const; //����
	int QueueLength() const;//���г���
	bool EnQueue(Customer element); //��Ԫ�����
	bool DeQueue(Customer &element); // ��Ԫ�س���
	void QueueTraverse(); //��������

private:
	Customer *m_pQueue; //��������ָ��
	int m_iQueueLen; //����Ԫ�ظ���
	int m_iQueueCapacity; //������������
	int m_iHead; //��ͷ
	int m_iTail; //��β
};