#include <iostream>
#include "CoopGame.h"
#include "MainMenu.h"
using namespace std;

//Tic Tac Toe Game by Shawn Hickens(S16151719) Birmingham City University - C++ Programming for Games Engines(CMP5136)
/*This is the basis for my game and will make up most of the base code for the GUI additions to the game, most of the logic will be the same I will just need
* to change the 'cout' and 'cin' strings so that it can be printed to a proper screen.
*/

int n;

int main() {

	welcomeMessage();
	menuPrint();



	n = 0;
	
	//This is the main loop of the game and will just take the output for the win condition and print it to the player.
	while (replay = true) {
		while (1) { //This while loop will loop the game until all fields have been filled or a winner is found.

			cout << endl;
			n++;
			playerInput();
			Draw();
			if (winCondition() == 'X') {
				cout << "X Wins!" << endl;
				break;
			}
			else if (winCondition() == 'O') {
				cout << "O Wins!" << endl;
				break;
			}
			else if (winCondition() == '/' && n == 9) {
				cout << "It's a draw" << endl;
				break;
			}
			playerToggle();
			

		}
		system("pause");
		system("cls");
		menuPrint();
		
	}
	system("pause");
	return 0;
}
