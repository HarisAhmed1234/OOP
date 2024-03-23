#include <iostream>
using namespace std;

class Vehicle{
	public:
	string Make;
	int Model,Year;
	Vehicle(string make,int model,int year){
		Make=make;
		Model=model;
		Year=year;
	}
};

class Car: public Vehicle{
	public:
		int Numdoors;
		int Fuelefficiency;
		Car(int numdoors,int fuelefficiency,string make,int model,int year):Vehicle(make,model,year){
			Numdoors=numdoors;
			Fuelefficiency=fuelefficiency;
		}
};

class ElectricCar: public Car{
	public:
		int Batterylife;
		ElectricCar(int batterylife,int numdoors,int fuelefficiency,string make,int model,int year):
			Car(numdoors,fuelefficiency,make,model,year){
				Batterylife=batterylife;
			}
			void Display(){
				cout<<"The Electric car's make is: "<<Make<<endl;
				cout<<"The Electric car's model is: "<<Model<<endl;
				cout<<"Electric car was made in: "<<Year<<endl;
				cout<<"The Electric car's fuelefficiency is: "<<Fuelefficiency<<endl;
				cout<<"The Electric car's doors are: "<<Numdoors<<endl;
				cout<<"The Electric car's batterylife is: "<<Batterylife<<endl;
			}
};

int main(){
	cout<<"-Haris Ahmed BsAi 23k6005-"<<endl;
    	cout<<endl;
	ElectricCar ec1(80,4,30,"Toyota",2022,2022);
	ec1.Display();
}
