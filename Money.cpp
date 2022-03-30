#include "Money.h"

//Money(int dollars, int cents):dollars(dollars), cents(cents){}
#include <iostream>
using namespace std;


  Money::money(int dollars, int cents){
        dollars = dollars;
        cents = cents;
    }
ostream &operator<<(ostream &os, const Money &money);
