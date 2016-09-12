#ifndef __BUDGETITEM_H__
#define __BUDGETITEM_H__
#include <iostream>
#include <string>
#include <fstream>

class budgetItem{
	public:
	//private:
		int id;
		double balance;
		std::string title;

		//friend int getId(budgetItem &b);
};

//int getId(budgetItem &b){ }

#endif