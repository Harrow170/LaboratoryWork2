#include "List.h"

//! \brief Структура узла двусвязного списка
struct NodeList
{
	//! \brief Данные узла
	int Data;

	//! \brief Указатель на предыдущий узел
	NodeList* Prev;

	//! \brief Указатель на следующий узел
	NodeList* Next;

	//! \brief Конструктор для узла
	NodeList(int value) : Data(value), Prev(nullptr), Next(nullptr) {}
};

//! \brief Функция для добавления элемента в начало списка
//! \param head Указывает на голову списка
//! \param data Данные, которые будут добавленны в узел
void AddAtBeggining(NodeList*& head, int data);

//! \brief Функция для добавления элемента в конец списка
//! \param head Указывает на голову списка
//! \param data Данные, которые будут добавленны в узел
void AddAtEnd(NodeList*& head, int data);

//! \brief Функция для удаления из списка по значению
//! \param head Указывает на голову списка
//! \param data Данные, которые будут добавленны в узел
void RemoveElement(NodeList*& head, int data);

//! \brief Функция для добавления элемента после другого
//! \param head Указывает на голову списка
//! \param data Данные, которые будут добавленны в узел
//! \param target Значение узла
void AddAfter(NodeList*& head, int target, int data);

//! \brief Функция добавления элемента перед другим
//! \param head Указывает на голову списка
//! \param data Данные, которые будут добавленны в узел
//! \param target Значение узла
void AddBefore(NodeList*& head, int target, int data);

//! \brief Функция сортировки списка
//! \param head Указывает на голову списка
void SortNodeList(NodeList*& head);

//! \brief Функция линейного поиска
//! \param head Указывает на голову списка
//! \param data Данные, которые будут добавленны в узел
bool LinearSearch(NodeList* head, int data);

//! \brief Функция очистки списка
//! \param head Указывает на голову списка
void ClearNodeList(NodeList*& head);