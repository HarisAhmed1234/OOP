#include <iostream>
using namespace std;

class Person{
	public:
	string Name;
	int Age;
	Person(string name,int age){
		Name=name;
		Age=age;
	}
};

class Student: public Person{
	public:
	int StudentID;
	char Gradelevel;
	Student(int studentid,char gradelevel,string name,int age):
	Person(name,age){
		StudentID=studentid;
		Gradelevel=gradelevel;
	}
};

class Teacher:public Person{
	public:
	string Subject;
	int Roomnumber;
	Teacher(string subject,int roomnumber,string name,int age):	
	Person(name,age){
		Subject=subject;
		Roomnumber=roomnumber;
	}
};

class GraduateStudent: public Student,public Teacher{
	public:
		GraduateStudent(string name,int age,int studentid,char gradelevel,string subject,int roomnumber):
		Student(studentid,gradelevel, name, age),Teacher(subject,roomnumber,name,age){};
		void Display(){
			cout<<"The name of Graduate student: "<<Teacher::Name<<endl;
			cout<<"The id of Graduate student: "<<StudentID<<endl;
			cout<<"Graduate student's Grade level: "<<Gradelevel<<endl;
			cout<<"The age of Graduate student: "<<Teacher::Age<<endl;
			cout<<"The subject of Graduate student: "<<Subject<<endl;
			cout<<"The Room number of Graduate student: "<<Roomnumber<<endl;
		}
};

int main(){
	cout<<"-Haris Ahmed BsAi 23k6005-"<<endl;
    	cout<<endl;
	GraduateStudent grad1("Haris",19,6005,'A',"OOP",23);
	grad1.Display();
}
