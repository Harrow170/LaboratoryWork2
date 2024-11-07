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
	newNodeList->next = head;
	head->prev = newNodeList;
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
	while (last->next)
	{
		last = last->next;
	}
	last->next = newNodeList;
	newNodeList->prev = last;
}

void RemoveElement(NodeList*& head, int data)
{
	NodeList* current = head;
	while (current)
	{
		if (current->data == data)
		{
			if (current->prev)
			{
				current->prev->next = current->next;
			}
			else
			{
				head = current->next;
			}
			if (current->next)
			{
				current->next->prev = current->prev;
			}
			delete current;
			return;
		}
		current = current->next;
	}
	throw runtime_error("Element not found ");
}

void AddAfter(NodeList*& head, int target, int data)
{
	NodeList* current = head;
	while (current)
	{
		if (current->data == target)
		{
			NodeList* newNodeList = new NodeList(data);
			newNodeList->next = current->next;
			newNodeList->prev = current;

			if (current->next)
			{
				current->next->prev = newNodeList;
			}
			current->next = newNodeList;
			return;
		}
		current = current->next;
	}
	throw runtime_error("Target element not found ");
}

void AddBefore(NodeList*& head, int target, int data)
{
	NodeList* current = head;
	while (current)
	{
		if (current->data == target)
		{
			NodeList* newNodeList = new NodeList(data);
			newNodeList->prev = current->prev;
			newNodeList->next = current;

			if (current->prev)
			{
				current->prev->next = newNodeList;
			}
			current->prev = newNodeList;
			return;
		}
		current = current->next;
	}
	throw runtime_error("target element not found ");
}

void SortNodeList(NodeList*& head)
{
	if (!head || !head->next)
	{
		return;
	}
	NodeList* sorted = nullptr;
	NodeList* current = head;
	while (current)
	{
		NodeList* next = current->next;
		if (!sorted || sorted->data >= current->data)
		{
			current->next = sorted;
			current->prev = nullptr;
			if (sorted)
			{
				sorted->prev = current;
			}
			sorted = current;
		}
		else
		{
			NodeList* temp = sorted;
			while (temp->next && temp->next->data < current->data)
			{
				temp = temp->next;
			}
			current->next = temp->next;
			if (temp->next)
			{
				temp->next->prev = current;
			}
			temp->next = current;
			current->prev = temp;
		}
		current = next;
	}
	head = sorted;
}

bool LinearSearch(NodeList*& head, int data)
{
	NodeList* current = head;
	while (current)
	{
		if (current->data == data)
		{
			return true;
		}
		current = current->next;
	}
	return false;
}

void ClearNodeList(NodeList*& head)
{
	while (head)
	{
		NodeList* temp = head;
		head = head->next;
		delete temp;
	}
}


