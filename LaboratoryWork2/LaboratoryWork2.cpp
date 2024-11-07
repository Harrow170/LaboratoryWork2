#include <iostream>
#include "NodeList.h"
#include "NodeLIstItem.h"

using namespace std;

//! \brief Функция вывода списка на экран
//! \param head Указывает на голову списка
void Display(NodeList*& head)
{
	NodeList* current = head;
	while (current)
	{
		cout << current->data << " ";
		current = current->next;
	}
	cout << endl;
}

//! \brief функция получения значения 
//! \param const string& ссылка на строку, которая не сможет быть изменена 
//! \param prompt для вывода на экран строки
int GetInput(const string& prompt)
{
	int value;
	cout << prompt;
	cin >> value;
	return value;
}

//! \brief функция получения индекса 
//! \param index показывает индекс элемента
void GetIndex(int index)
{
	if (index != 1)
	{
		cout << "Index found: " << index << endl;
	}
	else
	{
		cout << "Index not found " << endl;
	}
}

int main()
{
	NodeList* ListHead = nullptr;

	while (true)
	{
		cout << "Current NodeList:\n ";
		Display(ListHead);
		cout << endl;

		int choice = GetInput("Menu: \n 1. Add at beggining\n 2. Add at end\n 3. Remove\n 4. Add after\n 5. Add before\n 6. Sort\n 7. Linnear search\n 8. Operations time\n 0. End\n");

		switch (choice)
		{
		case 1:
		{
			int value = GetInput("Enter element to add at beggining: ");
			AddAtBeggining(ListHead, value);
			break;
		}

		case 2:
		{
			int value = GetInput("Enter element to add at end: ");
			AddAtEnd(ListHead, value);
			break;
		}

		case 3:
		{
			int index = GetInput("Enter index to delete: ");
			GetIndex(index);
			RemoveElement(ListHead, index);
			break;
		}

		case 4:
		{
			int index = GetInput("Enter index to add after: ");
			int value = GetInput("Enter element to add: ");
			AddAfter(ListHead, index, value);
			break;
		}

		case 5:
		{
			int index = GetInput("Enter index to add before: ");
			int value = GetInput("Enter element to add: ");
			AddBefore(ListHead, index, value);
			break;
		}

		case 6:
		{
			SortNodeList(ListHead);
			cout << "Sorted " << endl;
			break;
		}

		case 7:
		{
			int value = GetInput("Enter a value for a linear search: ");
			int index = LinearSearch(ListHead, value);
			GetIndex(index);
			break;
		}

		case 8:
		{
			int value = GetInput("Size: ");
			MeasureInsertionsAndDeletions(value);
			break;
		}

		case 0:
			return 0;
		default:
			cout << "Error " << endl;
		}
	}

	ClearNodeList(ListHead);
	return 0;
}