//! \brief ��������� ��� ����������� ������
struct List
{
	//! \brief ��������� �� ������ �������
	List* Head = nullptr;

	//! \brief ��������� �� ��������� �������
	List* Tail = nullptr;
};

//! \brief ��������� ��� ����������� ������
//! \return ���������� ������
List* CreateList();