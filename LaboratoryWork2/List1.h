#include "Node.h"

struct List
{
	//! \brief ��������� �� ������ �������
	Node* Head;

	//! \brief ��������� �� ��������� �������
	Node* Tail;

	List(): Head(nullptr), Tail(nullptr) {}
};

//! \brief ������� ��� ���������� �������� � ������ ������
//! \param head ��������� �� ������ ������
//! \param data ������, ������� ����� ���������� � ����
void AddAtBeggining(Node*& head, int data);

//! \brief ������� ��� ���������� �������� � ����� ������
//! \param head ��������� �� ������ ������
//! \param data ������, ������� ����� ���������� � ����
void AddAtEnd(Node*& head, int data);

//! \brief ������� ��� �������� �� ������ �� ��������
//! \param head ��������� �� ������ ������
//! \param data ������, ������� ����� ���������� � ����
void RemoveElement(Node*& head, int data);

//! \brief ������� ��� ���������� �������� ����� �������
//! \param head ��������� �� ������ ������
//! \param data ������, ������� ����� ���������� � ����
//! \param target �������� ����
void AddAfter(Node*& head, int target, int data);

//! \brief ������� ���������� �������� ����� ������
//! \param head ��������� �� ������ ������
//! \param data ������, ������� ����� ���������� � ����
//! \param target �������� ����
void AddBefore(Node*& head, int target, int data);

//! \brief ������� ���������� ������
//! \param head ��������� �� ������ ������
void SortNodeList(Node*& head);

//! \brief ������� ��������� ������
//! \param head ��������� �� ������ ������
//! \param data ������, ������� ����� ���������� � ����
bool LinearSearch(Node* head, int data);

//! \brief ������� ������� ������
//! \param head ��������� �� ������ ������
void ClearNodeList(Node*& head);