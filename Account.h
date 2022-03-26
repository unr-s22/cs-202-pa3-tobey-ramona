#ifndef ACCOUNT_H
#define ACCOUNT_H
#include "Money.h"
#include <iostream>
#include <vector>

class Account
{
private:
    Money balance; // Money object that stores the total balance of the object
    bool needUpdate = false; // internal flag that is set to true every time something is deposited or withdrawn from the account
    std::vector<Money> withdrawals; // array of withdrawals from the account
    std::vector<Money> deposits; // array of deposits to the account
    void recalculateBalance(); // used whenever needUpdate is set to true, recalculates the total balance by parsing through both arrays. it also sets needUpdate to false
public:
    Account(Money inputBalance){} // constructor that takes the initial money values and assigns them to the balance object
    void makeDeposit(Money amt); // takes a money object and adds it to the deposits array. it also sets needUpdate to true.
    void makeWithdrawal(Money amt); // takes a money object and adds it to the withdrawals array. it also sets needUpdate to true.
    friend std::ostream& operator<<(std::ostream& output, Account account); // overloads << for account objects. makes it display a ton of data
    Money getCurrentBalance(); // checks for needUpdate and calls recalculateBalance if needed. returns total money.
};



#endif