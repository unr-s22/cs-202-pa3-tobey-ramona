#include "Money.h"

//Money(int dollars, int cents):dollars(dollars), cents(cents){}
#include <iostream>
using namespace std;

Money& operator+=(const Money& rhs) { dollars += dollars.rhs;
  cents += rhs.cents;}
  Money::money(int dollars, int cents){
        dollars = dollars;
        cents = cents;
    }
ostream &operator<<(ostream &os, const Money &money);
bool Money::operator+ (const Money& account){
  return dollars + account.dollars;
  return cents + account.cents;
}
