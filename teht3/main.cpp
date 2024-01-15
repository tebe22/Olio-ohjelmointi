#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void numberGame(int maxnum){

    srand(time(NULL));

    int randomNumber = rand() % maxnum +1;
    int guess;
    int laskuri = 0;

    do {
        cout << "Arvaa numeroa: ";
        cin >> guess;

        if (guess < randomNumber) {
            cout << "Liian pieni" << endl;
            laskuri += 1;
        } else if (guess > randomNumber) {
            cout << "Liian iso" << endl;
            laskuri += 1;
        } else {
            laskuri += 1;
            cout << "Oikea vastaus" << endl;
            cout << "arvasit " <<laskuri <<" kertaa"<< endl;
        }

    } while (guess != randomNumber);
}

int main()
{
    int maxnum;
    cout << "aseta isoin random luku: "<< endl;
    cin >> maxnum;
    numberGame(maxnum);

    return 0;
}

