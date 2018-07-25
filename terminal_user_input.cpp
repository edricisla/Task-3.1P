#include "splashkit.h"

string read_string(string prompt)
{
    string result;

    write(prompt);
    result = read_line();

    return result;
}
int read_integer(string prompt)
{
    int value;

    write(prompt);
    value = convert_to_integer(read_line());
    
    return value;
}
double read_double(string prompt)
{
    double other;
    
    write(prompt);
    other = convert_to_double(read_line());

    return other;
}