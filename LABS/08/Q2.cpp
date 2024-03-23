#include <iostream>
using namespace std;

class Character{
	public:
	int Health;
	int Damage;
	Character(int health,int damage){
		Health=health;
		Damage=damage;
	}
	void CharacterDisplay(){
		cout<<"Character detail: "<<endl;
		cout<<"Health: "<<Health<<endl;
		cout<<"Damage: "<<Damage<<endl;
	}
};

class Enemy: public Character{
	public:
		Enemy(int health, int damage) : Character(health, damage){}
		void EnemyDisplay(){
		cout<<"Enemy detail: "<<endl;
		cout<<"Health: "<<Health<<endl;
		cout<<"Damage: "<<Damage<<endl;
	}
};

class Player: public Character{
		public:
		Player(int health, int damage) : Character(health, damage){}
		void PlayerDisplay(){
		cout<<"Player detail: "<<endl;
		cout<<"Health: "<<Health<<endl;
		cout<<"Damage: "<<Damage<<endl;
	}
};

class Wizard: public Player{
	public:
	int Magicpower;
	string Spells;
	Wizard(int health,int damage,int magicpower,string spells):
		Player(health,damage){
			Magicpower=magicpower;
			Spells=spells;
		}
		void WizardDisplay(){
		cout<<"Wizard detail: "<<endl;
		cout<<"Health: "<<Health<<endl;
		cout<<"Damage: "<<Damage<<endl;
		cout<<"Magicpower: "<<Magicpower<<endl;
		cout<<"Spells: "<<Spells<<endl;
	}
};

int main(){
	 cout<<"-Haris Ahmed BsAi 23k6005-"<<endl;
   	 cout<<endl;
	Wizard wiz(70,96,82,"Abacadabra");
	wiz.WizardDisplay();
}
