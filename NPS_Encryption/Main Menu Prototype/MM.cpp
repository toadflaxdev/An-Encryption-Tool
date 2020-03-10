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
#include "ConsoleEdits.cpp"

Console getConsole;

using namespace std;

void hidecursor()
{
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO info;
	info.dwSize = 100;
	info.bVisible = FALSE;
	SetConsoleCursorInfo(consoleHandle, &info);
}

void pushDown() {
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n";
}

#pragma region
void startPause() {
	this_thread::sleep_for(chrono::seconds(1));
}
#pragma endregion Pause

void StringToArray() {

	// We place our input in a string we can use
	std::string FileMeasure = nhsNumber;

	// we make Temp equal to the size of the string
	int TempNumOne = FileMeasure.size();

	// we loop this many times
	for (int i = 0; i <= TempNumOne; i++)
	{
		Filename[i] = FileMeasure[i];
		//std::cout << Filename[i];
		//std::cout << std::endl;
	}
}

void PutEncryptStringsTogether() {

	// While i is smaller than the length of our string...
	for (int i = 0; i < static_cast<int>(nhsNumber.length()); i++) {

		// check each possible letter/number it could be.
		if (Filename[i] == 'a') {
			// and display encryption string in TABLE
			encryptedString = encryptedString + charHashArray[0] + "-";
		}

		else if (Filename[i] == 'b') {

			encryptedString = encryptedString + charHashArray[1] + "-";
		}

		else if (Filename[i] == 'c') {

			encryptedString = encryptedString + charHashArray[2] + "-";
		}

		else if (Filename[i] == 'd') {

			encryptedString = encryptedString + charHashArray[3] + "-";
		}

		else if (Filename[i] == 'e') {

			encryptedString = encryptedString + charHashArray[4] + "-";
		}

		else if (Filename[i] == 'f') {

			encryptedString = encryptedString + charHashArray[5] + "-";
		}

		else if (Filename[i] == 'g') {

			encryptedString = encryptedString + charHashArray[6] + "-";
		}

		else if (Filename[i] == 'h') {

			encryptedString = encryptedString + charHashArray[7] + "-";
		}

		else if (Filename[i] == 'i') {

			encryptedString = encryptedString + charHashArray[8] + "-";
		}

		else if (Filename[i] == 'j') {

			encryptedString = encryptedString + charHashArray[9] + "-";
		}

		else if (Filename[i] == 'k') {

			encryptedString = encryptedString + charHashArray[10] + "-";
		}

		else if (Filename[i] == 'l') {

			encryptedString = encryptedString + charHashArray[11] + "-";
		}

		else if (Filename[i] == 'm') {

			encryptedString = encryptedString + charHashArray[12] + "-";
		}

		else if (Filename[i] == 'n') {

			encryptedString = encryptedString + charHashArray[13] + "-";
		}

		else if (Filename[i] == 'o') {

			encryptedString = encryptedString + charHashArray[14] + "-";
		}

		else if (Filename[i] == 'p') {

			encryptedString = encryptedString + charHashArray[15] + "-";
		}

		else if (Filename[i] == 'q') {

			encryptedString = encryptedString + charHashArray[16] + "-";
		}

		else if (Filename[i] == 'r') {

			encryptedString = encryptedString + charHashArray[17] + "-";
		}

		else if (Filename[i] == 's') {

			encryptedString = encryptedString + charHashArray[18] + "-";
		}

		else if (Filename[i] == 't') {

			encryptedString = encryptedString + charHashArray[19] + "-";
		}

		else if (Filename[i] == 'u') {

			encryptedString = encryptedString + charHashArray[20] + "-";
		}

		else if (Filename[i] == 'v') {

			encryptedString = encryptedString + charHashArray[21] + "-";
		}

		else if (Filename[i] == 'w') {

			encryptedString = encryptedString + charHashArray[22] + "-";
		}

		else if (Filename[i] == 'x') {

			encryptedString = encryptedString + charHashArray[23] + "-";
		}

		else if (Filename[i] == 'y') {

			encryptedString = encryptedString + charHashArray[24] + "-";
		}

		else if (Filename[i] == 'z') {

			encryptedString = encryptedString + charHashArray[25] + "-";
		}

		else if (Filename[i] == '0') {

			encryptedString = encryptedString + charHashArray[26] + "-";
		}

		else if (Filename[i] == '1') {

			encryptedString = encryptedString + charHashArray[27] + "-";
		}

		else if (Filename[i] == '2') {

			encryptedString = encryptedString + charHashArray[28] + "-";
		}

		else if (Filename[i] == '3') {

			encryptedString = encryptedString + charHashArray[29] + "-";
		}

		else if (Filename[i] == '4') {

			encryptedString = encryptedString + charHashArray[30] + "-";
		}

		else if (Filename[i] == '5') {

			encryptedString = encryptedString + charHashArray[31] + "-";
		}

		else if (Filename[i] == '6') {

			encryptedString = encryptedString + charHashArray[32] + "-";
		}

		else if (Filename[i] == '7') {

			encryptedString = encryptedString + charHashArray[33] + "-";
		}

		else if (Filename[i] == '8') {

			encryptedString = encryptedString + charHashArray[34] + "-";
		}

		else if (Filename[i] == '9') {

			encryptedString = encryptedString + charHashArray[35] + "-";
		}

		else {
			
		system("cls");
			std::cout << "There was a problem encrypting your <CHAR> data...\nExiting Application...";
			std::this_thread::sleep_for(chrono::seconds(5));
			exit(0);
		}

	}

	// Encryption variable.
	//cout << encryptedString;

}

