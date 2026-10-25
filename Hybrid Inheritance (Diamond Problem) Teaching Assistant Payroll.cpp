#include <iostream>
using namespace std;

class Person {
	protected:
		string name;
		int universityID;

	public:
		Person(string n, int id) {
			name = n;
			universityID = id;
		}
};

class Student : virtual public Person {
	protected:
		string courseName;

	public:
		Student(string n, int id, string course)
			: Person(n, id) {
			courseName = course;
		}
};

class Employee : virtual public Person {
	protected:
		int hoursWorked;
		float hourlyRate;

	public:
		Employee(string n, int id, int hours, float rate)
			: Person(n, id) {
			hoursWorked = hours;
			hourlyRate = rate;
		}
};

class TeachingAssistant : public Student, public Employee {
	public:
		TeachingAssistant(string n, int id, string course, int hours, float rate)
			: Person(n, id),
			  Student(n, id, course),
			  Employee(n, id, hours, rate) {
		}

		void display() {
			cout << "\n--- Teaching Assistant Details ---";
			cout << "\nName: " << name;
			cout << "\nUniversity ID: " << universityID;
			cout << "\nCourse: " << courseName;
			cout << "\nHours Worked: " << hoursWorked;
			cout << "\nHourly Rate: Rs. " << hourlyRate;
			cout << "\nTotal Pay: Rs. " << hoursWorked * hourlyRate;
			cout << endl;
		}
};

int main() {
	TeachingAssistant TA("Ayesha", 208, "C++ Lab", 12, 500);

	TA.display();

	return 0;
}
