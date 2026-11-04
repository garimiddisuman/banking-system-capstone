#include "CurrentAccount.hpp"

CurrentAccount::CurrentAccount(int accNo, double initialBalance, double overdraftLimit) : Account(accNo, initialBalance), overdraftLimit(overdraftLimit){}

bool CurrentAccount::withdraw(double amount) {
  
  if(amount <= 0 && getBalance() - amount < overdraftLimit) {
    return false;
  }

  setBalance(getBalance() - amount);

  return true;
}