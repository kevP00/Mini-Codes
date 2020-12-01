#include <iostream>
using namespace std;
int main()
{
	int Y;

    cout << "Input a year: "; cin >> Y;

    if (Y % 4 == 0 || Y % 100 == 0 ||Y % 400 == 0)
    {
        cout << Y << " is a leap year.";
         
	}
    else
        cout << Y << " is not a leap year.";

    return 0;
}

