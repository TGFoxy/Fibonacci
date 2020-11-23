#include <iostream>
#include <cmath>

using namespace std;

double first, second, top, ans, term;
double a = 1 + sqrt(5);
double b = 1 - sqrt(5);

int main()
{
    cout << "Please enter what term you wish to find." << endl;
    cin >> term;

    first = (pow((a / 2), term));
    second = (pow((b / 2), term));
    top = first - second;
    ans = top / sqrt(5);

    cout << "The " << term << " term is " << ans << endl;
}

