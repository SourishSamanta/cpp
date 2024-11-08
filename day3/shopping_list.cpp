// shopping list implementation in a CPP class. Menu driven using switch case.

#include <iostream>
#define MAX 10

using namespace std;

class Shopping
{
private:
    int itemCode[MAX];
    float itemPrice[MAX];
    int counter;

public:
    void count()
    {
        counter = 0;
    }
    void getItem();
    void displaySum();
    void itemRemove(int a);
    void Display();
};

void Shopping::getItem()
{
    cout << "Enter item code: " << endl;
    cin >> itemCode[counter];

    cout << "Enter item price: " << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shopping::itemRemove(int a)
{

    for (int i = 0; i < counter; i++)
    {
        if (itemCode[i] == a)
        {
            itemPrice[i] = 0;
        }
    }
}

void Shopping::displaySum()
{
    float sum = 0;
    for (int i = 0; i < counter; i++)
    {
        sum += itemPrice[i];
    }

    cout << "\n Total price of items in the list: " << sum << endl;
}

void Shopping::Display()
{
    cout << "Here is your shopping list: " << endl;
    cout << "\nItem code: \t\t\t Price:" << endl;
    for (int i = 0; i < counter; i++)
    {
        cout << "\n"
             << itemCode[i];
        cout << "\t\t\t\t " << itemPrice[i];
    }
}

int main()
{
    Shopping list;
    list.count();
    cout << "Welcome to your shopping list!" << endl;
    cout << "Enter the number for your desired operation: " << endl;
    int x;
    do
    {
        cout << "\n1. Add items." << endl;
        cout << "\n2. See total value of the list." << endl;
        cout << "\n3. Remove an item" << endl;
        cout << "\n4. See the full list." << endl;
        cout << "\n5. Exit program." << endl;
        cout << "\nWhat would you like to do? : ";
        cin >> x;

        switch (x)
        {
        case 1:
        {
            list.getItem();
            break;
        }
        case 2:
        {
            list.displaySum();
            break;
        }
        case 3:
        {
            int a;
            cout << "Enter item code to remove from the list: ";
            cin >> a;
            list.itemRemove(a);
            break;
        }
        case 4:
        {
            list.Display();
            break;
        }
        case 5:
        {
            cout << "Exiting the program..." << endl;
            break;
        }

        default:
        {
            cout << "Please enter valid choice!!" << endl;
            break;
        }
        }
    } while (x != 5);

    return 0;
}