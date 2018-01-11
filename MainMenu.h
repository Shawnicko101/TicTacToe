#pragma once
#include "CoopGame.h"
#include "AIGame.h"
#include <iostream>

using namespace std;

int choice;

void menuSelect() {
	if (choice == 1) {
		Draw();
	}
	else if (choice == 2) {

	}
	else if (choice == 3) {

	}
	else if (choice == 4) {
		exit(0);
	}
}

void welcomeMessage() {
	cout << "==========================";
	cout << "Welcome to Tic Tac Toe!";
	cout << "==========================";

}

void menuPrint() {
	cout << "==========================";
	cout << "Please select a valid option: ";
	cout << "==========================";
	cout << "==========================\n";
	cout << "1. Co-op/Versus game.\n";
	cout << "2. Versus AI\n";
	cout << "3. View Scoreboard\n";
	cout << "4. Quit Game\n";
	cout << "==========================\n";

	cin >> choice;

	menuSelect();

}




