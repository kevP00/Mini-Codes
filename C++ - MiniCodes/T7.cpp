#include <iostream>
using namespace std;
int main()
{
	float h,cc,s;

    cout << "Input hardness & Carbon Content & T-Strength: "<<endl;
    cin >> h>>cc>>s;

    if (h>=50 && cc<0.7 && s>5600 )
        cout<< "Grade: 10";
    else if (h>=50 && cc<0.7 && !(s>5600) )
        cout<< "Grade: 9";
	else if (!(h>=50) && cc<0.7 && s>5600 )
        cout<< "Grade: 8";
    else if (h>=50 && cc<0.7 && !(s>5600) )
        cout<< "Grade: 7";    
	else if (h>=50 && !(cc<0.7) && !(s>5600) )
        cout<< "Grade: 6";
	else if (!(h>=50) && cc<0.7 && !(s>5600) )
        cout<< "Grade: 6";
    else if (!(h>=50) && !(cc<0.7) && s>5600)
        cout<< "Grade: 6";    
	else
        cout<< "Grade:5";

    return 0;
}

