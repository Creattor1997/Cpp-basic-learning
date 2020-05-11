#pragma once
#include"Node.h"
#include<vector>
#include"Edge.h"

using namespace std;

class CMap
{
public:
	CMap(int capacity);
	~CMap();
	bool addNode(Node *pNode);//��ͼ�м��붥��
	void resetNode();//���ö���
	bool setValueToMatrixForDirectedGraph(int row, int col, int val = 1);//Ϊ����ͼ�����ڽӾ���
	bool setValueToMatrixForUndirectedGraph(int row, int col, int val = 1);//Ϊ����ͼ�����ڽӾ���

	void printMatrix(); //��ӡ�ڽӾ���

	void depthFirstTraverse(int nodeIndex);//������ȱ���
	void breadthFirstTraverse(int nodeIndex);//������ȱ���

	void primTree(int nodeIndex); // prim������

private:
	bool getValueFromMatrix(int row, int col, int &val); // �Ӿ����л�ȡȨֵ
	void breadthFirstTraverImpl(vector<int>preVec);
	int getMinEdge(vector<Edge> edgevec);

private:
	int m_iCapacity; //ͼ�����������ɵĶ�����
	int m_iNodeCount; //�Ѿ���ӵĶ������
	Node *m_pNodeArray; //������Ŷ�������
	int *m_pMatrix; //��������ڽӾ���

	Edge *m_pEdge; //�ߵ�ָ��
};