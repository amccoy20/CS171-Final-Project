#include<iostream>
#include<string>
using namespace std;
int welcome_instructions() {
	int ans;
	cout << "Welcome to Coordinator: the game that gives you the power to coach either the offense or defense to victory!" << endl;
	cout << "As the offensive or defensive coordinator, you will be able to determine the playcall and the computer will select" << endl; 
	cout << "it's own play in response. The outcome of the play will be determined by the quality of the playcall versus whatever" << endl;
	cout << "the computer has selected. You will only have control of the side of the ball in which you chose to coach. There will" << endl; 
	cout << "not be 4 quarters, a halftime, penalties, timeouts, or 2 minute warnings but the winner will be determined by the team" << endl;
	cout << "who leads after 10 posessions. Are you ready to play?(press 1)" << endl;
	cin >> ans;

	return ans;
}
int main()
{

}