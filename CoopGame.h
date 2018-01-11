#pragma once
#include <iostream>
using namespace std;

//Setting a matrix grid to be read in console.
char matrix[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
char player = 'X';

//Counting variable for calculating whether the game is a draw or not.
//int n;

bool replay;

//This function draws the matrix into the console.
void Draw() {
	system("cls");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

void replayGame() {
	char choice;
	//This will be the function to ask the player if they want to replay the game or not.
	cout << "Would you like to replay? (Y or N)";
	cin >> choice;
	if (choice == 'Y' || 'y') {
		if (choice != 'Y' || 'y') {
			cout << "That is not a valid input";
			cout << "Would you like to replay? (Y or N)";
			cin >> choice;
			replay = true;
		}
	}
	else {
		
		if (choice = 'N' || 'n') {
			cout << "That is not a valid input";
			cout << "Would you like to replay? (Y or N)";
			cin >> choice;
			replay = false;
		}
	}
}



//This function will take player input.
void playerInput() {

	//Main part of the input function, will also take the players whos turn it is as a reminder.
	int input;
	cout << "It's " << player << "'s turn." << "Press the number of the field: ";
	cin >> input;

	//Full switch table to tell which player has input what character where.
	switch (input) {
	case 1: input == 1;
		//These parts of the switch table allows the program to check whether or not the field has already been used. If it has then it will make the player enter into another field.
		if (matrix[0][0] == '1')
			matrix[0][0] = player;

		else {
			cout << "Field is already in use! Please enter a different field: " << endl;
			playerInput();
		}
		break;
	case 2: input == 2;
		if (matrix[0][1] == '2')
			matrix[0][1] = player;
		else {
			cout << "Field is already in use! Please enter a different field: " << endl;
			playerInput();
		}
		break;
	case 3: input == 3;
		if (matrix[0][2] == '3')
			matrix[0][2] = player;
		else {
			cout << "Field is already in use! Please enter a different field: " << endl;
			playerInput();

		}
		break;
	case 4: input == 4;
		if (matrix[1][0] == '4')
			matrix[1][0] = player;
		else {
			cout << "Field is already in use! Please enter a different field: " << endl;
			playerInput();

		}
		break;
	case 5: input == 5;
		if (matrix[1][1] == '5')
			matrix[1][1] = player;
		else {
			cout << "Field is already in use! Please enter a different field: " << endl;
			playerInput();

		}
		break;
	case 6: input == 6;
		if (matrix[1][2] == '6')
			matrix[1][2] = player;
		else {
			cout << "Field is already in use! Please enter a different field: " << endl;
			playerInput();

		}
		break;
	case 7: input == 7;
		if (matrix[2][0] == '7')
			matrix[2][0] = player;
		else {
			cout << "Field is already in use! Please enter a different field: " << endl;
			playerInput();

		}
		break;
	case 8: input == 8;
		if (matrix[2][1] == '8')
			matrix[2][1] = player;
		else {
			cout << "Field is already in use! Please enter a different field: " << endl;
			playerInput();

		}
		break;
	case 9: input == 9;
		if (matrix[2][2] == '9')
			matrix[2][2] = player;
		else {
			cout << "Field is already in use! Please enter a different field: " << endl;
			playerInput();

		}
		break;


	}
}

//Function tells the program which player is active.
void playerToggle() {
	if (player == 'X')
		player = 'O';
	else
		player = 'X';
}


//Function will tell the program who wins, this is long winded and I would like to shorten it down at some point.
char winCondition() {

	//This block of if statements checks if characters matching 'X' are all on the same row.
	if (matrix[0][0] == 'X' && matrix[0][1] == 'X' && matrix[0][2] == 'X')
		return 'X';
	if (matrix[1][0] == 'X' && matrix[1][1] == 'X' && matrix[1][0] == 'X')
		return 'X';
	if (matrix[2][0] == 'X' && matrix[2][1] == 'X' && matrix[2][0] == 'X')
		return 'X';
	if (matrix[0][0] == 'X' && matrix[1][0] == 'X' && matrix[2][0] == 'X')
		return 'X';

	//This block of if statements checks if characters matching 'X' are all in the same column.
	if (matrix[0][0] == 'X' && matrix[1][0] == 'X' && matrix[2][0] == 'X')
		return 'X';
	if (matrix[0][1] == 'X' && matrix[1][1] == 'X' && matrix[2][1] == 'X')
		return 'X';
	if (matrix[0][2] == 'X' && matrix[1][2] == 'X' && matrix[2][2] == 'X')
		return 'X';

	//This block of if statements checks if characters mathching 'X' are all in the same diagonal line.
	if (matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == 'X')
		return 'X';
	if (matrix[2][0] == 'X' && matrix[1][1] == 'X' && matrix[0][2] == 'X')
		return 'X';


	//Player 2 Win conditions

	//This block of if statements checks if characters matching 'O' are all on the same row.
	if (matrix[0][0] == 'O' && matrix[0][1] == 'O' && matrix[0][2] == 'O')
		return 'O';
	if (matrix[1][0] == 'O' && matrix[1][1] == 'O' && matrix[1][2] == 'O')
		return 'X';
	if (matrix[2][0] == 'X' && matrix[2][1] == 'X' && matrix[2][2] == 'X')
		return 'X';


	//This block of if statements checks if characters matching 'O' are all in the same column.
	if (matrix[0][0] == 'O' && matrix[1][0] == 'O' && matrix[2][0] == 'O')
		return 'O';
	if (matrix[0][1] == 'O' && matrix[1][1] == 'O' && matrix[2][1] == 'O')
		return 'O';
	if (matrix[0][2] == 'O' && matrix[1][2] == 'O' && matrix[2][2] == 'O')
		return 'O';

	//This block of if statements checks if characters mathching 'O' are all in the same diagonal line.
	if (matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O')
		return 'O';
	if (matrix[2][0] == 'O' && matrix[1][1] == 'O' && matrix[0][2] == 'O')
		return 'O';

	

	return '/';
}

