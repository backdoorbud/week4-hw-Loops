#include <iostream>
#include <cmath>
using namespace std;

int main () {
int length;
int current; 
int count;
int product;
cout << "Please enter the length of the sequence: ";
cin>> length;

cout<< "Please enter your sequence: "<<endl;

product = 1;
int sequence;
sequence = 1;

    while (length >= sequence){
    cin >> current;
    product *= current;
    sequence ++;

}


double geometricMean = pow ((double)product, (1/(double)length));
cout<< "The geometric mean is: " <<geometricMean <<endl;



 /*VERSION 2*/

cout << "Please enter a non-empty sequence of positive integers, each one in a separate line. End your sequence by typing -1: "<<endl;

int product_2;
int current_2;
int absolute_value;
int counter;

current_2 = 1;
product_2 = 1;
counter = 0;

    while (current_2 > 0){
    cin>> current_2;
    product_2 *= current_2;
    if(current_2 >0) counter ++;
}

absolute_value = (product_2 * -1);
double geometricMean_2 = pow((double)absolute_value, (1/(double)counter));
cout<<"The geometric mean is: "<< geometricMean_2;
return 0;


}