int random(int from, int to) {
	return rand() % (to - from + 1) + from;
}

void addSignatureToCharString() {

	// start random seed
	srand((int)time(0));

	// store our random number
	int randomNumberForSignature;

	// generate the number
	randomNumberForSignature = random(0, 4);

	// if it's this number, get first index of charSig
	if (randomNumberForSignature == 0) {
		encryptedString = encryptedString + charSignature[0];
	}

	else if (randomNumberForSignature == 1) {
		encryptedString = encryptedString + charSignature[1];
	}

	else if (randomNumberForSignature == 2) {
		encryptedString = encryptedString + charSignature[2];
	}

	else if (randomNumberForSignature == 3) {
		encryptedString = encryptedString + charSignature[3];
	}

	else if (randomNumberForSignature == 4) {
		encryptedString = encryptedString + charSignature[4];
	}

	else {
		system("cls");
		std::cout << "Error encrypting data: Code 44.\nExiting Application...";
		std::this_thread::sleep_for(chrono::seconds(1));
		exit(0);
	}
}

void SendStringToFile() {

	// Create dir
	std::filesystem::create_directories("C:\\NPS_Encrypted_NHS");

	// put encrypyedString to file
	ofstream myfile;
	myfile.open("C:\\NPS_Encrypted_NHS\\NHS_Encrypt.txt");
	myfile << encryptedString;
	myfile.close();

}

void checkCharSignature() {

	int signatureCheckLength = charEncryptData.length();										// get full length of encrypted string, place in signaturechecklength
	int signaturePoint = signatureCheckLength - signatureCharLength;							// with lenth, we minus the signature length
	string getSignature = charEncryptData.substr(signaturePoint, signatureCharLength);			// then, we start from the beginning of the POINT to the end
																								// getSignature is now equal to a 120 char string

	try {

		if (getSignature == charSignature[0]) {
			charSignatureOK = true;
		}

		else if (getSignature == charSignature[1]) {
			charSignatureOK = true;
		}

		else if (getSignature == charSignature[2]) {
			charSignatureOK = true;
		}

		else if (getSignature == charSignature[3]) {
			charSignatureOK = true;
		}

		else if (getSignature == charSignature[4]) {
			charSignatureOK = true;
		}

		else {
			throw 78;
		}
	}
	catch (int x) {

		system("cls");
		cout << "Encryption ERROR <CHAR>. Error code: " << x << "...(shutting down.)" << "\n";
		this_thread::sleep_for(chrono::seconds(5)); // exit?
		exit(0);
	}

}

