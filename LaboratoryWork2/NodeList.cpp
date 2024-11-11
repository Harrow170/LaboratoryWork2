#include "NodeLIst.h"
#include <stdexcept>

using namespace std;

void AddAtBeggining(NodeList*& head, int data)
{
	NodeList* newNodeList = new NodeList(data);
	if (!head)
	{
		head = newNodeList;
		return;
	}

	newNodeList->Next = head;
	head->Prev = newNodeList;
	head = newNodeList;
}

void AddAtEnd(NodeList*& head, int data)
{
	NodeList* newNodeList = new NodeList(data);
	if (!head)
	{
		head = newNodeList;
		return;
	}

	NodeList* last = head;
	while (last->Next)
	{
		last = last->Next;
	}

	last->Next = newNodeList;
	newNodeList->Prev = last;
}

void RemoveElement(NodeList*& head, int data)
{
	NodeList* current = head;
	while (current)
	{
		if (current->Data == data)
		{
			if (current->Prev)
			{
				current->Prev->Next = current->Next;
			}

			else
			{
				head = current->Next;
			}

			if (current->Next)
			{
				current->Next->Prev = current->Prev;
			}

			delete current;
			return;
		}

		current = current->Next;
	}

	throw runtime_error("Element not found ");
}

void AddAfter(NodeList*& head, int target, int data)
{
	NodeList* current = head;
	while (current)
	{
		if (current->Data == target)
		{
			NodeList* newNodeList = new NodeList(data);
			newNodeList->Next = current->Next;
			newNodeList->Prev = current;

			if (current->Next)
			{
				current->Next->Prev = newNodeList;
			}

			current->Next = newNodeList;
			return;
		}

		current = current->Next;
	}

	throw runtime_error("Target element not found ");
}

void AddBefore(NodeList*& head, int target, int data)
{
	NodeList* current = head;
	while (current)
	{
		if (current->Data == target)
		{
			NodeList* newNodeList = new NodeList(data);
			newNodeList->Prev = current->Prev;
			newNodeList->Next = current;

			if (current->Prev)
			{
				current->Prev->Next = newNodeList;
			}

			current->Prev = newNodeList;
			return;
		}

		current = current->Next;
	}

	throw runtime_error("target element not found ");
}

void SortNodeList(NodeList*& head)
{
	if (!head || !head->Next)
	{
		return;
	}

	NodeList* sorted = nullptr;
	NodeList* current = head;
	while (current)
	{
		NodeList* next = current->Next;
		if (!sorted || sorted->Data >= current->Data)
		{
			current->Next = sorted;
			current->Prev = nullptr;
			if (sorted)
			{
				sorted->Prev = current;
			}

			sorted = current;
		}

		else
		{
			NodeList* temp = sorted;
			while (temp->Next && temp->Next->Data < current->Data)
			{
				temp = temp->Next;
			}

			current->Next = temp->Next;
			if (temp->Next)
			{
				temp->Next->Prev = current;
			}

			temp->Next = current;
			current->Prev = temp;
		}

		current = next;
	}

	head = sorted;
}

bool LinearSearch(NodeList* head, int data)
{
	NodeList* current = head;
	while (current)
	{
		if (current->Data == data)
		{
			return true;
		}

		current = current->Next;
	}

	return false;
}

void ClearNodeList(NodeList*& head)
{
	while (head)
	{
		NodeList* temp = head;
		head = head->Next;
		delete temp;
	}
}


