// product search and items.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;

int main()
{
	string items[5] = { "banana","apple","coffee","milk","pizza" };
	double price[5] = { 14.25,15.23,60,75,30 };

	int numP, i = 0;
	double totPrice = 0;
	double balance = 0;
	string product;
	int exit = 1;




	while (exit) {
		cout << "enter the name of the product :";
		cin >> product;

		for (i = 0; i < 5; i++) {

			if (product == items[i])
			{
				cout << "product found :" << items[i] << "\t price :" << price[i] << endl;
				cout << "how many products ? :";
				cin >> numP;
				totPrice = numP * price[i];
				cout << endl;
				cout << "product name: " << items[i] << "\n" << "quatity :" << numP << "\n" << "total price: " << totPrice << endl;



			}
			else
				if (product != items[i] && i == 4)
				{
					clog << "not found" << endl;		//current problem is conditioning
				}

		}
		balance = balance + totPrice;
		clog << "continue to buy? press 1 to exit press 0" << endl;
		cin >> exit;

	}

	clog << "your total is R " << balance<< endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
