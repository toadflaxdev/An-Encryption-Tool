#pragma once

#include <windows.h>

#ifndef MY_FUNCTIONS_H
#define MY_FUNCTIONS_H

// This is a declaration of your variable, which tells the linker this value
// is found elsewhere.  Anyone who wishes to use it must include global.h,
// either directly or indirectly.

enum concol
{
	// we are able to pick between 16 colours to text or background
	black = 0,
	dark_blue = 1,
	dark_green = 2,
	dark_aqua, dark_cyan = 3,
	dark_red = 4,
	dark_purple = 5, dark_pink = 5, dark_magenta = 5,
	dark_yellow = 6,
	dark_white = 7,
	gray = 8,
	blue = 9,
	green = 10,
	aqua = 11, cyan = 11,
	red = 12,
	purple = 13, pink = 13, magenta = 13,
	yellow = 14,
	white = 15
};

// moving text to the middle
void moveToMiddle();

// Our Main Menu
void MainMenu();

// setting colour
void setcolor(concol textcol, concol backcol);

// Hides cursor
void hidecursor();

// Unable to resize screen
void DisableResize();

// Display console title
void gameTitleWindow();

// Maximize button disabled
void disableMaximize();

// unable to highlight text in application
void disableHighlighting();

// Pushes some text down
void pushDown();

// converts our string to an array
void StringToArray();

// Puts our encrypted strings together
void PutEncryptStringsTogether();		// Algorithm subject to change.

// Random number generation for signature
int random(int from, int to);

// Adds a signature to our string
void addSignatureToCharString();

// Send our string to a file @ location
void SendStringToFile();

// Check that our signature is valid
void checkCharSignature();

// From encrypted data, to array
void charEncryptToArray();

// Get encrypted string from file
void GetCharFromFile();

// With our stored values, let's confirm these strings		// Algorithm subject to change.
void ArrayToText();

// We throw our data into a string
void DisplayTextAsString();

// Value resets if we plan on looping
void charValueResets();

// copies a STRING to user clipboard
void toClipboard(const std::string& s);



#endif