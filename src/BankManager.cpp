#include <memory>
#include <iostream>

#include "BankManager.hpp"
#include "Account.hpp"
#include <vector>

void BankManager::AddAccount(std::unique_ptr<Account> account)
{
    if(!account){
        std::cout << "Invalid account details received";
    }

    accounts.push_back(std::move(account));

    std::cout << "The Account was aadded successfully" << std::endl;
}