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
  Money& operator+=(const Money& rhs) { dollars += dollars.rhs;
    cents += rhs.cents;}
};

#endif
