// appending to string
#include <iostream>
#include <string>
using namespace std;

int main ()
{
  string str;
  string str2="Writing ";
  string str3="print 10 and then 5 more";

  // used in the same order as described above:
  
  str.append("dots are cool",1,str2.size());          // "dots "
  str.append("here: ");                   // "here: "
 
  cout << str << endl;

  system("pause");
}
  
