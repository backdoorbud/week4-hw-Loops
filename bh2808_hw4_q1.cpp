#include <iostream>
using namespace std;


int main (){
int n;
int i;
int countDigits;

cout << "Please enter a positve integer: ";
cin >> n;

countDigits = 0;
i = 0;

    while (i < n ){

    countDigits += 2;
    cout << countDigits <<endl;
    i++;

       

    }

    /*VERSION 2*/


int count;
int evenSum;

cout << "Please enter a positve integer: ";
cin >> n;

evenSum = 0;


for(count=1; count<=n; count++){
evenSum += 2;

cout <<evenSum <<endl;

}





return 0;

}




