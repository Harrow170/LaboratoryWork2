//#include "NodeLIst.h"
#include "List1.h"
#include <stdexcept>

using namespace std;

void AddAtBeggining(Node*& head, int data)
{
	Node* newNodeList = new Node(data);
	if (!head)
	{
		head = newNodeList;
		return;
	}

	newNodeList->Next = head;
	head->Prev = newNodeList;
	head = newNodeList;
}

void AddAtEnd(Node*& head, int data)
{
	Node* newNodeList = new Node(data);
	if (!head)
	{
		head = newNodeList;
		return;
	}

	Node* last = head;
	while (last->Next)
	{
		last = last->Next;
	}

	last->Next = newNodeList;
	newNodeList->Prev = last;
}

void RemoveElement(Node*& head, int data)
{
	Node* current = head;
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

void AddAfter(Node*& head, int target, int data)
{
	Node* current = head;
	while (current)
	{
		if (current->Data == target)
		{
			Node* newNodeList = new Node(data);
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

void AddBefore(Node*& head, int target, int data)
{
	Node* current = head;
	while (current)
	{
		if (current->Data == target)
		{
			Node* newNodeList = new Node(data);
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

void SortNodeList(Node*& head)
{
	if (!head || !head->Next)
	{
		return;
	}

	Node* sorted = nullptr;
	Node* current = head;
	while (current)
	{
		Node* next = current->Next;
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
			Node* temp = sorted;
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

bool LinearSearch(Node* head, int data)
{
	Node* current = head;
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

void ClearNodeList(Node*& head)
{
	while (head)
	{
		Node* temp = head;
		head = head->Next;
		delete temp;
	}
}