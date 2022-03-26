#include "Account.h"
#include "Money.h"

//The constructor takes a money object as input, and sets the balance equal to that money object
Account::Account(Money inputBalance)
{
    balance = inputBalance;
}

void Account::recalculateBalance()
{
    //this for loop goes through all of the deposits in the deposit array and adds it up to the balance using the money object + overload
    for(Money deposit : deposits)
    {
        balance = balance + deposit;
    }
    //this for loop does the same thing for the withdrawals, but with subtraction
    for(Money withdrawal : withdrawals)
    {
        balance = balance - withdrawal;
    }
    //at the end, it sets the needUpdate flag to false
    needUpdate = false;
}

void Account::makeDeposit(Money amt)
{
    //sets the needUpdate flag to true and adds the amount to the deposits array
    needUpdate = true;
    deposits.push_back(amt);
}

void Account::makeWithdrawal(Money amt)
{
    //same as the last one
    needUpdate = true;
    withdrawals.push_back(amt);
}

Money Account::getCurrentBalance()
{
    //checks if it needs to update, then recalculates if so
    if(needUpdate)
        recalculateBalance();
    return balance;
}

//because the << operater requires a friend function, it doesn't use the Account:: thing before the function name
std::ostream& operator<<(std::ostream& output, Account account)
{
    //uses getCurrentBalance() and the size() vector function to print the required values
    std::cout << "Account Details\n--------------------------\nCurrent Balance:" << account.getCurrentBalance() << std::endl;
    std::cout << "--------------------------\nNumber of Deposits: " << account.deposits.size() << "--------------------" << std::endl;
    //This for loop goes through the deposit and prints its position in the vector along with the amount in the money object
    for(int i = 0; i < account.deposits.size(); i++)
    {
        std::cout << "(" << i + 1 << ") " << account.deposits.at(i) << std::endl;
    }
    std::cout << "--------------------------\nNumber of Withdrawals: " << account.withdrawals.size() << "--------------------------" << std::endl;
    //same for this one
    for(int i = 0; i < account.withdrawals.size(); i++)
    {
        std::cout << "(" << i + 1 << ") " << account.withdrawals.at(i) << std::endl;
    } 
}









