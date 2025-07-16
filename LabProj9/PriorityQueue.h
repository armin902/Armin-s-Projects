// Academic Integrity Affidavit:
// I certify that this program code is my work.  Others may have
// assisted me with planning and concepts, but the code was written,
// solely, by me.
// I understand that submitting code that is totally or partially
// the product of other individuals is a violation of the Academic
// Integrity Policy and accepted ethical precepts. Falsified
// execution results are also results of improper activities. Such
// violations may result in zero credit for the assignment, reduced
// credit for the assignment, or course failure.
//
// Name: <Armin Rejaie>
// Section: <001>
// Assignment: e.g. LabProj9
//

#pragma once
#include <iostream>
template <class T>
class PriorityQueue {
public:
	PriorityQueue();
	~PriorityQueue();
	PriorityQueue(const PriorityQueue<T>& origQueue);
	PriorityQueue<T>& operator=(const PriorityQueue<T>& origQueue);
	bool IsEmpty();
	void Insert(T item, int priorityVal);
	void ChangePriority(T item, int priorityVal);
	T Pull();
	T Peek();

private:
	struct Node {
		T item;
		int priority;
	};
	Node* buff;
	int size;
	int qFront, qBack;
};

template <class T>
PriorityQueue<T>::PriorityQueue()
{
	size = 1024;
	buff = new Node[size];
	qFront = 0;
	qBack = 0;
}

template <class T>
PriorityQueue<T>::~PriorityQueue()
{
	delete[] buff;
}

template <class T>
PriorityQueue<T>::PriorityQueue(const PriorityQueue<T>& origQueue)
{
	size = origQueue.size;
	buff = new Node[size];
	for (int i = 0; i < size; i++)
	{
		buff[i].item = origQueue.buff[i].item;
		buff[i].priority = origQueue.buff[i].priority;
	}
}

template <class T>
PriorityQueue<T>& PriorityQueue<T>::operator=(const PriorityQueue<T>& origQueue)
{
	if (this != &origQueue)
	{
		size = origQueue.size;
	}
	if (size != origQueue.size)
	{
		delete[] buff;
		size = origQueue.size;
		buff = new Node[size];
	}
	for (int i = 0; i < size; i++)
	{
		buff[i].item = origQueue.buff[i].item;
		buff[i].priority = origQueue.buff[i].priority;
	}
	return *this;
}

template <class T>
bool PriorityQueue<T>::IsEmpty()
{ 
	if (qFront == qBack)
	{
		return true;
	}
	else
	{
		return false;
	}
}

template <class T>
void PriorityQueue<T>::Insert(T item, int priorityVal)
{
	for (int i = 0; i < qBack; i++)
	{
		if (buff[i].item == item)
		{
			cout << "***Error: Trying to insert duplicated item." << endl;
			return;
		}
	}


	if (qBack >= size)
	{
		int newSize = size + (size / 2);
		Node* newBuff = new Node[newSize];

		for (int i = 0; i < size; i++)
		{
			newBuff[i] = buff[i];
		}
		delete[] buff;
		buff = newBuff;
		size = newSize;
	}

	buff[qBack].item = item;
	buff[qBack].priority = priorityVal;
	qBack++;
	return;
}

template <class T>
void PriorityQueue<T>::ChangePriority(T item, int priorityVal)
{
	int counter = 0;
	for (int i = 0; i < size; i++)
	{
		if (buff[i].item == item)
		{
			counter = i;
			break;
		}
	}
	buff[counter].priority = priorityVal;
	return;
}

template <class T>
T PriorityQueue<T>::Pull()
{
	int tracker = 0;
	for (int i = 0; i < size; i++)
	{
		if (buff[i].priority > buff[tracker].priority)
		{
			tracker = i;
		}
	}

	T highestItem = buff[tracker].item;
	for (int i = tracker; i < qBack - 1; i++) {
		buff[i] = buff[i + 1];
	}

	qBack--;  
	return highestItem;
}

template <class T>
T PriorityQueue<T>::Peek()
{
	int tracker = 0;
	for (int i = 0; i < size; i++)
	{
		if (buff[i].priority > buff[tracker].priority)
		{
			tracker = i;
		}
	}

	return buff[tracker].item;
}


/*
Successfully created an empty priority queue for strings.
Insert string "Homework Due Today" to the priority queue with priority value 20.
Insert string "Play Games" to the priority queue with priority value 3.
Insert string "Prepare Dinner" to the priority queue with priority value 30.
Insert string "Exam" to the priority queue with priority value 70.
Insert string "Workout" to the priority queue with priority value 15.
Insert string "Homework Due Today" to the priority queue with priority value 45.
***Error: Trying to insert duplicated item.
Current item with the highest priority: Exam
Removing the highest priority item...
Current item with the highest priority: Prepare Dinner
Change the priority of item "Homework Due Today" to 50.
Current item with the highest priority: Homework Due Today
Removing the two highest priority item...
Current item with the highest priority: Workout
*/