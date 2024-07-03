
#include <iostream>
using namespace std;

int main(){
    
float n1, n2;
char operation;
cout<<"****************SIMPLE CALCULATOR*************"<<endl;

cout<<"Enter First number: ";
cin >>n1;
cout<<"Enter Second number: ";
cin>> n2;
cout<< "ENTER A ARITHMETIC OPERATION TO PERFORM: ";
cin >>operation;

switch (operation) {
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
	cout << "Error";
	}
	return 0;
}