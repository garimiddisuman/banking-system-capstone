#pragma once
#include "Account.hpp"

class CurrentAccount : public Account
{
private:
  double overdraftLimit;

public:
  CurrentAccount(int accNo, double initialBalance, double overdraftLimit);

  bool withdraw(double amount) override;
};