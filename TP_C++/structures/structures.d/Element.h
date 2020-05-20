/****************************************************************************
 *
 * $Id: Element.h 1984 2015-03-30 11:58:51Z phil $
 *
 ****************************************************************************/

#ifndef __ELEMENT
#define __ELEMENT

#include <iostream>
using namespace std;


/**********************************************************************
 * class role
 *
 * base class for elements : TO BE SUBCLASSED in applications
 **********************************************************************/

class Element {
 public:
  virtual ostream& printOn(ostream& aStream) {
    return aStream << "Element@" << (unsigned long) this;
  }
};

inline ostream& operator << (ostream& o, Element* e) {
  return e-> printOn(o);
}


#endif

/****************************************************************************/
