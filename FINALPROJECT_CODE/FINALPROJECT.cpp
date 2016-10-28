//FINALPROJECT.cpp contains the functions used for the program
#include <iostream>
#include <string>
#include "FINALPROJECT.hpp" //includes header file
using namespace std;

Unscramble::Unscramble(){
	this -> choice = 0;
	this -> word = " ";
	this -> number = 0;
}

Unscramble::Unscramble(int choice, int number, string word){
	this -> choice = choice;
	this -> word = word;
	this -> number = number;
}

string Unscramble::getWord(){
	cin >> word;
	return word;
}


void Unscramble::wordSwap(char& x, char& y){
	char temp;
	temp = x;
	x = y;
	y = temp;
}

void Unscramble::wordPermute(string str, int i, int z){
	if(i == z){
		cout << str << "  "<< endl;
	} else{
		for(int j = i; j < str.length(); j++){
			wordSwap(str[i], str[j]);
			wordPermute(str, i+1, z);
			wordSwap(str[i], str[j]);
		}
	}
}

int Unscramble::getNumber(){
	cin >> number;
	return number;
}

int Unscramble::getChoice(){
	cout << "Please choose an option: " << endl;
	cout << "1. Word \t 2. Number \t 3. Quit program" << endl;
	cin >> choice;
	cout << endl;
	if(choice == 1){
		cout << "You chose Word!" << endl;
		cout << "Please input word: ";
		displayDataWord();
		cout << endl;
	} else if (choice == 2){
		cout << "You chose Number!" << endl;
		cout << "Please input a set of numbers: ";
		displayDataNumber(); //DO NOT TRY NUMBERS FIRST
		cout << endl;
	} else if (choice == 3){
		cout << endl;
		exit();
	} else{
		cout << "Please choose between numbers 1, 2 or 3: " << endl;
		getChoice();
	}
	return choice;
}

void Unscramble::exit(){
	int e;
    cout << "Do you want to exit the program?" << endl;
    cout << "1. Yes \t 2. No" << endl;
	cin >> e;
	cout << endl;
	if(e == 1){
		cout << "The program will exit now. Thank you for using this program";
	} else if(e == 2){
		cout << "Returning to program." << endl;
		cout << endl;
		getChoice();
	} else{
		cout << "Please type in either 1 or 2" << endl;
		exit();
	}
}

void Unscramble::displayDataWord(){
	getWord();
	cout << "The word combinations you can make with the same letters you just entered are:" << endl;
	wordPermute(word, 0, word.length()-1);
	cout << endl;
}

void Unscramble::displayDataNumber(){
	getNumber();
	cout << "The number combinations you can make with the same numbers you just entered are:" << endl;
}
