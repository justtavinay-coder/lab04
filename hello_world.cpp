#include <iostream>
#include <string>

int main()
{
// Read the user name from standard input.
std::string name;
std::cout<<"Enter your name: ";
std::cin>>name;

// Print the final personalized greeting.
std::cout<<"Hello world from "<<name<<std::endl;
return 0;
}
