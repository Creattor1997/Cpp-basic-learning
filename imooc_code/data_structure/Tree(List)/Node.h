#pragma once

class Node
{
public:
	Node();
	Node *SearchNode(int nodeIndex);
	void DeleteNode();
	void PreorderTraversal();//ǰ�����
	void InorderTraversal();//�������
	void PostorderTraversal();//�������
	int index;
	int data;
	Node *pLChild;
	Node *pRChild;
	Node *pParent;
};