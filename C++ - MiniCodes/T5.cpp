#include <iostream>
using namespace std;
int main()
{
	int x1,y1,x2,y2,x3,y3;

    cout << "Input 1st line coordinates: "<<endl;
    cin >> x1>>y1;
	cout << "Input 2nd line coordinates: "<<endl;
    cin >> x2>>y2;
	cout << "Input 3rd line coordinates: "<<endl;
    cin >> x3>>y3;
	float slope1=(y2-y1)/(x2-x1);
    float slope2=(y3-y2)/(x3-x2);	
    
    if (slope1==slope2)
        cout<<"All lines are straight.";
    else
        cout<< "All lines are not straight.";

    return 0;
}

