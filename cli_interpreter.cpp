#include <iostream>
#include <string>
#include <fstream>
using namespace std;

/**
Program intended to provide command line interactivity with the EZ language
*/
int main(int argc, char* argv[])
{
    bool has_quit = false; 

    while(!(has_quit))
    {
        // Defining input with c++ version of class
        string input;
        
        // Ouptuts "EZ>" to stdout using OS stream directly
        std::cout << "EZ>";

        // Waiting until newline to read next user command
        std::getline(std::cin, input, '\n');

        if  (input == ":q") 
        {
            has_quit= true;
        }
    }
    return 0;
}