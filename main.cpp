//Programming Assignment Three due March 27
//Authors: Ramona Tobey, Brendan Ingersoll

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
  cout << account <<endl;
  Account account(account);
  Money.deposit account(200, 00);
  Money.deposit account(300, 24);
  Money.deposit account(501, 22);
  cout << account <<endl;
  Money.withdrawl account(300, 10);
  Money.withdrawl account(201, 34);
  cout << account <<endl;
  return 0;
}
//Money m1(10), m2(5); cout<<m1 >=m2; // true
