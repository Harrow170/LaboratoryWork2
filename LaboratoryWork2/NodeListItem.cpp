#include <iostream>
#include <chrono>
#include <vector>
#include "NodeList.h" 

using namespace std;
using namespace std::chrono;

void measureInsertionAndDeletion(int listSize) 
{
    NodeList* head = nullptr;

    
    auto startInsert = high_resolution_clock::now();
    for (int i = 0; i < listSize; ++i) 
    {
        AddAtBeggining(head, i); 
    }
    auto stopInsert = high_resolution_clock::now();
    auto durationInsert = duration_cast<microseconds>(stopInsert - startInsert);

    
    auto startDelete = high_resolution_clock::now();
    for (int i = 0; i < listSize; ++i) 
    {
        RemoveElement(head, i); 
    }
    auto stopDelete = high_resolution_clock::now();
    auto durationDelete = duration_cast<microseconds>(stopDelete - startDelete);

    
    cout << "List Size: " << listSize << ", Insertion Time: " << durationInsert.count()
        << " microseconds, Deletion Time: " << durationDelete.count() << " microseconds" << endl;

    ClearNodeList(head); 
}
