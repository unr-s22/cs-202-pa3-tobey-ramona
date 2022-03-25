#ifndef MONEY_H
#define MONEY_H
#include <iostream>
using namespace std;

class Money{
  int dollars;
  int cents;

public:
  Money();
  Money(int dollars, int cents):dollars(dollars), cents(cents){}

};

#endif
