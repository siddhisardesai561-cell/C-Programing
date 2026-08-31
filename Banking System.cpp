#include <iostream>
#include <iomanip>
using namespace std;

// Saving Account Class
class SavingAccount {
private:
    string accHolderName;
    int accNo;
    double balance;
    double intRate;

public:
    // Parameterized Constructor
    SavingAccount(string name, int no, double bal, double rate) {
        accHolderName = name;
        accNo = no;
        balance = bal;
        intRate = rate;
    }

    // Deposit
    void deposit(double amount) {
        balance += amount;
        cout << "Amount deposited: Rs. " << amount << endl;
    }

    // Withdrawal
    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Amount withdrawn: Rs. " << amount << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    // Calculate Interest
    void applyInterest() {
        double interest = balance * intRate / 100;
        balance += interest;

        cout << "Interest added: Rs. " << interest << endl;
    }

    // Account Statement
    void display() {
        cout << "\n----- Saving Account Statement -----" << endl;
        cout << "Account Holder : " << accHolderName << endl;
        cout << "Account Number : " << accNo << endl;
        cout << "Balance        : Rs. " << fixed << setprecision(2)
             << balance << endl;
        cout << "Interest Rate  : " << intRate << "%" << endl;
    }
};


// Checking Account Class
class CheckingAccount {
private:
    string accHolderName;
    int accNo;
    double balance;
    double transactionFee;

public:
    // Parameterized Constructor
    CheckingAccount(string name, int no, double bal, double fee) {
        accHolderName = name;
        accNo = no;
        balance = bal;
        transactionFee = fee;
    }

    // Deposit
    void deposit(double amount) {
        balance += amount;
        balance -= transactionFee;

        cout << "Amount deposited: Rs. " << amount << endl;
        cout << "Transaction fee: Rs. " << transactionFee << endl;
    }

    // Withdrawal
    void withdraw(double amount) {
        double total = amount + transactionFee;

        if (total <= balance) {
            balance -= total;

            cout << "Amount withdrawn: Rs. " << amount << endl;
            cout << "Transaction fee: Rs. " << transactionFee << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    // Account Statement
    void display() {
        cout << "\n----- Checking Account Statement -----" << endl;
        cout << "Account Holder   : " << accHolderName << endl;
        cout << "Account Number   : " << accNo << endl;
        cout << "Balance          : Rs. " << fixed << setprecision(2)
             << balance << endl;
        cout << "Transaction Fee  : Rs. " << transactionFee << endl;
    }
};


// Main Function
int main() {

    // Object 1 - Saving Account
    SavingAccount saving("Siddhi", 101, 10000, 5);

    cout << "SAVING ACCOUNT OPERATIONS\n";

    saving.deposit(2000);
    saving.withdraw(1000);
    saving.applyInterest();
    saving.display();


    // Object 2 - Checking Account
    CheckingAccount checking("Siddhi", 102, 15000, 50);

    cout << "\n\nCHECKING ACCOUNT OPERATIONS\n";

    checking.deposit(3000);
    checking.withdraw(2000);
    checking.display();

    return 0;
}