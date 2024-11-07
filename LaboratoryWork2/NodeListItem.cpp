#include <iostream>
#include <chrono>
#include <vector>
#include "NodeList.h"

using namespace std;
using namespace std::chrono;

void MeasureInsertionsAndDeletions(int maxsize)
{
	vector<long long> insertAtBeginningTimes;
	vector<long long> insertAtEndTimes;
	vector<long long> removeElementTimes;
	vector<long long> insertAfterTimes;
	vector<long long> insertBeforeTimes;

	for (int size = 1; size <= maxsize; size *= 10)
	{
		NodeList* head = nullptr;
		auto start = high_resolution_clock::now();
		for (int i = 0; i < size; ++i)
		{
			AddAtBeggining(head, i);
		}
		auto end = high_resolution_clock::now();
		insertAtBeginningTimes.push_back(duration_cast<microseconds>(end - start).count());

		start = high_resolution_clock::now();
		for (int i = 0; i < size; ++i)
		{
			AddAtEnd(head, i);
		}
		end = high_resolution_clock::now();
		insertAtEndTimes.push_back(duration_cast<microseconds>(end - start).count());

		start = high_resolution_clock::now();
		for (int i = 0; i < size; ++i)
		{
			try
			{
				RemoveElement(head, i);
			}
			catch (runtime_error&) 
			{

			}
		}
		end = high_resolution_clock::now();
		removeElementTimes.push_back(duration_cast<microseconds>(end - start).count());

		start = high_resolution_clock::now();
		for (int i = 0; i < size; ++i)
		{
			for (int j = 0; j < size / 2; ++j)
			{
				AddAfter(head, j, i);
			}
		}
		end = high_resolution_clock::now();
		insertAfterTimes.push_back(duration_cast<microseconds>(end - start).count());

		start = high_resolution_clock::now();
		for (int i = 0; i < size; ++i)
		{
			for (int j = 0; j < size / 2; ++j)
			{
				AddBefore(head, j, i);
			}
		}
		end = high_resolution_clock::now();
		insertBeforeTimes.push_back(duration_cast<microseconds>(end - start).count());


		ClearNodeList(head);
	}

	cout << "Size\tInsertAtBeginning\tInsertAtEnd\tRemoveElement\tInsertAfter\tInsertbefore\n";
	for (int i = 0; i < insertAtBeginningTimes.size(); ++i)
	{
		cout << (1 << (i + 1)) << "\t"
			<< insertAtBeginningTimes[i] << "\t\t"
			<< insertAtEndTimes[i] << "\t\t"
			<< removeElementTimes[i] << "\t\t"
			<< insertAfterTimes[i] << "\t\t"
			<< insertBeforeTimes[i] << "\n";
	}
}