void charEncryptToArray() {

	int signatureCutOff;
	int holdLength;
	string newEncryptData;
	int findIndex = 0;
	int moveUpArray = 0;

	// first, we get the length of our string variable

	//cout << "Data length: " << encryptData.length(); "\n";

	checkCharSignature();

	if (charSignatureOK == true) {

		// whatever the length is, we grab the entire string except the last 3 digits (depending on character size of signatures). This will cut off the signature.

		holdLength = charEncryptData.length();
		signatureCutOff = holdLength - signatureCharLength;			// signature is now equal to length minus 3

		//cout << "\nData without Signature: " << encryptData.substr(0, signatureCutOff) << std::endl;

		newEncryptData = charEncryptData.substr(0, signatureCutOff);

		// Now we want to place our data in an array. 

		for (int findIndex = 0; findIndex < static_cast<int>(newEncryptData.length()); findIndex = findIndex + charHashLenghtPlusOne) {			// prev: 2 = 127 (amount of strings)    3 = 128 (string plus 1)

			//cout << "\n\nFor testing: " << newEncryptData.substr(findIndex, stringLengthForEach);

			// we then store each number into a slot.

			getCharHashArray[moveUpArray] = newEncryptData.substr(findIndex, charHashLength);

			moveUpArray++;
			trackCharCount++;

		}

		//cout << "\n\n--------------\n\n";
		// Lets print our array and check it works

		for (int i = 0; i < 9; i++) {

			//cout << getHashArray[i];
			//cout << ",";
		}
	}

	charSignatureOK = false;  // reset

	/*cout << "Element 1: " << getCharHashArray[0] << '\n';
	cout << "Element 2: " << getCharHashArray[1] << '\n';
	cout << "Element 3: " << getCharHashArray[2] << '\n';
	cout << "Element 4: " << getCharHashArray[3] << '\n';
	cout << "Element 5: " << getCharHashArray[4] << '\n';
	cout << "Element 6: " << getCharHashArray[5] << '\n';
	cout << "Element 7: " << getCharHashArray[6] << '\n';
	cout << "Element 8: " << getCharHashArray[7] << '\n';
	cout << "Element 9: " << getCharHashArray[8] << '\n';
	cout << "Element 10: " << getCharHashArray[9] << '\n';
	cout << "Element 11: " << getCharHashArray[10] << '\n';
	cout << "Element 12: " << getCharHashArray[11] << '\n';
	cout << "Element 13: " << getCharHashArray[12] << '\n';
	cout << "Element 14: " << getCharHashArray[13] << '\n';
	cout << "Element 15: " << getCharHashArray[14] << '\n';
	cout << "Element 16: " << getCharHashArray[15] << '\n';
	cout << "Element 17: " << getCharHashArray[16] << '\n';
	cout << "Element 18: " << getCharHashArray[17] << '\n';
	cout << "Element 19: " << getCharHashArray[18] << '\n';
	cout << "Element 20: " << getCharHashArray[19] << '\n';*/

	//system("pause");

}

void GetCharFromFile() {

	// Create a text string, which is used to output the text file
	string myText;

	// Read from the text file
	ifstream MyReadFile("C:\\NPS_Encrypted_NHS\\NHS_Encrypt.txt");

	// Use a while loop together with the getline() function to read the file line by line
	while (getline(MyReadFile, myText)) {

		// Output the text from the file

	}

	// put our Data into the .exe
	charEncryptData = myText;

}

