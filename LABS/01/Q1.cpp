#include <iostream>

using namespace std;

int main()
{
    int number;
int count=0;
int f =0;
cout << "Enter a number: ";
cin >> number;
for(int i=2; i<=number; i++){
    if(i!=number){
        if(number%i == 0){
            f = 1;
        }
    }
}
    if(f){
        cout<<"ITS NOT PRIMEEEEEE";
    }
    else{
        cout << "Yessur its a Prime Number";
    }
  return 0;
}
