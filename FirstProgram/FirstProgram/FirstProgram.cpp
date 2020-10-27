// FirstProgram.cpp : Defines the entry point for the application.
//

#include "FirstProgram.h"

using namespace std;

// One line comment
/**
 * Multiple lines comment
 */
/* This is also a Multiple lines comment
 * dfgdfg
 * dfgdfg
 */

/**
 * This function outputs some stuff on the screen
 * @return
 */
int someothershit()
{ // Scope
    cout << 10 << endl;
    cout << "Hello my friend" << endl; // String literal
    return 0;
    cout << "Hello" << endl;
}

int main()
{ // Scope of a function
    // << and >> indicate streaming -> Steam of data
    cout << "When will you die?" << endl;
    int age = 0;
    cout << "What is your age? ";
    cin >> age;
    cout << "Your age is: " << age << endl; //  Chaining outputs
    
    int years_left = 100 - age;

    if(years_left >= 0) // Boolean Statement
    { // Scope of IF
        cout << "You will die in: " << years_left << " Years" << endl;
    }
    else { // Scope of ELSE
        cout << "Actually, I'm pretty sure you're dead..." << endl;
    }
    cout << "haha lol" << endl;
    return 0;

    // Some shit
    int x = 5; // Variable -> Stack. Int = 4 Byte
    char a = 'S'; // Char = 1 Byte

    x = x + 5; // Change variable value
    cout << x << endl;
    x = 20;
    cout << x << endl;

	cout << 5 << endl;
    cout << "Hello my friend";
    cout << 10 << endl;
    someothershit(); // A function call
	return 0;
}
