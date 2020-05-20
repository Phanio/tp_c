/****************************************************************************
 *
 * $Id: priorityQueueDemo.C 2031 2016-09-22 07:14:59Z phil $
 *
 ****************************************************************************/

static char rcsId[] = "@(#) $Id: priorityQueueDemo.C 2031 2016-09-22 07:14:59Z phil $";

/***************************************************************************
 * example use of priority_queue STL container
 * output should be (decreasing priority for elements):
 * empty at start
 * after loop, priority queue size is 5
 * [t1,10]
 * [def3,4]
 * [def1,4]
 * [def2,4]
 * [t2,3]
 *
 ***************************************************************************/

using namespace std;

#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <functional>

#define NAMELENGTH 100

/******************************
 * class Task: a name and an integer priority
 ******************************/

class Task {
public:
  int _prio;
  string _name;
  Task(char* name, int prio = 4) : _name(name) {
    _prio = prio;
  }
};

// to output a task as "[name,priority]"
ostream& operator<<(ostream& o, Task& t) {
  return o << '[' << t._name << ',' << t._prio << ']';
}



/******************************
 * class compareStack :
 * implements int ()(T&,T&);
 * used to compare two tasks
 ******************************/

class compareTasks {
public:
  int operator() ( Task& t1, Task& t2) {
    return t1._prio < t2._prio;
  }
};

/******************************/


Task a[] = { "def1", "def2", "def3", Task("t1",10), Task("t2",3) };


int main() {

  // define a priority queue containing tasks,
  // implemented with a vector
  // and using a compareTask to store elements at the right place
  priority_queue <Task,vector<Task>,compareTasks> s;

  if (s.empty())
    cout << "empty at start\n";
  else
    cerr << "** NOT empty at start!\n";

  for (int i = 0; i<sizeof(a)/sizeof(Task); i++) {
        s.push(a[i]);
  }

  cout << "after loop, priority queue size is " << s.size() << endl;

  while (! s.empty()) {
    Task t = s.top();
    cout << t<< endl;		// unclear why cout << s.top() won't work
    s.pop();
  }

  return 0;
}
