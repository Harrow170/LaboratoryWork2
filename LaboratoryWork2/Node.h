//! \brief ��������� ���� ����������� ������
struct Node
{
	//! \brief ������ ����
	int Data;

	//! \brief ��������� �� ���������� ����
	Node* Prev;

	//! \brief ��������� �� ��������� ����
	Node* Next;

	//! \brief ����������� ��� ����
	Node(int value) : Data(value), Prev(nullptr), Next(nullptr) {}
};