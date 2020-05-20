/****************************************************************************
 *
 * $Id: vectorDemo.C 2031 2016-09-22 07:14:59Z phil $
 *
 ****************************************************************************/

static char rcsId[] = "@(#) $Id: vectorDemo.C 2031 2016-09-22 07:14:59Z phil $";

#include <iostream>
using namespace std;


/***************************************************************************
 * example use of vector STL container
 * output should be:
 * v1 = 32.1 40.5 
 * v2 = 3.56 
 * v1 = 3.56 
 * v2 = 32.1 40.5 
 * v2 = 3.56 
 *
 ***************************************************************************/

#include <vector>

using namespace std;

void print (vector < double >& vector_)
{
  for (int i = 0; i < vector_.size (); i++)
    cout << vector_[i] << " ";
  cout << endl;
}

int main ()
{
  vector < double > v1;		// Empty vector of doubles.
  v1.push_back (32.1);
  v1.push_back (40.5);
  vector< double > v2;		// Another empty vector of doubles.
  v2.push_back (3.56);
  cout << "v1 = ";
  print (v1);
  cout << "v2 = ";
  print (v2);
  v1.swap (v2);			// Swap the vector's contents.
  cout << "v1 = ";
  print (v1);
  cout << "v2 = ";
  print (v2);
  v2 = v1;			// Assign one vector to another.
  cout << "v2 = ";
  print (v2);
  return 0;
}

