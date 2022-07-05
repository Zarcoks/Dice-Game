#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand((unsigned int) time(0)); // permet une veritable utilisation de random
    cout << "Welcome to my c++ dice game !" << endl << "You have to get a score more important than the IA wich what you play." << endl;
    cout << "Your only weapon is chance, so good luck ! ^^" << endl;
    cout << "\n are you ready little player? :D" << endl;
    cout << "--> ";

    string unusefull_variable;
    getline(cin, unusefull_variable);

    cout << "Fine, lets do this !" << endl;
    cout << "Roll the dices please." << endl;
    cout << "--> ";
    getline(cin, unusefull_variable);

    int player_score = rand()%12 + 1;
    int IA_score = rand()%12 + 1;

    cout << "Your score is " << player_score << endl;
    cout << "And IA score is " << IA_score << endl;

    if (player_score > IA_score) { cout << "You won !"; }
    else if (player_score < IA_score) { cout << "You lose !"; }
    else { cout << "It's draw !"; }


}