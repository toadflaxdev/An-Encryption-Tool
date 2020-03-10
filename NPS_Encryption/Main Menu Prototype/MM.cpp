#pragma once
#include "Glob.h"
#include "Defs.h"
#include "Funcs.h"
#include <iostream>
#include <string>
#include <thread>
#include <Windows.h>
#include <conio.h>
#include <mmsystem.h>
#include <cstdlib>
#include <fstream>
#include <filesystem> 

using namespace std;

void setup() {

	disableHighlighting();
	disableMaximize();
	DisableResize();
	gameTitleWindow();
	hidecursor();
	hidecursor();

	system("mode 100,28");
}

void encrypt() {

	// Prompt User for NHS Number
	system("cls");
	std::cout << "\n\n\n\n\n\n\n\n\n\n";
	std::cout << "				          ";
	std::cout << "[Encrypt NHS Number]\n\n";
	std::cout << "				         ";
	std::cout << "NHS Number: ";
	std::cin >> nhsNumber;

	// We convert our username to a char array
	StringToArray();

	// At this point our char array has values and index of 0 to n. We now Fix this input with some fixed encryption strings
	// Our function will check each element in char array, and assign apprpriate encryption string to our FINAL string
	PutEncryptStringsTogether();

	// we sign the encrupted data
	addSignatureToCharString();

	// we send our final string to a text file
	SendStringToFile();

	// Display Feedback and Exit
	system("cls");
	std::this_thread::sleep_for(chrono::seconds(1));
	std::cout << "\n\n\n\n\n\n\n\n\n";
	std::cout << "				      ";
	std::cout << "[Successful Encryption]\n\n";
	std::cout << "				 ";
	std::cout << "Data sent to: ";
	setcolor(green, black);
	std::cout << """C:\\NPS_Encrypted_NHS\\";
	setcolor(white, black);
	std::this_thread::sleep_for(chrono::seconds(4));
	std::cout << "\n\n";
	std::cout << "				       ";
	std::cout << "Exiting Application...";
	std::this_thread::sleep_for(chrono::seconds(2));
	exit(0);		// EXIT

}

void decrypt() {
	// GET encrypted file and display

					// Get the string from file
	GetCharFromFile();

	// Strip the signature off the encrypted string
	checkCharSignature();

	// Check EACH "encrypted" string in the entire string
	charEncryptToArray();
	ArrayToText();

	// display appropriate text back to user
	DisplayTextAsString();

	// Send to Clipboard, and close "finalUserText"
	system("cls");
	std::this_thread::sleep_for(chrono::seconds(1));
	std::cout << "\n\n\n\n\n\n\n\n\n";
	std::cout << "				      ";
	std::cout << "[Successful decryption]\n\n";
	std::cout << "				     ";
	std::cout << "NHS Number is: ";
	setcolor(green, black);
	std::cout << finalUserText;		// Display Number
	setcolor(white, black);
	std::cout << ".";
	std::cout << "\n\n";
	std::cout << "				    ";
	std::cout << "(number copied to clipboard)";

	toClipboard(finalUserText);		// Copy number to clipboard

	std::this_thread::sleep_for(chrono::seconds(4));
	exit(0);		// EXIT	
}

int main() {

	setup();

	// we set main menu as true and load as this was the request
	if (inMainMenu == true) {
		--option;
		MainMenu();
	}

	do {

		int c = 0;

		while (1)
		{
			c = 0;

			switch ((c = _getch())) {

			case KEY_UP:

				#pragma region 
				// option does nothing if it is smaller than 0
				if (option <= 0) {

				}
				
				// moves up in every named menu list
				else if (inMainMenu == true){
					system("cls");
					--option;
					UpWasPressed = true;		// we record that UP was pressed (Alteration for NHS change)
					MainMenu();
				}
				#pragma endregion Key Up Actions 

				break;
			case KEY_DOWN:

				#pragma region 
				// option is never larger than the last index
				if (option >= endIndex) {

				}

				// go down on each menu list mentioned
				else if (inMainMenu == true) {
					system("cls");
					MainMenu();
				}

				break;
			case KEY_ENTER:

				if (option == 2 && inMainMenu == true) {
					return 0;		// Exit option, Exit the game.
				}

				else if (option == 0 && inMainMenu == true) {
					encrypt();		
				}

				else if (option == 1 && inMainMenu == true) {
					decrypt();
				}

				break;

			default:	// default input not registered, does nothing 
				break;

				
			}

		}
	}while (loopOver == false);

	system("pause");

	return 0;
}