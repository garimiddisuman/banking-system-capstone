
cmake_minimum_required(VERSION 3.10)
project(BankManagementApp)


set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


add_executable(bankApp 
  main.cpp 
  src/SavingsAccount.cpp 
  src/BankManager.cpp 
  src/CurrentAccount.cpp
  )