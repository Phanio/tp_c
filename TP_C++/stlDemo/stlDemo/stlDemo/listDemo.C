/****************************************************************************
 *
 * $Id: listDemo.C 2031 2016-09-22 07:14:59Z phil $
 *
 ****************************************************************************/

static char rcsId[] = "@(#) $Id: listDemo.C 2031 2016-09-22 07:14:59Z phil $";

#include <iostream>
using namespace std;


/***************************************************************************
 * example use of list STL container
 * output should be
 * 1
 * 4
 * 9
 * 16
 * 36
 *
 ***************************************************************************/

#include <list>

int array1 [] = { 9, 16, 36 };
int array2 [] = { 1, 4 };

int main ()
{
  list< int > l1 (array1, array1 + 3);
  list< int > l2 (array2, array2 + 2);
  list< int >::iterator i1 = l1.begin ();
  l1.splice (i1, l2);
  list< int >::iterator i2 = l1.begin ();
  while (i2 != l1.end ())
    cout << *i2++ << endl;
  return 0;
}
