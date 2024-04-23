#include <iostream>
#include <string>

using namespace std;

inline int generateRandomNumber(int min, int max)
{
    srand(time(NULL));
    int random = min + rand() % (max - min + 1);
    return random;
};

int main()
{
    int guess, min, max, totalGuesses = 0;
    cout << "Enter range for a random number : \n";
    do
    {
        cout<<"Enter Minimum : ";

        cin >> min;
        if (min >= 0)
        {
            break;
        }
        cout << "Minimum must ba a positive number !" << endl;
    } while (1);
    do
    {
        cout<<"Enter Maximum : ";
        cin >> max;
        if (max >= 0)
        {
            if (max <= min )
            {
                cout << "Maximum must b 1 digit greater than Minimum" << endl;
                continue;
            }
            else
            {
                break;
            }
        }

        cout << "Maximum must ba a positive number !" << endl;

    } while (1);
    int randomNumber = generateRandomNumber(min, max);
    cout<<"Lets check how long it will take you the guess the right number ! ."<<endl;
    do
    {
        // cout << randomNumber << " Guess a Number : ";
        cout <<  endl<<" Guess a Number : ";
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

    cout << "******************************************" << endl;
    cout << "\t\t Winner !!!!" << endl;
    cout << "\t\t Total Guess : " << totalGuesses << endl;
    cout << "******************************************" << endl;

    return 0;
}