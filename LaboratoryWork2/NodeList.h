#include "List.h"

//! \brief ��������� ���� ����������� ������
struct List
{
	//! \brief ������ ����
	int Data;

	//! \brief ��������� �� ���������� ����
	List* Prev;

	//! \brief ��������� �� ��������� ����
	List* Next;

	//! \brief ����������� ��� ����
	List(int value) : Data(value), Prev(nullptr), Next(nullptr) {}
};

//! \brief ������� ��� ���������� �������� � ������ ������
//! \param head ��������� �� ������ ������
//! \param data ������, ������� ����� ���������� � ����
void AddAtBeggining(List*& head, int data);

//! \brief ������� ��� ���������� �������� � ����� ������
//! \param head ��������� �� ������ ������
//! \param data ������, ������� ����� ���������� � ����
void AddAtEnd(List*& head, int data);

//! \brief ������� ��� �������� �� ������ �� ��������
//! \param head ��������� �� ������ ������
//! \param data ������, ������� ����� ���������� � ����
void RemoveElement(List*& head, int data);

//! \brief ������� ��� ���������� �������� ����� �������
//! \param head ��������� �� ������ ������
//! \param data ������, ������� ����� ���������� � ����
//! \param target �������� ����
void AddAfter(List*& head, int target, int data);

//! \brief ������� ���������� �������� ����� ������
//! \param head ��������� �� ������ ������
//! \param data ������, ������� ����� ���������� � ����
//! \param target �������� ����
void AddBefore(List*& head, int target, int data);

//! \brief ������� ���������� ������
//! \param head ��������� �� ������ ������
void SortNodeList(List*& head);

//! \brief ������� ��������� ������
//! \param head ��������� �� ������ ������
//! \param data ������, ������� ����� ���������� � ����
bool LinearSearch(List* head, int data);

//! \brief ������� ������� ������
//! \param head ��������� �� ������ ������
void ClearNodeList(List*& head);