void ArrayToText() {

	int i = 0;
	int j = 0;

	while (trackCharCount > 0) {

		/*if (getHashArray[i] == "emp") {
			break;
		}*/

		try {

			// check if our first encrypted string is equal to our first fixed Hash Array value
			if (getCharHashArray[i] == charHashArray[0]) {
				someValues[j] = "a";		// if it is, we know 0 = a
			}

			// if not, we check "1" which we know is "b"
			else if (getCharHashArray[i] == charHashArray[1]) {
				someValues[j] = "b";
			}

			else if (getCharHashArray[i] == charHashArray[2]) {
				someValues[j] = "c";
			}

			else if (getCharHashArray[i] == charHashArray[3]) {
				someValues[j] = "d";
			}

			else if (getCharHashArray[i] == charHashArray[4]) {
				someValues[j] = "e";
			}

			else if (getCharHashArray[i] == charHashArray[5]) {
				someValues[j] = "f";
			}

			else if (getCharHashArray[i] == charHashArray[6]) {
				someValues[j] = "g";
			}

			else if (getCharHashArray[i] == charHashArray[7]) {
				someValues[j] = "h";
			}

			else if (getCharHashArray[i] == charHashArray[8]) {
				someValues[j] = "i";
			}

			else if (getCharHashArray[i] == charHashArray[9]) {
				someValues[j] = "j";
			}

			else if (getCharHashArray[i] == charHashArray[10]) {
				someValues[j] = "k";
			}

			else if (getCharHashArray[i] == charHashArray[11]) {
				someValues[j] = "l";
			}

			else if (getCharHashArray[i] == charHashArray[12]) {
				someValues[j] = "m";
			}

			else if (getCharHashArray[i] == charHashArray[13]) {
				someValues[j] = "n";
			}

			else if (getCharHashArray[i] == charHashArray[14]) {
				someValues[j] = "o";
			}

			else if (getCharHashArray[i] == charHashArray[15]) {
				someValues[j] = "p";
			}

			else if (getCharHashArray[i] == charHashArray[16]) {
				someValues[j] = "q";
			}

			else if (getCharHashArray[i] == charHashArray[17]) {
				someValues[j] = "r";
			}

			else if (getCharHashArray[i] == charHashArray[18]) {
				someValues[j] = "s";
			}

			else if (getCharHashArray[i] == charHashArray[19]) {
				someValues[j] = "t";
			}

			else if (getCharHashArray[i] == charHashArray[20]) {
				someValues[j] = "u";
			}

			else if (getCharHashArray[i] == charHashArray[21]) {
				someValues[j] = "v";
			}

			else if (getCharHashArray[i] == charHashArray[22]) {
				someValues[j] = "w";
			}

			else if (getCharHashArray[i] == charHashArray[23]) {
				someValues[j] = "x";
			}

			else if (getCharHashArray[i] == charHashArray[24]) {
				someValues[j] = "y";
			}

			else if (getCharHashArray[i] == charHashArray[25]) {
				someValues[j] = "z";
			}

			else if (getCharHashArray[i] == charHashArray[26]) {
				someValues[j] = "0";
			}

			else if (getCharHashArray[i] == charHashArray[27]) {
				someValues[j] = "1";
			}

			else if (getCharHashArray[i] == charHashArray[28]) {
				someValues[j] = "2";
			}

			else if (getCharHashArray[i] == charHashArray[29]) {
				someValues[j] = "3";
			}

			else if (getCharHashArray[i] == charHashArray[30]) {
				someValues[j] = "4";
			}

			else if (getCharHashArray[i] == charHashArray[31]) {
				someValues[j] = "5";
			}

			else if (getCharHashArray[i] == charHashArray[32]) {
				someValues[j] = "6";
			}

			else if (getCharHashArray[i] == charHashArray[33]) {
				someValues[j] = "7";
			}

			else if (getCharHashArray[i] == charHashArray[34]) {
				someValues[j] = "8";
			}

			else if (getCharHashArray[i] == charHashArray[35]) {
				someValues[j] = "9";
			}


			else {

				throw 88;
			}

			// ++i and j, minus trackCount.

			++j;
			++i;
			--trackCharCount;
		}
		catch (int x) {

			system("cls");
			cout << "Encryption ERROR <CHAR>. Error code: " << x << "...(shutting down.)" << "\n";
			this_thread::sleep_for(chrono::seconds(5)); // exit?
			exit(0);
		}
	}

}

