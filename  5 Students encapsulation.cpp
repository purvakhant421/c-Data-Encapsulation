#include<iostream>
#include<string.h>

using namespace std;

class student{
	private:
		int id;
		char name[100];
		int age;
		char course[100];
		char email[100];
		char city[100];
		char collage[100];
		
	public:
		void setter (int i ,char n[] , int a , char cr[] , char em[] , char ct[] , char clg[]){
			id = i;
			strcpy(name,n);
			age = a;
			strcpy(course,cr);
			strcpy(email,em);
			strcpy(city,ct);
			strcpy(collage,clg);
		}
		void getter(){
			cout<<"std id: "<<id<<endl;
			cout<<"std name: "<<name<<endl;
			cout<<"std age: "<<age<<endl;
			cout<<"std course: "<<course<<endl;
			cout<<"std email: "<<email<<endl;
			cout<<"std city: "<<city<<endl;
			cout<<"std collage: "<<collage<<endl;
		}
};

int main(){
	student obj1 , obj2 , obj3 , obj4 , obj5 ;
	
	char name[]="purva";
	char course[]="Bussiness managment";
	char email[]= "purva@gmail.com";
	char city[]="Surat";
	char clg[]="vnsgu";
	obj1.setter(1050,name,18,course,email,city,clg);
	obj1.getter();
	
	
	obj2.setter(1111,"Mishri",17,"Finance managment","mishri@gmail.com","Surat","central collage");
	obj2.getter();
	
	obj3.setter(2222,"Dhavan",15,"International bussiness","dhavan@gmail.com","Baroda","parul university");
	obj3.getter();
	
	obj4.setter(3333,"parth",20,"Hospitality","parth@gmail.com","Delhi","international collage");
	obj4.getter();
	
	obj5.setter(4444,"Herik",21,"Accoutant","herikc@gmail.com","junagadh","bknmu");
	obj5.getter();
	
	return 0;

} 


