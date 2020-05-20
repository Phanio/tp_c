//////////////////////////////////////////////////////////////////////
/**
 * @file reverse.C
 * Test for reverse algorithm.
 *
 * $Id: reverse.C 2031 2016-09-22 07:14:59Z phil $
 *
 * We use a vector to illustrate how the reverse algorithm behaves, operating
 * on two iterators.
 * We then apply the same algorithm to an "ordinary" array to demonstrate
 * the use of pointers as iterators
 *
 */
//////////////////////////////////////////////////////////////////////

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// test for reverse algorithm
//////////////////////////////////////////////////////////////////////
/**
 * test for reverse algorithm
 *******************************/
int main () {
  vector<int> myvector;
  int a[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

  // set some values:
  for (int i=0; i<10; ++i) myvector.push_back(i); // 0 1 2 3 4 5 6 7 8 9
  cout << "initial collections contain: ";
  for (int i=0; i<10; ++i)
    cout << " " << a[i];
  cout << endl;

  cout << "reversing the collections...\n";

  // reverse the vector
  reverse(myvector.begin(),myvector.end());       // 9 8 7 6 5 4 3 2 1 0
  // similarly, reverse the array
  reverse(a,a+10);

  // print out vector content using an iterator:
  cout << "myvector contains (using iterator):";
  for (vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it)
    cout << " " << *it;
  cout << endl;

  // print out vector content using []
  cout << "myvector contains (using []:";
  for (int i=0; i<10; ++i)
    cout << " " << myvector[i];
  cout << endl;
  cout << "array a contains:";
  for (int i=0; i<10; ++i)
    cout << " " << a[i];
  cout << endl;

  return 0;
}

//////////////////////////////////////////////////////////////////////

