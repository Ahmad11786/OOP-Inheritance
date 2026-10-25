#include<iostream>
using namespace std;
class LibraryItem {
	protected:
		string bookTitle="";
		int availableCopies;

	public:
		LibraryItem(string bT,int Copy) {
			bookTitle=bT;
			availableCopies=Copy;
		}

		void displayStock() {
			cout<<"\nBook Title : "<<bookTitle;
			cout<<"\nAvailable Copies : "<<availableCopies;
		}

};
class Book:public LibraryItem {

		string authorName;
	public:
		Book(string name,string a,int c):LibraryItem(name,c){
			authorName=a;
		}
		void borrowBook() {
          if(availableCopies>0){
          	availableCopies--;
            cout << "\nBook borrowed successfully!" << endl;
		  }
		  else{
		  	cout<<"\nNo Copies Available.";
		  }
		}
};
int main(){
	Book b1("C++ Basics","A.khan",2);
	b1.displayStock();
	b1.borrowBook();
	b1.borrowBook();
	b1.borrowBook();
	
	b1.displayStock();
	
	return 0;
}










