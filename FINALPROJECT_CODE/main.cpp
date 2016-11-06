#include <iostream>
#include <string>
#include "FINALPROJECT.hpp" //includes header file
#include <stdlib.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Unscramble c; //so the functions in the class can be used
	c.welcomeMessage(); //calls the welcomeMessage function
	c.menu(); //calls the menu function
	
	return 0;
}
