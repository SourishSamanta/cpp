#include <iostream>

using namespace std;

class Employee
{
private:
    string name;
    int id;
    string department;

    // Static variable to count the number of employees
    static int employeeCount;

public:
    // Method to input employee details
    void inputEmployeeDetails()
    {
        cout << "Enter Employee ID: ";
        cin >> id;
        cout << "Enter Employee Name: ";
        cin.ignore();       // To handle the newline character left by cin
        getline(cin, name); // Using getline to capture full names
        cout << "Enter Employee Department: ";
        getline(cin, department);

        employeeCount++; // Increment employee count when a new employee is added
    }

    // Static function to return the number of employees
    static int getEmployeeCount()
    {
        return employeeCount;
    }

    // Function to display employee details
    void displayDetails() const
    {
        cout << "Employee ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
        cout << "--------------------------" << endl;
    }
};

// Initialize static variable outside the class
int Employee::employeeCount = 0;

int main()
{
    Employee employees[10]; // Array to store 10 employee objects
    int numEmployees;

    // Input the number of employees
    cout << "Enter the number of employees: ";
    cin >> numEmployees;

    // Input details for each employee
    for (int i = 0; i < numEmployees; i++)
    {
        cout << "\nEntering details for employee " << i + 1 << ":\n";
        employees[i].inputEmployeeDetails();
    }

    // Display details of each employee
    cout << "\nEmployee Details:\n";
    for (int i = 0; i < numEmployees; i++)
    {
        employees[i].displayDetails();
    }

    // Show the total number of employees
    cout << "Total number of employees: " << Employee::getEmployeeCount() << endl;

    return 0;
}
