#include<iostream>
using namespace std;
int main()
{
 	float a,b,c;

 	cout<<"Enter 3 Values Of triangle"<<endl;
 	cin>>a>>b>>c;

 	if(a==b && b==c && c==a)
 	{
  		cout<<"The Triangle is Equilateral:"<<endl;
 	}
 	else if(a==b || b==c || c==a)
 	{
  		cout<<"The Triangle is Isosceles:"<<endl;
 	}
 	else if(a*a==b*b+c*c ||b*b==c*c+a*a || c*c==a*a+b*b)
 	{
  		cout<<"The Triangle is Right angled:"<<endl;
 	}
 	else
 	{
  		cout<<"The Triangle Scalene angled"<<endl;
 	}	
 return 0;

}

