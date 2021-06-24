#include "Account.h"

Account::Account(std::string name, double balance)  // Constructor
    : name{name}, balance{balance} {
}

bool Account::deposit(double amount) {  // Class method
    if (amount < 0) 
        return false;
    else {
        balance += amount;
        return true;
    }
}

bool Account::withdraw(double amount) { // // Class method
    if (balance-amount >=0) {
        balance-=amount;
        return true;
    } else
        return false;
}

std::ostream &operator<<(std::ostream &os, const Account &account) {    // Overloaded output operator
    os << "[Account: " << account.name << ": " << account.balance << "]";
    return os;
}
