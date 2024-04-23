#include <iostream>
#include <string>

using namespace std;

inline int generateRandomNumber()
{
    srand(time(NULL));
    int random = (rand() % 12) + 10;
    return random;
};

int main()
{

    int randomNumber = generateRandomNumber();
    int guess;
    cout << "Guess " << randomNumber << " \n";
    int totalGuesses = 0;

    do
    {
        cout << "Guess the Number : ";
        cin >> guess;
        ++totalGuesses;

        if (guess == randomNumber)
        {
            break;
        }

        if (guess > randomNumber)
        {
            if (guess < (randomNumber + 5))
            {
                cout << "To Close but High" << endl;
            }
            else
            {
                cout << "To High" << endl;
            }
        }

        if (guess < randomNumber)
        {
            if (guess >= (randomNumber - 5))
            {
                cout << "To Close but Low" << endl;
            }
            else
            {
                cout << "To Low" << endl;
            }
        }

    } while (guess != randomNumber);

    cout << "Winner !!!!" << endl;

    cout << "Total Guess : "<< totalGuesses << endl;

    return 0;
}