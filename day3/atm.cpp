// ATM implementation in CPP. Menu driven using switch case

#include <iostream>
using namespace std;

class Atm
{
private:
    // private data
    unsigned long Account_Number = 123456789;
    long Account_Balance = 10000;
    // private methods
    void MiniStatement();
    void Withdrawal(int amount);
    void transfer(int amount);

public:
    void getPin();
    void showMenu();
};

// method definitions

void Atm::getPin()
{
    int pin;
    cout << "Enter pin: ";
    cin >> pin;

    // pin valid if given pin is 4 digit

    if (pin < 1000 || pin > 9999)
    {
        cout << "Please enter the correct pin!" << endl;
    }
    else
    {
        cout << "Pin accepted. " << endl;
        showMenu();
    }
}

void Atm::MiniStatement()
{
    cout << "Account Number: " << Account_Number << endl;
    cout << "Current Balance: " << Account_Balance << endl;
}

void Atm::Withdrawal(int amount)
{
    if (amount > Account_Balance)
    {
        cout << "Insufficient balance!" << endl
             << "Transaction faied..." << endl;
    }
    else
    {
        Account_Balance -= amount;
        cout << "Withdrawal successful. New balance: " << Account_Balance << endl;
    }
}

void Atm::transfer(int amount)
{
    if (amount > Account_Balance)
    {
        cout << "Insufficient balance!" << endl;
        return;
    }
    else
    {
        Account_Balance -= amount;
        cout << "Transfer successful. " << amount << " transferred. New balance: " << Account_Balance << endl;
    }
}

void Atm::showMenu()
{
    int choice;
    do
    {
        cout << "\nATM Menu:\n";
        cout << "1. Mini Statement\n";
        cout << "2. Withdrawal\n";
        cout << "3. Transfer\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            MiniStatement();
            break;
        case 2:
        {
            int amount;
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            Withdrawal(amount);
            break;
        }
        case 3:
        {
            int amount;
            cout << "Enter amount to transfer: ";
            cin >> amount;
            transfer(amount);
            break;
        }
        case 4:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 4);
}
// menu driver code
int main()
{
    Atm myatm; // instantiation of the Atm class
    myatm.getPin();

    return 0;
}
