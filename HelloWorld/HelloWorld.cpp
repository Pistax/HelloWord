// HelloWorld.cpp: This is the entry point of the program, containing the
// function main()

// Preprocessor directive(s)
#include <iostream> 
#include <limits>
#include <string>

int main() 
{
	std::cout << "Hello World!" << std::endl;
	std::cout << "What's your name?: ";

	// Simple input using getline() to get users name
	std::string UserName = "";
	std::getline(std::cin, UserName);

	// Getting users Age
	std::cout << "Hello " << UserName << ", how old are you?: ";
	int UserAge = 0;
	std::cin >> UserAge;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	// Simple conditional statements depending on users age
	if (UserAge <= 18)
		std::cout << "Wow, you're only " << UserAge << ", you still gotta' life ahead of you!" << std::endl;
	else if (UserAge > 70)
		std::cout << "I cant wait for your " << UserAge + 1 << "th birthday!" << std::endl;
	else
		std::cout << "Keep on growing, & keep on learning! Life aint' all about money." << std::endl;

	std::cout << "Press any character to exit...";
	std::cin.get();
	return 0;
}
