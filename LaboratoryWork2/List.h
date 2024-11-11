//! \brief —труктура дл€ двусв€зного списка
struct List
{
	//! \brief указатель на первый элемент
	List* Head = nullptr;

	//! \brief указатель на последний элемент
	List* Tail = nullptr;
};

//! \brief —труктура дл€ двусв€зного списка
//! \return двусв€зный список
List* CreateList();