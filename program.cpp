#include "splashkit.h"
#include "terminal_user_input.h"
using namespace std;


double air_speed(double freq, double amp)
{
    const double STROUHAL = 0.33;
    double result;
    result = freq * amp / STROUHAL;
    return result;
}

void output_airspeed(string name, double freq, double amp)
{
    const double STROUHAL = 0.33;
    double speed;

    write(name + ": ");
    write_line(air_speed(freq, amp));
}

void output_force()
{
    write("Complete the following to calculate Force(N): ");
   
    double dmass, dacceleration;

    dmass = read_double("Enter Mass(kg): ");   
    dacceleration = read_double("Enter Acceleration(m/s^2): ");
    

    double fsum;

    fsum = dmass * dacceleration;
    write_line();
    write_line("Force(N)= ");
    write_line(fsum);
}
void write_options()
{
    write_line("Option 1: Calculate Airspeed");
    write_line();
    write_line("Option 2: Calculate Force");
    write_line();
    write_line("Option 3: Play! Guess the number");
}
void play_guessing_game()
{
    int target, guess;

    target = rnd(50) + 1;

    write_line("The magical number lies between 1 and 50");

    guess = read_integer("Enter guess: ");

    while ( guess != target )
    {
        if ( guess < target )
        {
            write_line("A little higher than " + to_string(guess));
        }
        else if ( guess > target )
        {
            write_line("Oh! A little less " + to_string(guess));
        }
    }
    write_line("Good Job! You got it");
}

void name_menu()
{
    string name;
    name = read_string("Please enter your name: ");
    if ( to_lowercase(name) == "edric" )
    {
        write_line("Welcome back Master.");
    }
    else if ( to_lowercase(name) == "alanna" )
    {
        write_line("Hiya bumbum");
    }
    else 
    {
        write_line("Beware you are trespassing!");
    }
    delay(2000);
}
void age_menu();
{
    int age;
    age = read_integer("Enter your age: ");
    if ( age <= 18 )
    {
        write_line("You're a wee lil one");
    }
    else if ( age >= 25 )
    {
        write_line("You'll age well like a fine wine!");
    }
    else ( age == 18 )
    {
        write_line("Cool you're" + to_string(age));
    }
    delay(2000);
}

void selection_menu()
{
    const double STROUHAL = 0.33;
    int option;
    double ufreq, uamp;
    string name, title;
    option = read_integer("Select option: ");

    switch(option)
    {
        case 1: 
            title = read_string("Enter bird name: ");
            ufreq = read_double("Enter frequency: ");
            uamp = read_double("Enter amplitude: ");

            output_airspeed(title, ufreq, uamp);
            break;
        case 2: 
            output_force();
            break;
        case 3:
            play_guessing_game();
            break;
    }
}
int main()
{
    const double STROUHAL = 0.33;
    //string name, title;
    //double ufreq, uamp;
    //int option, age;

    name_menu();

    age_menu();
    
    write_options();
    
    selection_menu();

    
    //output_airspeed("African Swallow", 15, 0.21);
    //output_airspeed("European Swallow", 14, 0.22);
    return 0;
}
