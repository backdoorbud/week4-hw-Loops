#include <iostream>
#include <string>
using namespace std;

int main (){ 
int input_number;
string binstring ;

cout <<"Please enter a positive number: ";
cin>> input_number;

int Bd = 2;
int number_quotient;
int number_modulo;

number_quotient = input_number;
to_string(1) = "1";
to_string (0) = "0";

while(input_number >= 1){
    int remainder = input_number %2;
    binstring = to_string(remainder) + binstring;
    input_number = input_number /2;
}



cout <<binstring<<endl;

return 0;

}