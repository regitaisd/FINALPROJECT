//FINALPROJECT.cpp contains the functions used for the program
#include <iostream>
#include <string>
#include <stdlib.h>
#include "FINALPROJECT.hpp" //includes header file so we can use the functions in the class
using namespace std;

Unscramble::Unscramble(){ //blank constructor
	choice = 0;
	word = " ";
	numString = " ";
}

Unscramble::Unscramble(int choice, string numString, string word){ //constructor with the values
	this -> choice = choice;
	this -> word = word;
	this -> numString = numString;
}

void Unscramble::swap(char& x, char& y){ //to swap the variables
	char temp; //temporary variable
	temp = x;
	x = y;
	y = temp;
}

void Unscramble::permute(string str, int i, int n){
	if(i == n){
		cout << str << "\t"; //shows the iteration
	} else {
		for(int j = i; j < str.length(); j++){
			swap(str[i], str[j]);
			permute(str, i+1, n); //recursive
			swap(str[i], str[j]);
		}
	}
}

string Unscramble::getWord(){ //to input the word
	cin >> word;
	return word;
}

string Unscramble::getNumString(){ //to input the number string
	cin >> numString;
	return numString;
}

int Unscramble::getChoice(){ //to input the choice in the menu
	cin >> choice;
	return choice;
}

void Unscramble::welcomeMessage(){ //shows the introduction to the program
	cout << "*  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *" << endl;
	cout << "*                                                                       *" << endl;
	cout << "*          Welcome to the Word-Number unscrambling program!             *" << endl;
	cout << "*                                                                       *" << endl;
	cout << "*  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *" << endl;
	cout << endl;
	cout << "This program shows how many ways you can write in a word or a number" << endl;
	cout << "with the same letters and/or digits" << endl;
	cout << endl;
}

void Unscramble::menu(){ //menu interface
	cout << "Please choose an option: " << endl;
	cout << "1. Word \t 2. Number \t 3. Quit program" << endl;
	cout << "Input your choice: ";
	getChoice();
	cout << endl;
	//input validation
	if(choice == 1){
		cout << "You chose Word!" << endl;
		cout << "Please input word: ";
		displayDataWord();
		cout << endl;
		again();
	} else if (choice == 2){
		cout << "You chose Number!" << endl;
		cout << "Please input a number: ";
		displayDataNumber();
		cout << endl;
		again();
	} else if (choice == 3){
		cout << endl;
		exitProgram();
	} else{
		cout << "ERROR: Please choose between numbers 1, 2 or 3: " << endl; //error message
		menu();
	}
}

void Unscramble::exitProgram(){ //exit interface
	int e; //for the exit choice
    cout << "Do you want to exit the program?" << endl;
    cout << "1. Yes \t 2. No" << endl;
    cout << "Enter your choice: ";
	cin >> e;
	cout << endl;
	if(e == 1){
		cout << "The program will exit now." << endl;
		cout << "* * * * * * * * * * * * * * * *" << endl;
		cout << "*                             *" << endl;
		cout << "*     T H A N K  Y O U !      *" << endl;
		cout << "*                             *" << endl;
		cout << "* * * * * * * * * * * * * * * *" << endl;
		exit(0);
	} else if(e == 2){
		cout << "Returning to program." << endl; //takes the user back to the menu
		system("pause");
		system("cls");
		welcomeMessage();
		menu();
	} else{ //error message
		cout << "ERROR: Invalid input. Please type in either 1 or 2" << endl;
		exitProgram();
	}
}

void Unscramble::again(){ //asks if the user wants to unscramble again after unscrambling a variable
	int a; //for the choice
	cout << "Would you like to unscramble another one?" << endl;
	cout << "1. Yes \t 2. No" << endl;
	cout << "Input your choice: ";
	cin >> a;
	
	if(a == 1){
		cout << "Returning to menu." << endl; //takes the user back to menu
		system("pause");
		cout << endl;
		system("cls");
		welcomeMessage();
		menu();
	} else if(a == 2){
		exitProgram(); //takes user to the exit menu
	} else {
		cout << "ERROR: Input invalid. lease type in either 1 or 2" << endl; //error message
		again();
	}
}

void Unscramble::displayDataWord(){ //displays the output of the word permutation
	getWord();
	cout << "The word combinations you can make with the same letters you just entered are:" << endl;
	permute(word, 0, word.length()-1);
	cout << endl;
	system("pause");
}

void Unscramble::displayDataNumber(){ //displays the output of the number permutation
	getNumString();
	cout << "The number combinations you can make with the same numbers you just entered are:" << endl;
	permute(numString, 0, numString.length()-1);
	cout << endl;
	system("pause");
}
