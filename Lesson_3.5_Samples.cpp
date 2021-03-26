/*
Lesson 3.5 Samples
Pawelski
3/26/2021
Samples for switch blocks.
*/

#include <iostream>
#include <string>
#include <time.h>
using namespace std;

int main()
{
    // Example 1
    // This a bad example as it would only be useful in extremely specific circumstances.
    int num = 2;
    switch (num)
    {
        case 1:
            cout << "1\n";
        case 2:
            cout << "2\n";
        case 3:
            cout << "3\n";
    }
    cout << "\n";

    // Example 2
    int day = 4;
    switch (day)
    {
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break;
    }
    cout << "\n\n";

    // Example 3
    srand(time(0));
    int suit, face;
    suit = rand() % 4;
    face = rand() % 13;
    string card = "";
    switch (face)
    {
        case 0:
            card += "Ace";
            break;
        case 1:
            card += "Two";
            break;
        case 2:
            card += "Three";
            break;
        case 3:
            card += "Four";
            break;
        case 4:
            card += "Five";
            break;
        case 5:
            card += "Six";
            break;
        case 6:
            card += "Seven";
            break;
        case 7:
            card += "Eight";
            break;
        case 8:
            card += "Nine";
            break;
        case 9:
            card += "Ten";
            break;
        case 10:
            card += "Jack";
            break;
        case 11:
            card += "Queen";
            break;
        case 12:
            card += "King";
            break;
    }
    switch (suit)
    {
        case 0:
            card += " of Clubs";
            break;
        case 1:
            card += " of Spades";
            break;
        case 2:
            card += " of Hearts";
            break;
        case 3:
            card += " of Diamonds";
            break;
    }
    cout << card << "\n\n";

    // Example 4
    day = 4;
    switch (day)
    {
        case 6:
            cout << "Today is Saturday.";
            break;
        case 7:
            cout << "Today is Sunday.";
            break;
        default:
            cout << "Looking forward to the weekend...";
    }
    cout << "\n\n";

    // Example 5
    char letter;
    cout << "Enter a lowercase letter >> ";
    cin >> letter;
    switch (letter)
    {
        case 'a':
            cout << "apple";
            break;
        case 'e':
            cout << "egg";
            break;
        case 'i':
            cout << "ice";
            break;
        case 'o':
            cout << "orange";
            break;
        case 'u':
            cout << "udon";
            break;
        default:
            cout << "Yuck, a consonant...";
            break;
    }
    cout << "\n";
    return 0;
}
