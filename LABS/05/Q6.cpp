#include<iostream>
using namespace std;

class input_handler{
	public:
		string task;
		bool performed;
		input_handler(string task1,bool performed1){
			task=task1;
			performed=performed1;
		}
};

class physics_engine{
	public:
		string physicslaw;
		bool valid;
		physics_engine(string law,bool validity){
			valid=validity;
			physicslaw=law;
		}
	
};

class graphics_engine{
	private:
		bool animations;
		input_handler *h;
		physics_engine *e;
	public:
		graphics_engine(bool anime,input_handler *h,physics_engine *e){
			animations=anime;
			this->h=h;
			this->e=e;
		}
		void performance(){
			string task;
			string law;
			cout<<"enter the task u want to perform : "<<endl;
			cin>>task;
			cout<<"enter the physics law u wnt to peform : "<<endl;
			cin>>law;
			if(h->task==task && e->physicslaw==law){
				animations=true;
				h->performed=true;
				e->valid=true;
			}
			else{
				animations=false;
				h->performed=false;
				e->valid=false;
			}
			if(animations==true){
				cout<<"animations performed"<<endl;
			}
			else{
				cout<<"animations not performed"<<endl;
			}
		}
};

int main(){
	input_handler obj("running",true);
	physics_engine obj1("newtons",true);
	graphics_engine obj2(true,&obj,&obj1);
	obj2.performance();
}
