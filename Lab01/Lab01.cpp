// Lab01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{
	int num, guess, lives = 10;
	bool lose = false;
	srand(time(NULL)); 

	num = rand() % 1000 + 1;

	cout << "- GUESS THE NUMBER - " << "\n" << endl;

	do {

		if (lives > 0)
		{
			cout << num << endl;
			cout << "Lives remaining: " << lives << endl;
			cout << "enter a number between 0 - 100:   ";
			cin >> guess;
			cout << "\n";

			if (guess > num)
			{
				cout << "TOO HIGH!  TRY AGAIN! \n" << endl;
				lives--;
			}

			if (guess < num)
			{
				cout << "TOO LOW!   TRY AGAIN! \n" << endl;
				lives--;
			}

			else
				cout << "CORRECT! \n  YOU WIN!" << endl;
		}

		else
		{
			cout << "YOU LOSE! \n The number was: " << num << endl;
			//system("pause");
			lose = true;
		}

	}
	 while (guess != num && lose != true );
	system("PAUSE");

	//CHANGES
	//MORE CHANGES 
    return 0;
}

