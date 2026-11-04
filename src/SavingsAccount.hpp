#pragma once
#include "Account.hpp"

class SavingsAccount : public Account
{
private:
  double minimumBalance;

public:
  SavingsAccount(int accNo, double initialBalance, double minBal);

  bool withdraw(double amount) override;
};