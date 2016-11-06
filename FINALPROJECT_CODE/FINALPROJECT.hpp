//this is the header file for the program which contains the class
#ifndef FINALPROJECT_hpp
#define FINALPROJECT_hpp
#include <string> //because this program uses string
#include <stdlib.h> //for system("pause") and system("cls")
using namespace std;

//defines a class named Unscramble
class Unscramble{
	private: //private variables
		//used for the choices in the menu interface
		int choice;
		//input for number unscrambling(i used string because the function only works on string)
		string numString;
		//input for word unscrambling
		string word;
	public: //public variables
		
	    //constructor:
	    Unscramble();
		Unscramble(int choice, string numString, string word);
		
		//getter:
		int getChoice();
		string getWord();
		string getNumString();
		
		//functions:
		
		//for the menu
		void welcomeMessage();
		void menu();
		
		//used to switch the letters in the input string
		void swap(char& x, char& y);
		
		//used to obtain how many arrangements the letters/digits can be arranged
		void permute(string str, int i, int z);
		
		//used to display the output
		void displayDataWord();
		void displayDataNumber();
		
		//used for exit validation
		void exitProgram();
		//used for if the user wants to unscramble again
		void again();
};

#endif /*FINALPROJECT_hpp*/
