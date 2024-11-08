// simple interest calculation with default rate of 15%
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

// function for simple interest calculation

float simpleInterest(float p, int t, float r=0.15)
{
    return (p * r * t) / 100;
}

int main()
{
    float p;
    cout << "Enter principal amount: ";
    cin >> p;
    int t;
    cout << "Enter time duration: ";
    cin >> t;

    // function call with default value
    float result = simpleInterest(p, t);
    cout << "Simple interest based on 15% rate: " << result << endl;

    float r;
    cout << "\nEnter the rate of interest: ";
    cin >> r;
    // function call without default value
    float result2 = simpleInterest(p,t,r);
    cout << "Simple interest based on " << r*100 << " % rate is: " << result2 << endl;
    return 0;
}