#include "std_lib_facilities.h"
#include <iostream>

void roots(float a,float b,float c) 
{
  float discriminate;
  float root1;
  float root2;
  float realRoot;
  float imaginaryRoot;

  discriminate = (b*b) - (4 * a * c);

  if(discriminate == 0)
  {

      root1 = (-b + sqrt(discriminate))/(2*a);
      cout << "This equation has real and same roots\n";
      cout << "The roots are: "<<root1<<endl;
  }
  else if(discriminate > 0)
  {
      root1 = (-b + sqrt(discriminate))/(2*a);
      root2 = (-b - sqrt(discriminate))/(2*a);
      cout << "This equation has real and different roots\n";
      cout << "The roots are: "<<root1<<" and "<<root2<<endl;
  }
  else
  {
      realRoot = (-b/(2*a));
      imaginaryRoot = (sqrt(-discriminate)/(2*a));
      cout << "This equation has no real roots\n";
      cout << "The imaginary roots are: "<<realRoot<<"+"<<imaginaryRoot<<"i";
      cout << " and "<<realRoot<<"-"<<imaginaryRoot<<"i"<<endl;
  }
}

int main()

{
	string operation;
	float a = 0;	
	float b = 0;
    float c = 0;	
	cout << "Please enter a b and c: ";
	
	while(cin >> a >> b >> c)
     {
	    roots(a,b,c);
        cout << "Please enter a b and c: ";
	}
}


