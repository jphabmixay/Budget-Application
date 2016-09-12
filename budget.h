#ifndef _BUDGET_H_
#define _BUDGET_H_

#include <iostream>
#include <string>
#include <fstream>
#include "account.h"
#include "envelope.h"

class Budget{
	public:

	//private:
		std::string title;
		int account_count;
		Account* accounts;
		int envelope_count;
		Envelope* envelopes;

	friend std::ostream& operator<< (std::ostream& s, const Budget& b);
	friend std::ofstream& operator<< (std::ofstream s, const Budget& b);

	friend std::ifstream& operator>> (std::ifstream& s, Budget& b){
		
		s >> b.title >> b.envelope_count;

		for (int i = 0; i < b.envelope_count; i++){
				s >> b.envelopes[i].id  >> b.envelopes[i].title;
				std::cout << b.envelopes[i].id << std::endl;
			}

			s >> b.account_count;

		for (int j = 0; j < b.account_count; j++){
				s >> b.accounts[j].id >> b.accounts[j].title >> b.accounts[j].balance;
			}

		return s;
	}
};

//std::ostream& operator<< (std::ostream&, const Budget&){ }
#endif