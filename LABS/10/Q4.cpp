/*Write the following program to show the working of friend class. Define two
classes i.e., “printClass” and “perimeter”. perimeter class finds perimeter using
length and breadth values where length and breadth values are private. Make
“printClass” a friend of “perimeter” class. Once this is done, create an object in
main class to calculate perimeter and pass this object to printClass to display
perimeter.*/

#include <iostream>
using namespace std;

class Printclass;
class Perimeter;

class Perimeter{
	int length;
	int breadth;
	public:
		Perimeter(int len,int bre){
			length=len;
			breadth=bre;
		}
		friend class Printclass;
};

class Printclass{
	public:
		void displayperimeter(Perimeter objper){
			cout<<"The perimeter of the input values is: "<<2*(objper.length+objper.breadth)<<endl;
		}
};

int main(){
	int a,b;
	cout<<"Enter the first value: "<<endl;
	cin>>a;
	cout<<"Enter the second value: "<<endl;
	cin>>b;
	
	Perimeter objper(a,b);
	Printclass objprint;
	objprint.displayperimeter(objper);
}
