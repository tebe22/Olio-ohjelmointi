#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));

    int randomNumber = rand() % 21;
    int guess;

    do {
        cout << "Arvaa numeroa: ";
        cin >> guess;

        if (guess < randomNumber) {
            cout << "Liian pieni" << endl;
        } else if (guess > randomNumber) {
            cout << "Liian iso" << endl;
        } else {
            cout << "Oikea vastaus" << endl;
        }

    } while (guess != randomNumber);

    return 0;
}
