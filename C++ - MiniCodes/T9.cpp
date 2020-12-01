#include <iostream>
using namespace std;
int main()
{
	int a,b;

    cout << "Input marks of 2 subjects: "<<endl;
    cin >> a>>b;

    if ( a>=55&&b>45)
        cout<< "The student is passed:";
    else if ( a>=65&&b<45)
        cout<< "The student is allowed to reappear in exam:";
	else 
        cout<< "The student is failed:";

    return 0;
}

