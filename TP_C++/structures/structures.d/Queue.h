/****************************************************************************
 *
 * $Id: Queue.h 1061 2007-03-25 12:08:01Z phil $
 *
 ****************************************************************************/

#ifndef __QUEUE
#define __QUEUE

#include "Element.h"


/*******************************
 * class role
 * Non-template implementation of a queue, using a doubly-linked
 * list. 
 * Use class Element as base class for queue elements.
 * Insertions and deletions at first / last position are in O(1).
 * Only addresses are stored in queue: collection is not responsible
 *   for element memory management.
 *******************************/

// "tool" class to implement the queue
class QueueNode {
  friend class Queue;
private:
  Element * _value;		// @ of current element
  QueueNode * _next;		// link to next node
  QueueNode * _prev;		// link to previous node

  // constructor: links to 0 by default
  QueueNode(Element* e = 0, QueueNode* n = 0, QueueNode* p = 0){
    _value = e;
    _next = n;
    _prev = p;
  }
};


/*******************************
 * PUBLIC CLASS Queue
 *******************************/

class Queue {

protected:

  QueueNode *_first, *_last;	// queue head and tail
  int _size;			// maintained during inserts/deletes

public:
  Queue();			// create an empty queue
  Element * first();		// return 0 if queue is empty
  Element * last();		// return 0 if queue is empty
  void addFirst(Element* e);	// add e as queue head
  void addLast(Element* e);	// add e as queue tail
  Element * removeFirst();	// remove and return head elt, or 0 if none
  Element * removeLast();	// remove and return tail elt, or 0 if none
  void clear();			// empty queue
  int isEmpty();		// tell if queue is empty
  int size();			// return number of elements in queue
};

#endif

/****************************************************************************/
