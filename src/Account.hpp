#pragma once

class Account
{
private:
  int accountNumber;
  double balance;

public:
  Account(int accNum, double amount) : accountNumber(accNum), balance(amount){}

  void deposit(double amount) {
    balance += amount;
  }

  virtual bool withdraw(double amount) = 0;

  virtual ~Account() = default;

  int getAccountNumber() const {
    return accountNumber;
  }

  double getBalance() const {
    return balance;
  }

  void setBalance(double amount) {
    balance = amount;
  }
};