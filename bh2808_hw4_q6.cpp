#include <iostream>
using namespace std;

int main(){
int n;
int current;
int even_counter;
int odd_counter;
int remainder;
int n_counter;
int n_updater;
int g;

cout << "Please input a positive integer: ";
cin >> n;


    while(n>0){
            n_updater = n;
            while(n_updater >0){
                
      
        remainder = n_updater% 10;
        if( remainder % 2 ==0){
        even_counter ++;
    }   else {
        odd_counter++;    
    }
        n_updater/=10;
            
       }

 if(even_counter >odd_counter)
       cout << n <<endl;

n--;
n_updater = n;
odd_counter = 0;
even_counter = 0;

    }
    
cout <<"even numbers are: " <<even_counter<<endl;
cout <<"odd numbers are: "<<odd_counter<<endl;
cout <<" N is:"<< n <<endl;
cout <<"n_updater is: "<<n_updater<<endl;




/*
even_counter = 0;
current = n;

    while (n > even_counter){
    cout << current <<endl;
    current -=1;
    even_counter++;
    }

cout<<endl;
cout <<"The total numbers are : "<<even_counter;
*/



return 0;

}