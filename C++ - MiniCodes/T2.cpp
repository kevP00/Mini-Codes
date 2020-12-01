#include <iostream>
using namespace std;
int main()
{
	int x, revnum = 0, rem;

    cout << "Input an integer: ";
    cin >> x;

    while(x != 0)
    {
        rem = x%10;
        revnum = revnum*10 + rem;
        x /= 10;
    }

    cout << "In Reversed Form: " << revnum;
    
    cout<<endl;
    cout << "Checking Equality Now... ";
    cout<<endl;
    if(x==revnum)
    	cout << "Both num are Equal...";
    else
    	cout << "Both num are Different: ";

    return 0;
}

