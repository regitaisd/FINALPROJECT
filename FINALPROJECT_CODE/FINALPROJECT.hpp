//this is the header file for the program which contains the class
#ifndef FINALPROJECT_hpp
#define FINALPROJECT_hpp
#include <string> //because this program uses string
using namespace std;


//defines a class named Unscramble
class Unscramble{
	private: //private variables
		int choice; //used for the choices in the menu interface
		int number; //input for number unscrambling
		string word; //input for word unscrambling
	public: //public variables
	    //constructors:
		Unscramble();
		Unscramble(int choice, int number, string word);
		//getter:
		int getChoice();
		string getWord();
		int getNumber();
		
		//functions:
		
		//used to switch the letters in the input string
		void wordSwap(char& x, char& y);
		
		//used to obtain how many arrangements the letters of the string
		//or numbers of the array can be arranged
		void wordPermute(string str, int i, int z);
		
		//used to display the output
		void displayDataWord();
		void displayDataNumber();
		
		//used for exit validation
		void exit();
};

#endif /*FINALPROJECT_hpp*/
