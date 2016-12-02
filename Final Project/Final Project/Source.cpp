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
	cout << "who leads after 10 posessions. Are you ready to play?(press 0)" << endl;
	cin >> ans;

	return ans;
}
int menu() {
	int choice;
	cout << "Let's play! Would you like to be the offensive or defensive coordinator? Remember you can only coach one side of the" << endl;
	cout << "ball for the entire game (Press 1 for offensive coordinator and 2 for defensive coordinator)." << endl;
	cin >> choice;

	return choice;
}
int offensive_playbook() {
	int offensive_playcall = 0;
	cout << "Alright coach, what is the playcall?" << endl;
	cout << "Inside run(1),outside run(2),read option(3),quarterback run(4),running back pitch(5), short pass(6),medium pass(7)" << endl;
	cout << "long pass(8), screen pass(9), play action pass(10), Hail - Mary(11), RB pitch pass(trick play)(12),Reciever reverse(13)" << endl;
	cout << "or flee flicker(14)." << endl;

	return offensive_playcall;
}
int defensive_playbook()
{
	int defensive_playcall = 1;
	cout << "Alright coach, what is the playcall?" << endl;
	cout << "Man coverage(1), Cover 2(2), Cover 3(3), Cover 4(4), Middle Linebacker Blitz(5), Outside Linebacker Blitz(6), Safety Blitz(7)" << endl;
	cout << "Cornerback Blitz(8), Goal line defense(9), or Prevent Defense(10)." << endl;

	return defensive_playcall;
}

int main()
{
	int answer = 0;
	answer = welcome_instructions();
	if (answer == 0) {
		menu();
		if (answer = 1) {
			offensive_playbook();


		}
		else if (answer = 2) {
			defensive_playbook();

		}
		else {
			cout << "Sorry, I didn't understand your response." << endl;
		}
	}
	else {
		cout << "Sorry I didn't understand your request." << endl;
	}
}