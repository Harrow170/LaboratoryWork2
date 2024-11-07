//! \brief ��������� ���� ����������� ������
struct NodeList
{
	//! \brief ������ ����
	int data;

	//! \brief ��������� �� ���������� ����
	NodeList* prev;

	//! \brief ��������� �� ��������� ����
	NodeList* next;

	//! \brief ����������� ��� ����
	NodeList(int value) : data(value), prev(nullptr), next(nullptr) {}
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
bool LinearSearch(NodeList*& head, int data);

//! \brief ������� ������� ������
//! \param head ��������� �� ������ ������
void ClearNodeList(NodeList*& head);