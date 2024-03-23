#include <iostream>
using namespace std;

class Position{
	public:
	int X,Y,Z;
	Position(int x, int y, int z){
		X=x;
		Y=y;
		Z=z;
	}
};

class Health{
	public:
	int Healthh;
	Health(int health){
		Healthh=health;
	}
};

class Character: public Position, public Health{
	public:
		string Name;
		int Age;
		Character(string name,int age,int x, int y, int z,int health):Position(x,y,z),Health(health){
			Name=name;
			Age=age;
		}
		void Display(){
			cout<<"Characters name: "<<Name<<endl;
			cout<<"Characters Age: "<<Age<<endl;
			cout<<"Character is standing on "<<X<<"i "<<Y<<"j "<<Z<<"k Axis"<<endl;
			cout<<"Characters Health is: " << Healthh<<endl;
		}
};

int main(){
	cout<<"-Haris Ahmed BsAi 23k6005-"<<endl;
    	cout<<endl;
	Character c1("Haris",19,3,4,5,72);
	c1.Display();
}
