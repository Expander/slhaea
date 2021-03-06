#include <fstream>
#include <iostream>
#include <slhaea.h>

using namespace std;
using namespace SLHAea;

int main()
{
  ifstream ifs("slha1.txt");
  Coll input(ifs);

  for (Block::const_iterator line = input["SMINPUTS"].begin();
       line != input["SMINPUTS"].end(); ++line)
  {
    if (!line->is_data_line()) continue;

    cout << "index: "   << (*line)[0] << ",  "
         << "value: "   << (*line)[1] << ",  "
         << "comment: " << (*line)[2] << endl;
  }
}
