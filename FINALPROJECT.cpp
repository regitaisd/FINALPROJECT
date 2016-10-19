//REGITA ISADA
//COMPUTER SCIENCE L1AC
//2001586350

#include <iostream>
#include <string>

using namespace std;

struct Switch {
	int choice;
	char word;
	int number;
};

void switchWord(char *wor, char *let);
void jumble(char *a, int x, int y);

int main(){
	
	Switch data;
	
	cout << "Hello! Welcome to the program!" << endl;
	cout << "Please choose an option!" << endl;
	cout << "What are we unscrambling today?" << endl;
	cout << "1.Word\n2.Number" << endl << endl;
	cin >> data.choice;
	
	Switch arr[5];
	
	
	if(data.choice == 1){
	cout << "You chose Word!" << endl;
	cout << "Now please enter a word (must be 3 to 5 letters):" << endl;
	for(int i = 1; i <= 5; i++){
		cin >> arr[i].word;
	}
	}else if(data.choice == 2){
		cout << "You chose Number!" << endl;
		cout << "Now please enter a positive integer between 100 and 99999" << endl;
		for(int i = 1; i <= 5; i++){
		cin >> arr[i].number;
		if(arr[i].number < 100 || arr[i].number > 99999){
			cout << "Sorry! Your number must be between 100 and 99999" << endl;
		} else if(arr[i].number < 0){
			cout << "Sorry! Your number must be positive" << endl;
		} else {
		}
	}
	}else{
		cout << "Sorry! That option is not available" << endl;
	}
	
	
	return 0;
	
}

void switchWord(char *wor, char *let){
	char word;
	word = *wor;
	*wor = *let;
	*let = word;
}

/*void jumble(char *a, int x, int y, Switch data){
	if(x == y){
		cout << data.word << endl << a;
	} else {
		for(int i = x; i <= y; i++){
			switchWord((a+x), (a+i));
			jumble(a, x+i, y);
			switchWord((a+x), (a+i));
		}
	}
}*/

