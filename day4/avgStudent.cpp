#include <iostream>

using namespace std;

class StudentMarks
{
private:
    float sectionA[5]; // Array to store marks for section A
    float sectionB[5]; // Array to store marks for section B

public:
    // Function to input marks for section A
    void inputMarksSectionA()
    {
        cout << "Enter marks for 5 students of Section A:\n";
        for (int i = 0; i < 5; i++)
        {
            cout << "Student " << i + 1 << ": ";
            cin >> sectionA[i];
        }
    }

    // Function to input marks for section B
    void inputMarksSectionB()
    {
        cout << "Enter marks for 5 students of Section B:\n";
        for (int i = 0; i < 5; i++)
        {
            cout << "Student " << i + 1 << ": ";
            cin >> sectionB[i];
        }
    }

    // Function to calculate the average marks of section A
    float calculateAverageSectionA()
    {
        float sum = 0;
        for (int i = 0; i < 5; i++)
        {
            sum += sectionA[i];
        }
        return sum / 5;
    }

    // Function to calculate the average marks of section B
    float calculateAverageSectionB()
    {
        float sum = 0;
        for (int i = 0; i < 5; i++)
        {
            sum += sectionB[i];
        }
        return sum / 5;
    }

    // Function to calculate the overall average marks of all students
    float calculateOverallAverage()
    {
        float sum = 0;
        for (int i = 0; i < 5; i++)
        {
            sum += sectionA[i] + sectionB[i];
        }
        return sum / 10;
    }
};

int main()
{
    StudentMarks sm;

    // Input marks for both sections
    sm.inputMarksSectionA();
    sm.inputMarksSectionB();

    // Calculate and display the averages
    cout << "\nAverage marks of Section A: " << sm.calculateAverageSectionA() << endl;
    cout << "Average marks of Section B: " << sm.calculateAverageSectionB() << endl;
    cout << "Overall average marks: " << sm.calculateOverallAverage() << endl;

    return 0;
}
