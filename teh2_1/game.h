#ifndef GAME_H
#define GAME_H
#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;


class Game{

public:
    Game(int max){
        maxNumber = max;
        srand(time(NULL));

        randomNumber = rand() % maxNumber +1;
    }
    ~Game(){}
    void play(){
        cout<< "object initialized with "<<maxNumber<<" as a maximum value"<<endl;

        do {

            cout << "Give Your guess between 1-10"<<endl;
            cin >> playerGuess;
            numOfGuesses ++;

            if (playerGuess < randomNumber) {
                cout << "Your guess is too small" << endl;

            } else if (playerGuess > randomNumber) {
                cout <<"Your guess is too big" << endl;

            } else {
                printGameResult();
            }


        } while (playerGuess != randomNumber);

    }
    void printGameResult(){
        cout << "Your guess is right = " <<playerGuess << endl;
        cout << "you guessed the right answer =  "<< playerGuess<< " with " <<numOfGuesses << " guesses " << endl;

    }

private:
    int maxNumber;
    int playerGuess;
    int randomNumber;
    int numOfGuesses;
};

#endif // GAME_H
