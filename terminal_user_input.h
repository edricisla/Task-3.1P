#ifndef TERMINAL_USER_INPUT
#define TERMINAL_USER_INPUT

#include <string>
using std::string;

/** A prompt can be placed within the brackets ("prompt").
 * reads string input from user, then writes user input */
string read_string(string prompt);

/** A prompt can be written between the crackets
 * reads input from reader, and returns it as an integer */
int read_integer(string prompt);

/** Prompt is written between brackets
 * read input from reader, then returns it as a double */
double read_double(string prompt);

#endif