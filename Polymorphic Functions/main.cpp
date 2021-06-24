#include <iostream>
#include <memory>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std;

int main() {
    
    account joe;
    checking_account c;
    cout << c << endl;
   
    savings_account s {"frank", 5000, 2.6};
    cout << s << endl;
    s.deposit(10000);
    cout << s << endl;
    s.withdraw(10000);
    cout << s << endl;
    
    
    account *ptr = new trust_account("leo", 10000, 2.6);    
    cout << *ptr << endl;
        
        
    account frank{"frank", 5000};         // should not compile
    cout << frank << endl;

    checking_account frank {"frank", 5000};
    cout << frank << endl;
    
    account *trust = new trust_account("james");
    cout << *trust << endl;
    
    account *p1 = new checking_account("larry", 10000);
    account *p2 = new savings_account("moe", 1000);
    account *p3 = new trust_account("curly");
    
    std::vector<account *> accounts {p1,p2,p3};
    
    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 2000);
    
    display(accounts);
    
    delete p1;
    delete p2;
    delete p3;
    return 0;
}

