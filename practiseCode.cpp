// This is just simple example of some basic code 

#include<iostream>
using namespace std;


int main() {
	string weather, restaurant, ticket;

	cout << "This code is created by: Asad Ullah Jamil Ch" << endl << "WhatsApp# 0327-4466575" << endl;
	cout << "Outing Planner..." << endl;
	cout << "___________________" << endl;
	cout << "How is the weather today? (good/bad): ";
	cin >> weather;
	if (weather=="good")
	{
		cout << "Let's go the restaurant." << endl;
		cout << "Is there any restaurant available(yes/no): ";
		cin >> restaurant;
		if (restaurant=="yes")
		{
			cout << "Let's have lunch.";
		}
		else
		{
			cout << "Let's eat pizza.";
		}
	}
	else
	{
		cout << "Let's go the theather." << endl;
		cout << "Are the cenima tickets available (yes/no): ";
		cin >> ticket;
		if (ticket=="yes")
		{
			cout << "Let's go the theater.";
		}
		else
		{
			cout << "Let's go to shopping.";
		}
	}
}