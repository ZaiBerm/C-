#include <iostream>
#include <vector>

using namespace std;

vector <char> opmind = { 's', 'p', 'r', 'r', 's', 'p' };

int main()
{
    char input;
    int iterator = 0;
    int your_score = 0;
    int opscore = 0;
    


    while (true)
    {
        char opguess = opmind[iterator];

        cout << "your score: " << your_score << "\t" << "opponent's score: " << opscore << endl << endl;
        if (your_score == 5)
        {
            cout << "\nYOU WIN!!!" << endl;
            break;
        }
        else if (opscore == 5)
        {
            cout << "\nYOU LOSE :(" << endl;
            break;
        }


        do
        {
            cout << "r, p s: ";
            cin >> input;
        } while (input != 'r' && input != 'p' && input != 's');
        

        cout << "\nyou: " << input << "\t" << "opponent: " << opguess << endl;

        switch (input)
        {
        case 'r':

            switch (opguess)
            {
            case 'r':
                cout << "its a tie!" << endl;
                break;
            case 's':
                cout << "its your point!" << endl;
                your_score++;
                break;
            case 'p':
                cout << "its your opponent's point!" << endl;
                opscore++;
                break;
            }
            break;

        case 'p':

            switch (opguess)
            {
            case 'p':
                cout << "its a tie!" << endl;
                break;
            case 'r':
                cout << "its your point!" << endl;
                your_score++;
                break;
            case 's':
                cout << "its your opponent's point!" << endl;
                opscore++;
                break;
            }
            break;

        case 's':

   

            switch (opguess)
            {
            case 's':
                cout << "its a tie!" << endl;
                break;
            case 'p':
                cout << "its your point!" << endl;
                your_score++;
                break;
            case 'r':
                cout << "its your opponent's point!" << endl;
                opscore++;
                break;
            }
            break;

        }
        cout << endl;

        iterator++;
        opmind.push_back(input);
    }

}