void DisplayTextAsString() {

	for (int i = 0; i < 20; i++) {

		textBucket = someValues[i];
		finalUserText = finalUserText + textBucket;
		textBucket = "";

	}

	//cout << "Your text is: " << finalUserText << "\n";
	//system("pause");

}

void charValueResets() {

	// string resets
	nhsNumber = "";
	encryptedString = "";
	charEncryptData = "";
	textBucket = "";
	finalUserText = "";

	// bools resets
	charSignatureOK = false;

	// array resets

	for (int i = 0; i < 20; i++)
		getCharHashArray[i] = "";

	for (int j = 0; j < 20; j++)
		someValues[j] = "";


}

void toClipboard(const std::string& s) {

	OpenClipboard(0);
	EmptyClipboard();

	HGLOBAL hg = GlobalAlloc(GMEM_MOVEABLE, s.size() + 1);
	if (!hg) {
		CloseClipboard();
		return;
	}

	memcpy(GlobalLock(hg), s.c_str(), s.size() + 1);
	GlobalUnlock(hg);
	SetClipboardData(CF_TEXT, hg);
	CloseClipboard();
	GlobalFree(hg);
}

int main() {

	#pragma region Screen Res
	//setDefConsoleSize();
	getConsole.disableHighlighting();
	getConsole.disableMaximize();
	getConsole.DisableResize();
	getConsole.gameTitleWindow();
	getConsole.hidecursor();
	system("mode 100,28");
	hidecursor();
	#pragma endregion Build Edits 

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

			// (endHit) main = 5, options = 3
			
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

			case KEY_LEFT:
				break;
			case KEY_RIGHT:

				break;
			case KEY_ENTER:

				if (option == 2 && inMainMenu == true) {
					return 0;		// Exit option, Exit the game.
				}

				#pragma region 
				// ENCRYPT NHS NUMBER
				else if (option == 0 && inMainMenu == true) {

					// Prompt User for NHS Number
					system("cls");
					cout << "\n\n\n\n\n\n\n\n\n\n";
					cout << "				          ";
					std::cout << "[Encrypt NHS Number]\n\n";
					cout << "				         ";
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
					cout << "\n\n\n\n\n\n\n\n\n";
					cout << "				      ";
					std::cout << "[Successful Encryption]\n\n";
					cout << "				 ";
					cout << "Data sent to: ";
					setcolor(green, black);
					cout << """C:\\NPS_Encrypted_NHS\\";
					setcolor(white, black);
					std::this_thread::sleep_for(chrono::seconds(4));
					cout << "\n\n";
					cout << "				       ";
					cout << "Exiting Application...";
					std::this_thread::sleep_for(chrono::seconds(2));
					exit(0);		// EXIT

				}
				#pragma endregion Encrypt String

				#pragma region 
				else if (option == 1 && inMainMenu == true) {
					
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
					cout << "\n\n\n\n\n\n\n\n\n";
					cout << "				      ";
					std::cout << "[Successful decryption]\n\n";
					cout << "				     ";
					cout << "NHS Number is: "; 
					setcolor(green, black);
					cout << finalUserText;		// Display Number
					setcolor(white, black);
					cout << ".";
					cout << "\n\n";
					cout << "				    ";
					cout << "(number copied to clipboard)";

					toClipboard(finalUserText);		// Copy number to clipboard

					std::this_thread::sleep_for(chrono::seconds(4));
					exit(0);		// EXIT	
				}
				#pragma endregion Decrypt String

				break;
			case KEY_ESCAPE: 

				break;
			default:	// default input not registered, does nothing 
				break;

				
			}

		}
	}while (loopOver == false);

	system("pause");
	return 0;
}