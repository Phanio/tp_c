/****************************************************************************
 *
 * $Id: stackDemo.C 2031 2016-09-22 07:14:59Z phil $
 *
 ****************************************************************************/

static char rcsId[] = "@(#) $Id: stackDemo.C 2031 2016-09-22 07:14:59Z phil $";

#include <iostream>
using namespace std;


/***************************************************************************
 * example use of stack STL container
 * output should be
 * empty at start
 * after loop, stack size is 10
 * 9
 * 8
 * ...
 * 1
 * 0
 *
 ***************************************************************************/

#include <stack>


int main() {
  stack <int> s;
  if (s.empty())
    cout << "empty at start\n";
  else
    cerr << "** NOT empty at start!\n";

  for (int i = 0; i<10; i++) {
        s.push(i);
  }

  cout << "after loop, stack size is " << s.size() << endl;
  while (! s.empty()) {
    cout << s.top() << endl;
    s.pop();
  }

  return 0;
}
