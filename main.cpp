/*************************************
* Joe Phabmixay
 *915476632
* jphabmix@mail.sfsu.edu
*************************************/

#include <iostream>
#include <fstream>
#include <string>
#include "budgetitem.h"
#include "budget.cpp"

using namespace std;

enum options{close, show, makedeposit, makewithdrawal}; //menu options
options currentOption = show; //set default option

//main prototypes
void displayMenu();
int inputPrompt();
void processInput(int);

//budget prototypes
void showBudget(Budget);
Budget loadBudget();

//global variables
Budget budgetFile;

//----------------------------------------------------------------------

int main(){

	while(currentOption != close){ //loops until told to exit
		displayMenu();
		int userInput = inputPrompt();
		processInput(userInput);
	}

	return 0;
}

void displayMenu(){ //displays the main menu
	cout << endl << show << ". Show Budget" << endl;
    cout << makedeposit << ". Make Deposit" << endl;
    cout << makewithdrawal << ". Make Withdrawal " << endl;
    cout << close << ". EXIT" <<endl;
}

int inputPrompt(){;
	cout << "Enter your selection: ";
	int userInput;
	cin >> userInput;
	cout << endl;

	return userInput;
}

void processInput(int input){

	switch(input){
		case show:
			budgetFile = loadBudget();
			//showBudget(budgetFile);
			break;

		case makedeposit:
			break;

		case makewithdrawal:
			break;

		case close:
			exit(1);

		default:
			return;
	}
}
/*----------------------------------------------
/ budget functions
------------------------------------------------*/
Budget loadBudget(){
	Budget load;
	string fileName = "BUDGET" ;
	ifstream readBudget;

	readBudget.open(fileName);

	if (readBudget.fail()){
		cout << "Failed to open file." << endl;
		exit(1);
	}

	readBudget >> load; //handled through operator overloading

	readBudget.close();

	return load;
}

void showBudget(Budget x){
    cout << "---- "<< x.title << " ----"<< endl; //formatting

    cout << x.account_count << " Accounts:" <<  endl;

    for (int j = 0; j < x.account_count; j++){
            cout << x.accounts[j].id << ": " << x.accounts[j].title << " - " << x.accounts[j].balance << endl;
        }

    cout << endl << x.envelope_count << " Envelopes:" <<endl;

    for (int i = 0; i < x.envelope_count; i++){
            cout << x.envelopes[i].id << ": " << x.envelopes[i].title << endl;
        }
}