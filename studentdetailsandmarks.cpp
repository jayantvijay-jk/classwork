#include<iostream>
using namespace std;

class Student{
	int roll;
	char studentname[10];
	char coursename[10];
	char fathername[10];
	char DOB[10];
	public:
	void inputstudent(){
		cout<<"Enter roll number"<<endl;
		cin>>roll;
		cout<<"Enter student's' name"<<endl;
		cin>>studentname;
		cout<<"Enter course name"<<endl;
		cin>>coursename;
		cout<<"Enter father's name"<<endl;
		cin>>fathername;
		cout<<"Enter Date of birth"<<endl;
		cin>>DOB;
	}
	
	void displaystudent(){
		cout<<"Roll number = "<<roll<<endl<<"Name ="<<studentname<<endl<<"Coursename ="<<coursename
		<<endl<<"Father's Name"<<fathername<<endl<<"DOB"<<DOB<<endl;
	}
};

class Exam:public Student{
	int mark1,mark2,mark3;
	public:
	void inputmarks(){
		cout<<"Enter marks of 1st subject"<<endl;
		cin>>mark1;
		cout<<"Enter marks of 2nd subject"<<endl;
		cin>>mark2;
		cout<<"Enter marks of 3rd subject"<<endl;
		cin>>mark3;
	}
	void displayresult(){
		cout<<"Marks in subject 1:"<<mark1<<endl;
		cout<<"Marks in subject 2:"<<mark2<<endl;
		cout<<"Marks in subject 3:"<<mark3<<endl;
	}
};
int main(){
	int i;
	Student s[3];
	Exam e[3];
	
	for(i=1;i<4;i++){
	 
		s[i].inputstudent();
		e[i].inputmarks();
	}
	for(i=1;i<4;i++){
	     
		s[i].displaystudent();
		cout<<"Marks of student"<<i<<" = "<<endl;
		e[i].displayresult();
	}
	
	
	return 0;
}
	
