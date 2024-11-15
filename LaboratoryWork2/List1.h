#include "Node.h"

struct List
{
	//! \brief указатель на первый элемент
	Node* Head;

	//! \brief указатель на последний элемент
	Node* Tail;

	List(): Head(nullptr), Tail(nullptr) {}
};

//! \brief Функция для добавления элемента в начало списка
//! \param head Указывает на голову списка
//! \param data Данные, которые будут добавленны в узел
void AddAtBeggining(Node*& head, int data);

//! \brief Функция для добавления элемента в конец списка
//! \param head Указывает на голову списка
//! \param data Данные, которые будут добавленны в узел
void AddAtEnd(Node*& head, int data);

//! \brief Функция для удаления из списка по значению
//! \param head Указывает на голову списка
//! \param data Данные, которые будут добавленны в узел
void RemoveElement(Node*& head, int data);

//! \brief Функция для добавления элемента после другого
//! \param head Указывает на голову списка
//! \param data Данные, которые будут добавленны в узел
//! \param target Значение узла
void AddAfter(Node*& head, int target, int data);

//! \brief Функция добавления элемента перед другим
//! \param head Указывает на голову списка
//! \param data Данные, которые будут добавленны в узел
//! \param target Значение узла
void AddBefore(Node*& head, int target, int data);

//! \brief Функция сортировки списка
//! \param head Указывает на голову списка
void SortNodeList(Node*& head);

//! \brief Функция линейного поиска
//! \param head Указывает на голову списка
//! \param data Данные, которые будут добавленны в узел
bool LinearSearch(Node* head, int data);

//! \brief Функция очистки списка
//! \param head Указывает на голову списка
void ClearNodeList(Node*& head);