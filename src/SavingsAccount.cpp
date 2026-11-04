#include "SavingsAccount.hpp"
#include <iostream>

SavingsAccount::SavingsAccount(int accNo, double initialBalance, double minBal) : Account(accNo, initialBalance), minimumBalance(minBal) {
};

bool SavingsAccount::withdraw(double amount) {
  
  if(amount <= 0 && getBalance() - amount < minimumBalance) {
    return false;
  }

  setBalance(getBalance() - amount);

  return true;
}