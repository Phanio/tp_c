/****************************************************************************
 *
 * $Id: Map.C 1065 2007-03-29 15:38:54Z phil $
 *
 ****************************************************************************/

static char rcsId[] = "@(#) $Id: Map.C 1065 2007-03-29 15:38:54Z phil $";

#include <iostream>
using namespace std;

/***************************************************************************/

#include "Map.h"

/***************************************************************************
 * return the least key in the collection,
 * or 0 if empty
 ***************************************************************************/
double Map :: min() { 
  node * res = tree.search_least();
  if (!res) return 0;
  return res->key;
}

/***************************************************************************
 * add the corresponding pair.
 * if value is 0, remove an existing pair with this key
 ***************************************************************************/
void Map :: set(double t, Element *value) {
  node *n = tree.search(t);

  if (value && !n) {
    // This variable does not currently exist.  Create a node for it.
    n = new node;
    n->key = t;
    n->value = value;
    tree.insert(n);
    _size++;
  }

  if (value) {
    n->value = value;
  }
  else {
    tree.remove(t);
    delete n;
    _size--;
  }
}

/***************************************************************************
 * return the value associated with this key,
 * or 0 if key not found
 ***************************************************************************/
Element * Map :: get(double t) {
  node *n = tree.search(t);
  return(n ? n->value : 0);
}

/***************************************************************************
 * Dump environment in ascending order of keys.
 ***************************************************************************/
void Map :: dump(void) {
  tree_t::iter it;
  node *n;
  
  it.start_iter_least(tree);
  
  for (n = *it; n; it++, n = *it)
    cout << n->key << " " << n->value
	 <<endl;
}


/***************************************************************************
 * remove a key / value pair if value corresponding to key exists
 ***************************************************************************/
void Map :: remove(double t) { set(t,0); }

/***************************************************************************
 * Clear whole map.
 ***************************************************************************/
void Map :: clear(void) {
  tree_t::iter it;
  node *n;
  
  it.start_iter_least(tree);
  
  for (n = *it; n; n = *it) {
    // Step iterator past node n.
    it++;
    
    // Release node n's resources.
    delete  n->value;
    delete n;
  }
  
  // Make the tree empty by setting root to null value.
  tree.purge();
  _size = 0;
}

/***************************************************************************/
