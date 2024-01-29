#include <iostream>
using namespace std;

int main(){
int num;
int place = 1;
int current_value = 0;
int mod;

cout <<"Enter decimal number: ";
cin>> num;





    while (num> 0){
    mod = num % 2;

        if (mod ==0 ){
        current_value += 0;
        place *= 10;
}
        else {
        current_value+= 1 *place;
        place*=10;

}   
num /= 2;


}
cout <<current_value;

return 0;  
}