#include <iostream>
#include <string>
#include "FINALPROJECT.hpp"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Unscramble c;
	cout << "Welcome to the Word-Number Unscrambling program!" << endl;
	cout << "This program shows how many ways you can write in a word or a number" << endl;
	cout << "With the same letters and/or digits" << endl;
	c.getChoice();
	
	return 0;
}
