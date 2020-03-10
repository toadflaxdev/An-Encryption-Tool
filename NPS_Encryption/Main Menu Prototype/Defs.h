#ifndef MY_DEF_H
#define MY_DEF_H

// This is a declaration of your variable, which tells the linker this value
// is found elsewhere.  Anyone who wishes to use it must include global.h,
// either directly or indirectly.

#define std_con_out GetStdHandle(STD_OUTPUT_HANDLE)	// for adding colours to text

#define KEY_UP 72		// Key defines & codes
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define KEY_ENTER 13
#define KEY_ESCAPE 27


#endif