/*************************************  
* Joe Phabmixay
 *915476632
* jphabmix@mail.sfsu.edu
*************************************/
//budget.cpp

#include <iostream>
#include "budget.h"

using namespace std;

/*std::ifstream& operator>> (std:: ifstream& s, Budget& b){

	s >> b.title >> b.envelope_count;

	for (int i = 0; i < b.envelope_count; i++){ //envelopes
		s >> b.envelopes[i].id  >> b.envelopes[i].title;
		cout << b.envelopes[i].id << endl;
	}

	s >> b.account_count;

	for (int j = 0; j < b.account_count; j++){
		s >> b.accounts[j].id >> b.accounts[j].title >> b.accounts[j].balance;
	}

	return s;
}*/

//Budget:: ostream& operator<<(ostream&, const Budget&);