#include <iostream>
using namespace std;

class Number {
private:
    int NO;

public:
    Number(int no){
		NO=no;
	}
	Number& operator--() {
        NO *= 4;
        return *this;
    }
    
    Number operator-- (int) {
        Number temp = *this;
        NO=NO/4;
        return temp;
    }
    
    void display(){
    	cout<<"Value: "<<NO<<endl;
	}
};

int main(){
	int number;
	cout<<"Enter number you want to  perform operations on: "<<endl;
	cin>>number;
	Number num(number);
	cout<<"Before post/pre decrement: "<<endl;
	num.display();
	
	--num;
    cout << "After prefix decrement: "<<endl;
    num.display();
    
    num--;
    cout<<"After post decrement: "<<endl;
    num.display();
	
}
