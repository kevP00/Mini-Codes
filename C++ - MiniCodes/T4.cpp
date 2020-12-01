#include <iostream>
using namespace std;
int main()
{
	float len, w ;

    cout << "Input the length & width: "<<endl;
    cin >> len>>w;
	float area=len*w;
	float perimeter=2*(len+w);
    cout<< "Area of Rec: "<<area<<endl;
    cout<< "Perimeter of Rec: "<<perimeter<<endl;
	
	if (area>perimeter)
        cout<< "Area is Greater.";
    else
        cout<< "Perimeter is Greater.";

    return 0;
}

