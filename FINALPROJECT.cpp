//REGITA ISADA
//COMPUTER SCIENCE L1AC
//2001586350

#include <iostream>
#include <string>

using namespace std;

int main(){
	string letter;
	int no;
	int choice;
	
	cout << "Hello! Welcome to the program!" << endl;
	cout << "Please choose an option!" << endl;
	cout << "What are we unscrambling today?" << endl;
	cout << "1.Word\n2.Number" << endl << endl;
	cin >> choice;
	
	//validation
	if(choice == 1){
		cout << "You chose Word!" << endl;
		cout << "Now please enter a word (must be 3 to 5 letter)" << endl;
		cin >> letter;
	}else if(choice == 2){
		cout << "You chose Number!" << endl;
		cout << "Now please enter a positive integer between 100 and 99999" << endl;
		cin >> no;
		if(no < 100 && no > 99999){
			cout << "Sorry! Your number must be between 100 and 99999" << endl;
		} else if(no < 0){
			cout << "Sorry! Your number must be positive" << endl;
		} else { 
		}
	}else{
		cout << "Sorry! That option is not available" << endl;
	}
	
	return 0;
	
}
