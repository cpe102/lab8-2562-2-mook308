#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	float loan=0.00,rate=0.00,pay=0.00,nowR=0.00,newP=0.00;
	int year=1;
	cout << "Enter initial loan: ";
	cin >> loan;
    cout <<"Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	for (;;){
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << year; 
	cout << setw(13) << left << loan;
	nowR = (rate*loan)/100;
	cout << setw(13) << left << nowR;
	loan = nowR+loan;
	cout << setw(13) << left << loan;
	if(pay>loan){
	newP=loan;
	loan = loan - newP;
	cout << setw(13) << left << newP;
	}else{ cout << setw(13) << left << pay;
	loan=loan-pay;}

	cout << setw(13) << left << loan;
	cout << "\n";
	year++;
	if(loan == 0)break;
	}
	
	return 0;
}
