#pragma once 
#include "Defs.h"
#include "Glob.h"
#include "Funcs.h"
#include <iostream>
#include <fstream>
#include <filesystem>
#include <thread>
#include <Windows.h>

using namespace std;   // for chrono

// moving text to the middle
void moveToMiddle() {

	std::cout << "\n\n\n\n\n\n\n\n\n";
}

// Our Main Menu
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

// Hides User Cursor
void hidecursor()
{
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO info;
	info.dwSize = 100;
	info.bVisible = FALSE;
	SetConsoleCursorInfo(consoleHandle, &info);
}

// Unable to resize screen
void DisableResize()
{
	/*
	It only disable resizing by dragging the edge of windows. By the way, WS_SIZEBOX is the same as WS_THICKFRAME because of

	#define WS_SIZEBOX WS_THICKFRAME
	*/

	HWND hWnd = GetConsoleWindow();
	::SetWindowLong(hWnd, GWL_STYLE, GetWindowLong(hWnd, GWL_STYLE) & ~WS_SIZEBOX);

}

// Display console title
void gameTitleWindow() {

	SetConsoleTitle("NPS Encryption Tool");
}

// Maximize button disabled
void disableMaximize() {

	// https://stackoverflow.com/questions/46145256/disable-maximize-button-c-console-application

	HWND hwnd = GetConsoleWindow();
	DWORD style = GetWindowLong(hwnd, GWL_STYLE);
	style &= ~WS_MAXIMIZEBOX;
	SetWindowLong(hwnd, GWL_STYLE, style);
	SetWindowPos(hwnd, NULL, 0, 0, 0, 0, SWP_NOSIZE | SWP_NOMOVE | SWP_FRAMECHANGED);
}

// unable to highlight text in application
void disableHighlighting() {
	DWORD prev_mode;
	GetConsoleMode(hInput, &prev_mode);
	SetConsoleMode(hInput, ENABLE_EXTENDED_FLAGS |
		(prev_mode & ~ENABLE_QUICK_EDIT_MODE));
}

// Pushes some text down
void pushDown() {
	std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n";
}

// converts our string to an array
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

// Puts our encrypted strings together
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

// Random number generation for signature
int random(int from, int to) {
	return rand() % (to - from + 1) + from;
}

// Adds a signature to our string
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

// Send our string to a file @ location
void SendStringToFile() {

	// Create dir
	std::filesystem::create_directories("C:\\NPS_Encrypted_NHS");

	// put encrypyedString to file
	ofstream myfile;
	myfile.open("C:\\NPS_Encrypted_NHS\\NHS_Encrypt.txt");
	myfile << encryptedString;
	myfile.close();

}

// Check that our signature is valid
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

// From encrypted data, to array
void charEncryptToArray() {

	int signatureCutOff;
	int holdLength;
	string newEncryptData;
	int findIndex = 0;
	int moveUpArray = 0;

	// first, we get the length of our string variable

	checkCharSignature();

	if (charSignatureOK == true) {

		// whatever the length is, we grab the entire string except the last 3 digits (depending on character size of signatures). This will cut off the signature.

		holdLength = charEncryptData.length();
		signatureCutOff = holdLength - signatureCharLength;			// signature is now equal to length minus 3

		newEncryptData = charEncryptData.substr(0, signatureCutOff);

		// Now we want to place our data in an array. 

		for (int findIndex = 0; findIndex < static_cast<int>(newEncryptData.length()); findIndex = findIndex + charHashLenghtPlusOne) {			// prev: 2 = 127 (amount of strings)    3 = 128 (string plus 1)

			// we then store each number into a slot.

			getCharHashArray[moveUpArray] = newEncryptData.substr(findIndex, charHashLength);

			moveUpArray++;
			trackCharCount++;

		}
	}

	charSignatureOK = false;  // reset

	//system("pause");

}

// Get encrypted string from file
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

// With our stored values, let's confirm these strings
void ArrayToText() {

	int i = 0;
	int j = 0;

	while (trackCharCount > 0) {

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
			this_thread::sleep_for(chrono::seconds(5));
			exit(0);
		}
	}

}

// We throw our data into a string
void DisplayTextAsString() {

	for (int i = 0; i < 20; i++) {

		textBucket = someValues[i];
		finalUserText = finalUserText + textBucket;
		textBucket = "";

	}
}

// Value resets if we plan on looping
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

// copies a STRING to user clipboard
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