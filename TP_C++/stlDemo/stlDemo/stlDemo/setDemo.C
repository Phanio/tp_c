/****************************************************************************
 *
 * $Id: setDemo.C 2031 2016-09-22 07:14:59Z phil $
 *
 ****************************************************************************/

static char rcsId[] = "@(#) $Id: setDemo.C 2031 2016-09-22 07:14:59Z phil $";

#include <iostream>
using namespace std;


/***************************************************************************
 * example use of set STL container.
 * Here, elements will be sorted with default (lexical) order,
 *      then with a reverse lexical order
 * Remember that sets don't allow duplicates wheras multisets do
 *
 * output should be
 * champignac rominet titi zorglub
 * zorglub titi rominet champignac
 *
 ***************************************************************************/

#include <set>
#include <string>

/******************************
 * revLex
 * tool class used to define another order than standard (lexical) one
 ******************************/
class revLex {
public:
  bool operator()(string s1, string s2) {
    return s1>s2;
  }
};

/******************************/

string array1 [] = { "titi", "rominet", "zorglub", "champignac" };

int main ()
{
  // default-ordered set
  set<string> s(array1, array1 + (sizeof(array1)/sizeof(string)));

  // reverse-ordered set
  set<string,revLex> sr(array1, array1 + (sizeof(array1)/sizeof(string)));

  // output sets' elements
  for (set<string>::iterator i = s.begin(); i != s.end(); ++i)
    cout << *i << ' ';
  cout << endl;
  for (set<string>::iterator i = sr.begin(); i != sr.end(); ++i)
    cout << *i << ' ';
  cout << endl;

  return 0;
}
