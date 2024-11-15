#include <iostream>
//#include "NodeList.h"
//#include "NodeLIstItem.h"
#include <string>
#include <limits>
#include "List1.h"
//#include "Node.h"

using namespace std;

//! \brief Функция вывода списка на экран
//! \param head Указывает на голову списка
void Display(Node*& head)
{
	Node* current = head;
	while (current)
	{
		cout << current->Data << " ";
		current = current->Next;
	}

	cout << endl;
}

//! \brief функция получения значения 
//! \param const string& ссылка на строку, которая не сможет быть изменена 
//! \param prompt для вывода на экран строки
int GetInput(const string& prompt)
{
	int value;
	string input;

	while (true)
	{
		cout << prompt;
		getline(cin, input);

		try
		{
			value = stoi(input);
			return value;
		}

		catch (const invalid_argument& e)
		{
			cout << "Invalid input. Please enter an integer value.\n";
		}

		catch (const out_of_range& e)
		{
			cout << "Input is out of range. Please enter a valid integer value.\n";
		}
	}
}

int main()
{
	Node* NodeHead = nullptr;

	while (true)
	{
		cout << "Current NodeList:\n ";
		Display(NodeHead);
		cout << endl;

		int choice = GetInput("Menu: \n 1. Add at beggining\n 2. Add at end\n 3. Remove\n 4. Add after\n 5. Add before\n 6. Sort\n 7. Linnear search\n 8. Operations time\n 0. End\n");

		switch (choice)
		{
		case 1:
		{
			int value = GetInput("Enter element to add at beggining: ");
			AddAtBeggining(NodeHead, value);
			break;
		}

		case 2:
		{
			int value = GetInput("Enter element to add at end: ");
			AddAtEnd(NodeHead, value);
			break;
		}

		case 3:
		{
			int value = GetInput("Enter value to delete: ");
			//GetIndex(index);
			RemoveElement(NodeHead, value);
			break;
		}

		case 4:
		{
			int target = GetInput("Enter element to add after: ");
			int value = GetInput("Enter element to add: ");
			AddAfter(NodeHead, target, value);
			break;
		}

		case 5:
		{
			int target = GetInput("Enter element to add before: ");
			int value = GetInput("Enter element to add: ");
			AddBefore(NodeHead, target, value);
			break;
		}

		case 6:
		{
			SortNodeList(NodeHead);
			cout << "Sorted " << endl;
			break;
		}

		case 7:
		{
			int value = GetInput("Enter a value for a linear search: ");
			if (LinearSearch(NodeHead, value))
			{
				cout << "Element found\n";
			}

			else
			{
				cout << "Element not found\n";
			}

			break;
		}

		/*case 8:
		{
			int value = GetInput("Size: ");
			measureInsertionAndDeletion(value);
			break;
		}*/

		case 0:
			return 0;
		default:
			cout << "Error " << endl;
		}
	}

	ClearNodeList(NodeHead);
	return 0;
}