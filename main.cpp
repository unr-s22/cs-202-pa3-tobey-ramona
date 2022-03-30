//Programming Assignment Three due March 27
//Authors: Ramona Tobey, Brendan Ingersoll

#include <string>
#include <iostream>
#include <cstdio>
#include <iomanip>
#include <vector>
#include "Money.h"
#include "Account.h"
using namespace std;
//need to incorporate balance bool operator<(const Money& rhs) {
//return ______ < rhs._____;
int main(){
  Money account(300, 23);
  cout << "account:" <<account<<endl;
  Account::makeDeposit(Money(200, 0));
  Account::makeDeposit(Money(300, 24));
  Account::makeDeposit(Money(501,22));
  return 0;
}
