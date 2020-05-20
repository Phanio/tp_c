/****************************************************************************
 *
 * $Id: queueDemo.C 2031 2016-09-22 07:14:59Z phil $
 *
 ****************************************************************************/

static char rcsId[] = "@(#) $Id: queueDemo.C 2031 2016-09-22 07:14:59Z phil $";

#include <iostream>
using namespace std;


/***************************************************************************
 * example use of queue STL container
 * output should be
 * empty at start
 * after loop, queue size is 10
 * 0
 * 1
 * ...
 * 8
 * 9
 *
 ***************************************************************************/

#include <queue>


int main() {
  queue <int> s;
  if (s.empty())
    cout << "empty at start\n";
  else
    cerr << "** NOT empty at start!\n";

  for (int i = 0; i<10; i++) {
        s.push(i);
  }

  cout << "after loop, queue size is " << s.size() << endl;
  while (! s.empty()) {
    cout << s.front() << endl;
    s.pop();
  }

  return 0;
}
