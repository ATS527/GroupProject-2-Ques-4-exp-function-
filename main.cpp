#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double x;
  double exponent;
	double fact {1};	
	char choice;
	do
	{
    cout << "Enter the value of x : ";
    cin >> x;
    cout << "\nValue of e^x using exp() built in function : " << exp(x) << endl;

    for(int i = 1; i <= 100; i++) {
      fact *= i;
      exponent = exponent + pow(x, i) / fact;
    }
    cout << "\nValue of e^x through equation = " << exponent + 1 << endl;

    cout << "\nDo you want to continue : ('Y' or 'N') " << endl;
    cin >> choice; 
  }while(choice == 'y' || choice == 'Y');
  cout << "\nThank You!" << endl;
	cout << endl;
	return 0;
}