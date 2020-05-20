/****************************************************************************
 *
 * $Id: Queue.C 1061 2007-03-25 12:08:01Z phil $
 *
 ****************************************************************************/

static char rcsId[] = "@(#) $Id: Queue.C 1061 2007-03-25 12:08:01Z phil $";

#include "Queue.h"


/***************************************************************************
 * create an empty queue
 ***************************************************************************/
Queue :: Queue() {
  _size = 0;
  _first = _last = 0;
}


/***************************************************************************
 * return 0 if queue is empty
 ***************************************************************************/
Element * Queue :: first(){
  if (_first)return _first->_value;
  return 0;
}


/***************************************************************************
 * return 0 if queue is empty
 ***************************************************************************/
Element * Queue :: last(){
  if (_last)return _last->_value;
  return 0;
}


/***************************************************************************
 * add e as queue head
 ***************************************************************************/
void Queue :: addFirst(Element* e){
  _first = new QueueNode(e,_first);
  if (!_last) _last = _first;
  else _first->_next->_prev = _first;
  _size++;
}


/***************************************************************************
 * add e as queue tail
 ***************************************************************************/
void Queue :: addLast(Element* e){
  _last = new QueueNode(e,0,_last);
  if (!_first) _first = _last;
  else _last->_prev->_next = _last;
  _size++;
}


/***************************************************************************
 * remove and return head elt, or 0 if none
 ***************************************************************************/
Element * Queue :: removeFirst(){
  if (!_first) return 0;
  Element* res = _first->_value;
  QueueNode * toDel = _first;
  _first = _first->_next;
  delete toDel;
  if (!_first) _last = 0;
  else  _first->_prev = 0;
  _size--;
  return res;
}


/***************************************************************************
 * remove and return tail elt, or 0 if none
 ***************************************************************************/
Element * Queue :: removeLast(){
  if (!_last) return 0;
  Element * res = _last->_value;
  QueueNode * toDel = _last;
  _last = _last->_prev;
  delete toDel;
  if (!_last) _first = 0;
  else _last->_next=0;
  _size--;
  return res;
}


/***************************************************************************
 * empty queue
 ***************************************************************************/
void Queue :: clear(){
  _last = _first;
  while (_first) {
    _last=_first->_next;
    delete _first;
    _first=_last;
  }
  _size=0;
}


/***************************************************************************
 * tell if queue is empty
 ***************************************************************************/
int Queue :: isEmpty(){
  return _size == 0;
}


/***************************************************************************
 * return number of elements in queue
 ***************************************************************************/
int Queue :: size(){
  return _size;
}

/***************************************************************************/
