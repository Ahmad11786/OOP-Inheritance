#include<iostream>
using namespace std;
class AcademicRecord {
	protected:
		string studentName;
		float gpa;
	public:
		AcademicRecord(string s,float g) {
			gpa=g;
			studentName=s;
		}
};
class  SportsRecord {
	protected:
		float  Sportpoint;
	public:
		SportsRecord(float sp) {
			Sportpoint=sp;
		}

};
class ScholarshipCandidate:public SportsRecord,public AcademicRecord {
	public:
		ScholarshipCandidate(string s,float g, float sp):AcademicRecord(s,g),SportsRecord(sp){
			
		}
		void display() {
			cout<<"\n-------- Scholarship Status -----------";
			cout<<"\nName : "<<studentName;
			cout<<"\nGPA : "<<gpa;
			cout<<"\nSport Point : "<<Sportpoint;
			if(gpa>=3.5 && Sportpoint>=70) {
				cout<<"\n Eligible for scholarship";
			} else {
				cout<<"\n Not Eligible";
			}
		}

};
int main() {
	ScholarshipCandidate S1("Ali",3.7,85);

	S1.display();

	ScholarshipCandidate S2("Sara",3.3,90);
	S2.display();

	return 0;

}