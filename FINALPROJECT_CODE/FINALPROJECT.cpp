//FINALPROJECT.cpp contains the functions used for the program
#include <iostream>
#include <string>
#include "FINALPROJECT.hpp" //includes header file
using namespace std;

Unscramble::Unscramble(){
	choice = 0;
	word = " ";
	number = 0;
}

Unscramble::Unscramble(int choice, int number, string word){
	choice = choice;
	word = word;
	number = number;
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


void Unscramble::numSwap(int& x, int& y){
	int temp;
	temp = x;
	x = y;
	y = temp;
}

void Unscramble::numPermute(int num[], int i, int z){
	if(i == z-1){
		for(int j = 0; j < z; j++){
			cout << num[j] << "\t\t" << endl;
		}
	} else {
		for(int j = i; j < z; j++){
			numSwap(num[i], num[j]);
			numPermute(num[i], i + 1, z);
			numSwap(num[i], num[j]);
		}
	}
}

void Unscramble::wordPermute(string str, int i, int z){
	if(i == z){
		cout << str << "\t\t" << endl;
	} else{
		for(int j = i; j < str.length(); j++){
			wordSwap(str[i], str[j]);
			wordPermute(str, i+1, z);
			wordSwap(str[i], str[j]);
		}
	}
}

int Unscramble::getNumber(){
	int i;
	cin >> number;
	return number;
}

int Unscramble::getChoice(){
	cin >> choice;
	return choice;
}

void Unscramble::menu(){
	cout << "Please choose an option: " << endl;
	cout << "1. Word \t 2. Number \t 3. Quit program" << endl;
	cout << "Input your choice: ";
	getChoice();
	cout << endl;
	if(choice == 1){
		cout << "You chose Word!" << endl;
		cout << "Please input word: ";
		displayDataWord();
		cout << endl;
		again();
	} else if (choice == 2){
		cout << "You chose Number!" << endl;
		cout << "Please input a set of numbers: ";
		displayDataNumber();
		cout << endl;
	} else if (choice == 3){
		cout << endl;
		exitProgram();
	} else{
		cout << "ERROR: Please choose between numbers 1, 2 or 3: " << endl;
		menu();
	}
}

void Unscramble::exitProgram(){
	int e;
    cout << "Do you want to exit the program?" << endl;
    cout << "1. Yes \t 2. No" << endl;
    cout << "Enter your choice: ";
	cin >> e;
	cout << endl;
	if(e == 1){
		cout << "The program will exit now. Thank you for using this program";
		exit(0);
	} else if(e == 2){
		cout << "Returning to program." << endl;
		cout << endl;
		menu();
	} else{
		cout << "Please type in either 1 or 2" << endl;
		exitProgram();
	}
}

void Unscramble::again(){
	int a;
	cout << "Would you like to unscramble another one?" << endl;
	cout << "1. Yes \t 2. No" << endl;
	cout << "Input your choice: ";
	cin >> a;
	
	if(a == 1){
		cout << "Returning to menu." << endl;
		system("pause");
		cout << endl;
		menu();
	} else if(a == 2){
		exitProgram();
	} else {
		cout << "ERROR: please type in either 1 or 2" << endl;
		again();
	}
}

void Unscramble::displayDataWord(){
	getWord();
	cout << "The word combinations you can make with the same letters you just entered are:" << endl;
	wordPermute(word, 0, word.length()-1);
	system("pause");
}

void Unscramble::displayDataNumber(){
	getNumber();
	cout << "The number combinations you can make with the same numbers you just entered are:" << endl;
	numPermute(number, 0, number-1);
	system("pause");
}
