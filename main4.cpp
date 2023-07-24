#include <iostream>
#include <string>
using namespace std;

int main ()
{
  string str="We think in generalities, but we live in details.";
                            // (quoting Alfred N. Whitehead)

 string str2 = str.substr (9,2);     // "think"
  // get from "live" to the end

cout << str2 << endl;
  return 0;
}