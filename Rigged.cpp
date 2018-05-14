#include "Rigged.h"

void Rigged::enterName( string name )
{
  listOfNames.push_back(name);
}

string Rigged::winner()
{
  unsigned int last = listOfNames.size() - 1;

  return listOfNames[last];
}
