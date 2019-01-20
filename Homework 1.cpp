// Brendan Cagampang ---- Homework 1: The Game of Pig
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main() {
	srand(time(NULL));
	int P1Total, P2Total, turnTotal, roll;
	int cpu = rand() % 2;
	char input;

	cout << "Welcome to The Game of Pig, created by Brendan Cagampang!" << endl;
	cout << "Controls: Press R to roll the dice. Any other character will hold." << endl << endl;
	cout << "Player 1 score: 0" << endl << "Player 2 score: 0" << endl;
	P1Total = 0;
	P2Total = 0;
	if (cpu == 0) {
		cout << "You will be Player 1." << endl;
	}
	else {
		cout << "You will be Player 2." << endl;
	}
	cout << "It is Player 1's turn." << endl;

	if (cpu == 0) {
		turnTotal = 0;
		roll = rand() % 6 + 1;
		roll;
		if (roll > 1) {
			cout << "Roll: " << roll << endl;
			turnTotal += roll;
			cout << "Turn total: " << turnTotal << endl;
			cout << "Roll/Hold? " << endl;
			cin >> input;
			while (input == 'r' || input == 'R') {
				roll;
				cout << "Roll: " << roll << endl;
				turnTotal += roll;
				cout << "Turn total: " << turnTotal << endl;
				cout << "Roll/Hold?" << endl;
				cin >> input;
				if (input != 'r' || input != 'R') {
					P1Total += turnTotal;
					cout << "Turn total: " << turnTotal << "\nNew score: " << P1Total;
					break;
				}
			}
		}
		else {
			cout << "Roll: 1\nTurn Total: 0\nNew score: " << P1Total << endl;
		}
	}
	else {
		turnTotal = 0;
		roll = rand() % 6 + 1;
		roll;
		cout << "Roll: " << roll;
		if (roll > 1) {
			turnTotal += roll;

		}
		else {
			cout << "Roll: 1\nTurn total: 0\nNew score: " << P1Total << endl;
		}
	}
	return 0;
}