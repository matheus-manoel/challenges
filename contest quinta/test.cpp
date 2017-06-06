#include <iostream>
#include <vector>
#include <stdio.h>


int main ()
{ int i;
  std::vector<int> myvector;

  // set some values (from 1 to 10)
  for (i=1; i<=10; i++) myvector.push_back(i);

  // erase the 6th element
  myvector.erase (myvector.begin()+5);


  for(i=0; i<9; i++)
    printf("%d ", myvector[i]);

  return 0;
}