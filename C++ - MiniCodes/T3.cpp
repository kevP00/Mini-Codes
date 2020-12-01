#include <iostream>
using namespace std;
int main()
{
	int Kashif,Asim,Nasir;

    cout << "Input Ages of 3 Person: "<<endl;
    cin >> Kashif>>Asim>>Nasir;

    if (Kashif<Asim&&Kashif<Nasir)
        cout<< "Kashif is Youngest amoung three of them."<<endl;
    else if (Asim<Kashif&&Asim<Nasir)
        cout<< "Asim is Youngest amoung three of them."<<endl;
	else
        cout<< "Nasir is Youngest amoung three of them.";

    return 0;
}

