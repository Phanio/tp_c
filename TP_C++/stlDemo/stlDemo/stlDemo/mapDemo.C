/****************************************************************************
 *
 * $Id: mapDemo.C 2031 2016-09-22 07:14:59Z phil $
 *
 ****************************************************************************/

static char rcsId[] = "@(#) $Id: mapDemo.C 2031 2016-09-22 07:14:59Z phil $";

#include <iostream>
using namespace std;


/***************************************************************************
 * example use of map STL container
 * Remember that maps don't allow duplicates wheras multimaps do
 *
 * output should be
 * map indexed by ints : titi rominet zorglub champignac 
 * map indexed by strings : 1 2 3 4 
 *
 ***************************************************************************/

#include <map>
#include <string>

string array1 [] = { "titi", "rominet", "zorglub", "champignac" };
int array2 [] = { 1, 2, 3, 4 };

int main ()
{
  map<int,string> mi;
  map<string,int> ms;

  for (int i = 0; i < sizeof(array1)/sizeof(string); i++) {
    ms[array1[i]] = array2[i];
    mi[array2[i]] = array1[i];
  }

  cout << "map indexed by ints : ";
  for (int i = 0; i < sizeof(array2)/sizeof(int); i++) 
    cout << mi[array2[i]] << ' ';
  cout << endl;

  cout << "map indexed by strings : ";
  for (int i = 0; i < sizeof(array1)/sizeof(string); i++) 
    cout << ms[array1[i]] << ' ';
  cout << endl;

  return 0;
}
