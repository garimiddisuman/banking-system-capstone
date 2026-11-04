#pragma once
#include "Account.hpp"
#include <memory>
#include <vector>

class BankManager{
    private:
    std::vector<std::unique_ptr<Account>> accounts;

    public:
    void AddAccount(std::unique_ptr<Account> account);
};