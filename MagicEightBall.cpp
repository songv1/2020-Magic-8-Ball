#include <iostream>
using namespace std; 
#include <stdlib.h>
#include <ctime>

int main()
{
	cout << "Welcome to the Magic 8 Ball, where all your questions may be answered." << std::endl; 
	cout << "What would you like to know the answer to? Type your question here." << std::endl; 

	std::string user_input; 
	cin >> user_input; 

	cout << "This is what the Magic 8 Ball has to say..." << std::endl; 

	int result = (rand() % 20) + 1; 

	switch(result){
		case 1:
			cout << "It is certain." << std::endl;
			break;
		case 2:
			cout << "It is decidedly so." << std::endl;
			break;
		case 3:
			cout << "Without a doubt." << std::endl;
			break;
		case 4:
			cout << "Yes - definately." << std::endl;
			break;
		case 5:
			cout << "You may rely on it." << std::endl;
			break;
		case 6:
			cout << "As I see it, yes." << std::endl;
			break;
		case 7:
			cout << "Most likely." << std::endl;
			break;
		case 8:
			cout << "Outlook good." << std::endl;
			break;
		case 9:
			cout << "Yes." << std::endl;
			break;
		case 10:
			cout << "Signs point to yes." << std::endl;
			break;
		case 11:
			cout << "Reply hazy, try again." << std::endl;
			break;
		case 12:
			cout << "Ask again later." << std::endl;
			break;
		case 13:
			cout << "Better not tell you now." << std::endl;
			break;  
		case 14:
			cout << "Cannot predict now." << std::endl;
			break;  
		case 15:
			cout << "Concentrate and ask again." << std::endl;
			break;
		case 16:
			cout << "Don't count on it." << std::endl;
			break; 
		case 17:
			cout << "My reply is no." << std::endl;
			break;  
		case 18:
			cout << "My sources say no." << std::endl;
			break;  
		case 19:
			cout << "Outlook not so good." << std::endl;
			break; 
		case 20:
			cout << "Very doubtful." << std::endl;
			break;                
	}	

}