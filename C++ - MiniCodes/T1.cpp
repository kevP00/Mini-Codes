#include <iostream>
using namespace std;
int main()
{
	int check;

    cout << "Input the Number: ";
    cin >> check;

    if ( check % 2 == 0)
        cout<< "The given num is even:";
    else
        cout<< "The given num is odd:";

    return 0;
}

