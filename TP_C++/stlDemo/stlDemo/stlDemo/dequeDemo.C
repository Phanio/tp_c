/****************************************************************************
 *
 * $Id: dequeDemo.C 2031 2016-09-22 07:14:59Z phil $
 *
 ****************************************************************************/

static char rcsId[] = "@(#) $Id: dequeDemo.C 2031 2016-09-22 07:14:59Z phil $";

#include <iostream>
using namespace std;


/***************************************************************************
 * example use of deque STL container
 * output should be
 * d[0] = 1
 * d[1] = 4
 * d[2] = 9
 * d[3] = 16
 *
 * d[0] = 4
 * d[1] = 9
 * d[2] = 25
 *
 ***************************************************************************/

#include <deque>

int main ()
{
  deque< int > d;
  d.push_back (4);		// Add after end.
  d.push_back (9);
  d.push_back (16);
  d.push_front (1);		// Insert at beginning.
  for (int i = 0; i < d.size (); i++)
    cout << "d[" << i << "] = " << d[i] << endl;
  cout << endl;
  d.pop_front ();		// Erase first element.
  d[2] = 25;			// Replace last element.
  for (int i = 0; i < d.size (); i++)
    cout << "d[" << i << "] = " << d[i] << endl;
  return 0;
}
