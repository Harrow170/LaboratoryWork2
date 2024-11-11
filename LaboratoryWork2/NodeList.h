#include "List.h"

//! \brief ��������� ���� ����������� ������
struct NodeList
{
	//! \brief ������ ����
	int Data;

	//! \brief ��������� �� ���������� ����
	NodeList* Prev;

	//! \brief ��������� �� ��������� ����
	NodeList* Next;

	//! \brief ����������� ��� ����
	NodeList(int value) : Data(value), Prev(nullptr), Next(nullptr) {}
};

//! \brief ������� ��� ���������� �������� � ������ ������
//! \param head ��������� �� ������ ������
//! \param data ������, ������� ����� ���������� � ����
void AddAtBeggining(NodeList*& head, int data);

//! \brief ������� ��� ���������� �������� � ����� ������
//! \param head ��������� �� ������ ������
//! \param data ������, ������� ����� ���������� � ����
void AddAtEnd(NodeList*& head, int data);

//! \brief ������� ��� �������� �� ������ �� ��������
//! \param head ��������� �� ������ ������
//! \param data ������, ������� ����� ���������� � ����
void RemoveElement(NodeList*& head, int data);

//! \brief ������� ��� ���������� �������� ����� �������
//! \param head ��������� �� ������ ������
//! \param data ������, ������� ����� ���������� � ����
//! \param target �������� ����
void AddAfter(NodeList*& head, int target, int data);

//! \brief ������� ���������� �������� ����� ������
//! \param head ��������� �� ������ ������
//! \param data ������, ������� ����� ���������� � ����
//! \param target �������� ����
void AddBefore(NodeList*& head, int target, int data);

//! \brief ������� ���������� ������
//! \param head ��������� �� ������ ������
void SortNodeList(NodeList*& head);

//! \brief ������� ��������� ������
//! \param head ��������� �� ������ ������
//! \param data ������, ������� ����� ���������� � ����
bool LinearSearch(NodeList* head, int data);

//! \brief ������� ������� ������
//! \param head ��������� �� ������ ������
void ClearNodeList(NodeList*& head);