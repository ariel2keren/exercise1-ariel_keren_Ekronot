#include "Queue.h"
#include <iostream>
#include <string>


//This function will initiate a Queue. With the length of 'size' and the NULL pointer q.
void initQueue(Queue* q, unsigned int size)
{
	q->queue = new int[size];
	q->length = size;
	q->counter = 0;
}

//This function will clean the queue using delete.
void cleanQueue(Queue* q)
{
	delete[] q->queue;
	q->queue = NULL;
}

//This function will enqueue a new Value to the queue.
void enqueue(Queue* q, unsigned int newValue)
{
	q->queue[q->counter] = newValue;
	q->counter += 1;
}

//This function will remove an element from the queue.
int dequeue(Queue* q) // return element in top of queue, or -1 if empty
{
	if (isEmpty(q))
	{
		return -1;
	}
	q->queue[0] = q->queue[1];
	q->counter -= 1;
}

//This function will return False in case the queue is not empty. else True.
bool isEmpty(Queue* s)
{
	if (s != NULL)
	{
		return false;
	}
	return true;
}

//This function will return True if the queue is Full.
bool isFull(Queue* s)
{
	if (s->counter == s->length)
	{
		return true;
	}
	return false;
}