#pragma once
#include <string>

#ifndef MY_GLOBALS_H
#define MY_GLOBALS_H

// This is a declaration of your variable, which tells the linker this value
// is found elsewhere.  Anyone who wishes to use it must include global.h,
// either directly or indirectly.


#pragma region 
extern char Filename[];
#pragma endregion Char

#pragma region 
extern std::string charSignature[];
extern std::string charHashArray[];
extern std::string charEncryptData;
extern std::string textBucket;
extern std::string finalUserText;
extern std::string encryptedString;
extern std::string getCharHashArray[];
extern std::string someValues[];
extern std::string nhsNumber;
extern std::string mainMenuItems[];		// list for main menu
extern std::string versionNumber;
extern std::string titleItem[];		// changes value depending on what title we are on.

/*						[Value table]

	A=0		B=1		C=2		D=3		E=4		F=5		G=6		H=7
	I=8		J=9		K=10	L=11	M=12	N=13	O=14	P=15
	Q=16	R=17	S=18	t=19	U=20	V=21	W=22
	X=23	Y=24	Z=25	0=26	1=27	2=28	3=29	4=30   5=31
	6=32	7=33	8=34	9=35
*/
#pragma endregion String

#pragma region 
extern int signatureCharLength;
extern int charHashLength;
extern int charHashLenghtPlusOne;
extern int trackCharCount;
extern int option;
extern int endIndex;
#pragma endregion Int

#pragma region 
extern bool charSignatureOK;
extern bool loopOver;
extern bool inMainMenu;
extern bool UpWasPressed;
#pragma endregion Bool






#endif