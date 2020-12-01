#include <iostream>
using namespace std;
int main()
{
	int K,A,N;

    cout << "Input Ages of 3 Person: "<<endl;
    cin >> K>>A>>N;

    if (K<A&&K<N)
        cout<< "Kashif is Youngest amoung three of them."<<endl;
    else if (A<K&&A<N)
        cout<< "Asim is Youngest amoung three of them."<<endl;
	else
        cout<< "Nasir is Youngest amoung three of them.";

    return 0;
}

