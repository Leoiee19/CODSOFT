
#include <iostream>
using namespace std;
int main(){
    float n1, n2;
char k;
cout<<"****************SIMPLE CALCULATOR*************"<<endl;

cout<<"Enter First number: ";
cin >>n1;
cout<<"Enter Second number: ";
cin>> n2;
cout<< "ENTER A ARITHMETIC OPERATION TO PERFORM:\n + FOR ADDITION\n- FOR SUBRACTION\n* FOR MULTIPLICATION\n/ FOR DIVISION ";
cin >>k;

switch (k) { 
	case '+':
	cout << "The Result is "<<n1+n2;
	break;
case '-':
	cout <<"The Result is "<< n1-n2;
    break;
case '*':
	cout <<"The Result is "<< n1*n2;
	break;
case '/':
	cout <<"The Result is "<< n1/n2;
	break;

default:
	cout << "invalid";}
	return 0;
}
