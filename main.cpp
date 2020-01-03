#include <iostream>
#include <list>

using namespace std;

int main() 
{
    string spade = "\u2660";
    string heart = "\u2665";
    string club = "\u2663";
    string diamond = "\u2666";

    list<string> suits = {spade, heart, club, diamond};

    for (int i = 0; i < 4; i++)
    {
        cout << suits[i] << endl;
    }
    for_each(suits.begin(), suits.end())
    {
        
    }
    // cout << "\u2660" << endl;
    // cout << "\u2665" << endl;
    // cout << "\u2663" << endl;
    // cout << "\u2666" << endl;

    return 0;
}