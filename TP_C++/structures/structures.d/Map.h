/****************************************************************************
 *
 * $Id: Map.h 1065 2007-03-29 15:38:54Z phil $
 *
 ****************************************************************************/

#ifndef __MAP
#define __MAP

/*******************************
 * class role: simple (non-template) map implementation
 *
 * Use of n AVL to implement a map (1 key <-> 1 value).
 * the structure is permanently sorted by ascending order of the key. 
 * The key is supposed to be NUMERICAL (and positive)
 * 
 * Usage:
 * 1/ Subclass the "Element" class, redifining the printOn method
 *     if necessary
 * 2/ Use method "set" to add, replace or delete an element.
 *
 *******************************/

#include <string.h>
#include <iostream>
using namespace std;

#include "avl_tree.h"
#include "Element.h"

/**********************************************************************
 * the MAP class : skip to PUBLIC PART ;-)
 **********************************************************************/
class Map {
 protected:

  struct node {
    // Child pointers.
    node *gt, *lt;
    
    char balance;
    
    double key;
    
    Element * value;
  };
  
  // Abstractor class for avl_tree template.
  struct abstr {
    typedef node *handle;
    
    typedef double key;
    
    typedef unsigned size;
    
    static handle get_less(handle h, bool access) { return(h->lt); }
    static void set_less(handle h, handle lh) { h->lt = lh; }
    static handle get_greater(handle h, bool access) { return(h->gt); }
    static void set_greater(handle h, handle gh) { h->gt = gh; }
    static int get_balance_factor(handle h) { 
      return((signed char) (h->balance)); 
    }
    static void set_balance_factor(handle h, int bf) { h->balance = bf; }
    static int compare_key_node(key k, handle h){ 
      if (k<h->key) return -1;
      if (k == h->key) return 0;
      return 1;
    }
    static int compare_node_node(handle h1, handle h2) { 
      return compare_key_node(h1->key, h2);
    }
    static handle null(void) { return(0); }
    
    // Nodes are not stored on secondary storage, so this should
    // always return false.
    static bool read_error(void) { return(false); }
  };
  
  typedef abstract_container::avl_tree<abstr> tree_t;

  // the AVL that implements the map
  tree_t tree;

  // number of elts in tree
  int _size;
  
  /*************************************************
   * PUBLIC PART: Here is what you need to use a map
   *************************************************/
 public:

  // map is initially empty  
  Map() :tree() { _size = 0; }

  // return the least key in the collection
  // or O if empty
  double min();

  // return the number of elts in map
  int size() { return _size; }
  
  // add the corresponding pair.
  // if value is 0, remove an existing pair with this key
  void set(double k, Element *value);
  
  // return the value associated with this key,
  // or 0 if key not found
  Element * get(double t);
  
  // Dump environment in ascending order by key.
  void dump(void);
  
  // remove an existing key
  void remove(double t);
  
  // Clear the collection.
  void clear(void);
  
};

#endif

/****************************************************************************/
