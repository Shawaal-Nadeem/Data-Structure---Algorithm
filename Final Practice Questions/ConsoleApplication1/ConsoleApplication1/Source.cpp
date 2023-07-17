#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

void insertReservation(unordered_map<string, int>&umap)
{
	cout << endl;
	string name;
	int id;
	cout << "Enter Guest Name : ";
	cin >> name;
	cout << "Enter Reservation ID : ";
	cin >> id;
	cout << endl;
	umap[name] = id;
	cout << "Reservation Added of " << name << " having ID " << id << endl;
	cout << endl;
	cout << endl;
}

void deleteReservation(unordered_map<string, int>&umap)
{
	string name;
	cout << "Enter Guest Name to Remove: ";
	cin >> name;
	auto x = umap.find(name);
	if (x != umap.end()) {
		int id = x->second;
		umap.erase(x);
		cout << "Reservation ID " << id << " deleted for guest " << name << endl;
	}
}

void display(unordered_map<string, int>&umap)
{
	for (auto x = umap.begin(); x != umap.end(); ++x)
	{
		cout << "Guest Name : " << x->first << endl;
		cout << "ID : " << x->second << endl;
		cout << endl;
	}
}

int main()
{
	unordered_map<string, int> umap;
	int choice;
	do
	{
		cout << "Menu:" << endl;
		cout << "1. Insert a new reservation" << endl;
		cout << "2. Delete a reservation" << endl;
		cout << "3. Print all reservations" << endl;
		cout << "4. Exit" << endl;
		cout << "Enter your choice: ";
		cin >> choice;
		if (choice == 1)
		{
			insertReservation(umap);
		}
		else if (choice == 2)
		{
			deleteReservation(umap);
		}
		else if (choice == 3)
		{
			display(umap);
		}
	} while (choice != 4);

	return 0;
}