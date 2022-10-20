#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <bits/stdc++.h>

using namespace std;

void getGameTitle() {
    string title = "Number Guesser";
    string version = "1.0.0";
    string author = "Saptarashi Majumdar";

    cout << title << " " << version << " by " << author << endl;
}

void getPlayerDetails() {
    string name;
    cout << "Please enter your name: ";
    cin >> name;
    cout << "Hello , " << name << " Let's play a game." << endl;
}

int generateRandomNum() {
        int num;
        srand(time(0));
        num = rand() % 10;
        return num;
}

bool isNumber(string s) {
                for (int i = 0; i < s.length(); i++){
                    if(isdigit(s[i]) == false) {
                        return false;
                    }
                    return true;
                }
            }

int main() {

    getGameTitle();

    getPlayerDetails();

    while(true) {

        int correctNum = generateRandomNum();
        int guess = 0;

        cout << "Guess a number between 1 and 10" << endl;
        // cin >> guess;

        while(guess != correctNum){
            string input;
            cin >> input;

            //Check if input is a number
            if(isNumber(input) == false) {
                cout << "Please enter an actual number." << endl;

                continue;
            }

            guess = stoi(input);

            if((int) guess != correctNum)  {
                cout << "Wrong number, please try again." << endl;
            }           
        }

         cout << "Correct, you have guessed it." << endl;

            cout << "Play Again? [Y or N]" << endl;

            string answer;

            cin >> answer;
            transform(answer.begin(), answer.end(), answer.begin(), :: toupper);

            if(answer == "Y") {
                continue;
            } else if (answer == "N") {
                return 0;
            } else {
                return 0;
            }
    }
    return 0;
}