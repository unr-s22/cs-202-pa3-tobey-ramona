#include "Money.h"

Money(int dollars, int cents):dollars(dollars), cents(cents){}
#include <iostream>
using namespace std;

class Money
{
    int dollars, cents;
public:
    Money(int dollars, int cents){
        dollars = dollars;
        cents = cents;
    }
    friend ostream& operator<<(ostream& os, const Money& money);

    int getDollars(){
      return dollars;
    }
    int getCents(){
      return cents;
    }
};

ostream& operator<<(ostream& os, const Money& money)
{
    os << money.dollars << money.cents;
    return os;
}
