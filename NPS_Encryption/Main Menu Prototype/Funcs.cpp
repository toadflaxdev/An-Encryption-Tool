#pragma once 
#include "Defs.h"
#include "Glob.h"
#include "Funcs.h"
#include <iostream>
#include <Windows.h>

// moving text to the middle
void moveToMiddle() {

	std::cout << "\n\n\n\n\n\n\n\n\n";
}

void MainMenu() {

	// [QUICK CHANGE, NOT THE BEST]
	// if the user has pressed UP or DOWN, and the option is within range, then move along
	if (UpWasPressed == false) {
		if (option < 2) {

			option++;
		}
	}

	UpWasPressed = false;		// reset our trigger back to false

	setcolor(white, black);
	// by default, option 1 is highlighted

	moveToMiddle();	// moves our menu down

	// Option "Encrypt NHS Number"
	if (option == 0) {

		std::cout << "				         ";
		titleItem[0] = "[NHS Encryption Tool]";
		std::cout << titleItem[0] << "\n\n";

		std::cout << "				          ";
		setcolor(black, white);
		std::cout << mainMenuItems[option] << std::endl;	// highlight selected option
		setcolor(white, black);
		std::cout << "				          ";
		std::cout << mainMenuItems[1] << std::endl;
		std::cout << "				          ";
		std::cout << mainMenuItems[2] << std::endl;

		std::cout << "\n\n\n";
		std::cout << "				           ";
		std::cout << "(version " << versionNumber << "";
	}

	// Option "GET NHS Number"
	if (option == 1) {

		std::cout << "				         ";
		titleItem[0] = "[NHS Encryption Tool]";
		std::cout << titleItem[0] << "\n\n";

		std::cout << "				          ";
		std::cout << mainMenuItems[0] << std::endl;
		std::cout << "				          ";
		setcolor(black, white);
		std::cout << mainMenuItems[option] << std::endl; // highlight selected option
		setcolor(white, black);
		std::cout << "				          ";
		std::cout << mainMenuItems[2] << std::endl;

		std::cout << "\n\n\n";
		std::cout << "				           ";
		std::cout << "(version " << versionNumber << "";
	}

	// Option "Exit Application"
	if (option == 2) {

		std::cout << "				         ";
		titleItem[0] = "[NHS Encryption Tool]";
		std::cout << titleItem[0] << "\n\n";


		std::cout << "				          ";
		std::cout << mainMenuItems[0] << std::endl;
		std::cout << "				          ";
		std::cout << mainMenuItems[1] << std::endl;
		std::cout << "				          ";
		setcolor(black, white);
		std::cout << mainMenuItems[option] << std::endl; // highlight selected option
		setcolor(white, black);

		std::cout << "\n\n\n";
		std::cout << "				           ";
		std::cout << "(version " << versionNumber << "";
	}

}

// setting colour
void setcolor(concol textcol, concol backcol)
{
	// we set the colour here
	int textColour = (int)textcol;
	int backColour = (int)backcol;
	textColour = textColour % 16;
	backColour = backColour % 16;
	unsigned short wAttributes = ((unsigned)backColour << 4) | (unsigned)textColour;
	SetConsoleTextAttribute(std_con_out, wAttributes);
}