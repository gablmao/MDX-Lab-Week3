#include <iostream>
#include <cstdlib> //for abs()

using namespace std;

int main()
{
    cout << "Enter two numbers: ";
    double x;
    double y;
    cin >> x >> y;

    double sum =  x + y;
    double sub = x - y;
    double product = x * y;
    double distance = abs(sub);
    double avg = (x + y) / 2;

    cout << "The sum of " << x << " and " << y << " is " << sum << endl;
    cout << "The difference between" << x << " and " << y << " is " << sub << endl;
    cout << "The product of " << x << " and " << y << " is " << product << endl;
    cout << "The distance between " << x << " and " << y << " is " << distance << endl;
    cout << "The mean average of " << x << "and " << y << " is " << avg << endl;

    return 0;
 }