#ifndef _RIGGED_H_
#define _RIGGED_H_

#include <string>
#include <vector>
using namespace std;

class Rigged
{
  public:
    string winner();
    void enterName( string name );
  private:
    vector<string> listOfNames;
};

#endif
