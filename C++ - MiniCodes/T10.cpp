#include <iostream>
using namespace std;
int main()
{
	int x,y,z;

    cout << "Input 3 num: "<<endl;
    cin >> x>>y>>z;

    if (x>y&&x>z)
        cout<< "1st num is greatest: "<<endl;
    else if (y>x&&y>z)
        cout<< "2nd num is greatest: "<<endl;
	else
        cout<< "3rd num is greatest: ";

    return 0;
}

