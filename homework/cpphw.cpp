#include <iostream>
using namespace std;


// PART I
// tasque 1 (I wasted so much time on this shit)
int main()
{
    while (true) {
        char fig;
        cout << "Choose a figure to print out (a-j, z to exit) >>> ";
        cin >> fig;
        switch (fig)
        {
        case 'a':
            for (int i = 0; i < 10; i++) {
                for (int j = 0; j < i; j++) {
                    cout << "   ";
                }
                for (int j = 0; j < 10 - i; j++) {
                    cout << " * ";
                }
                cout << endl;
            }
            break;
        case 'b':
            for (int i = 0; i < 10; i++) {
                for (int j = 0; j < i; j++) {
                    cout << " * ";
                }
                for (int j = 0; j < 10 - i; j++) {
                    cout << "   ";
                }
                cout << endl;
            }
            break;
        case 'c':
            for (int i = 0; i < 5; i++) {
                for (int j = 0; j < i; j++)
                    cout << "   ";
                for (int j = 0; j < 10 - 2 * i; j++)
                    cout << " * ";
                for (int j = 0; j < i; j++)
                    cout << " ";
                cout << endl;
            }
			cout << "\n\n\n\n\n";
            break;
        case 'd':
            cout << "\n\n\n\n\n";
            for (int i = 0; i < 5; i++) {
                for (int j = 0; j < 4 - i; j++)
                    cout << "   ";
                for (int j = 0; j < 2 * i + 2; j++)
                    cout << " * ";
                for (int j = 0; j < 4 - i; j++)
                    cout << " ";

                cout << endl;
            }
            break;
        case 'e':
            for (int i = 0; i < 5; i++) {
                for (int j = 0; j < i; j++)
                    cout << "   ";
                for (int j = 0; j < 10 - 2 * i; j++)
                    cout << " * ";
                for (int j = 0; j < i; j++)
                    cout << "   ";
                cout << endl;
            }
            for (int i = 0; i < 5; i++) {
                for (int j = 0; j < 4 - i; j++)
                    cout << "   ";
                for (int j = 0; j < 2 * i + 2; j++)
                    cout << " * ";
                for (int j = 0; j < 4 - i; j++)
                    cout << "   ";
                cout << endl;
            }
            break;
        case 'f':
            for (int i = 0; i < 4; i++) {
                for (int j = 0; j <= i; j++)
                    cout << " * ";
                for (int j = 0; j < (3 - i) * 2; j++)
                    cout << "   ";
                for (int j = 0; j <= i; j++)
                    cout << " * ";
                cout << endl;
            }

            for (int i = 2; i >= 0; i--) {
                for (int j = 0; j <= i; j++)
                    cout << " * ";
                for (int j = 0; j < (3 - i) * 2; j++)
                    cout << "   ";
                for (int j = 0; j <= i; j++)
                    cout << " * ";
                cout << endl;
            }
            break;
        case 'g':
            for (int i = 0; i < 5; i++) {
                for (int j = 0; j <= i; j++)
                    cout << " * ";
                cout << endl;
            }
            for (int i = 3; i >= 0; i--) {
                for (int j = 0; j <= i; j++)
                    cout << " * ";
                cout << endl;
            }
            break;
        case 'h':
            for (int i = 0; i < 5; i++) {
                cout << "            ";
                for (int j = 0; j < 4 - i; j++)
                    cout << "   ";
                for (int j = 0; j <= i; j++)
                    cout << " * ";
                cout << endl;
            }
            for (int i = 3; i >= 0; i--) {
                cout << "            ";
                for (int j = 0; j < 4 - i; j++)
                    cout << "   ";
                for (int j = 0; j <= i; j++)
                    cout << " * ";
                cout << endl;
            }

            break;
        case 'i':
            for (int i = 0; i < 10; i++) {
                for (int j = 0; j < 10 - i; j++) {
                    cout << " * ";
                }
                for (int j = 0; j < i; j++) {
                    cout << "   ";
                }
                cout << endl;
            }
            break;
		case 'j':
            for (int i = 0; i < 10; i++) {
                for (int j = 0; j < 10 - i; j++) {
                    cout << "   ";
                }
                for (int j = 0; j < i; j++) {
                    cout << " * ";
                }
                cout << endl;
            }
            break;
		case 'z':
			cout << "BABAI LIL BOI" << endl;
			return 0;
    default:
      cout << "Oh HELL nah bruh you're not fucking up my entire fucking work that I \nlost THREE HOURS on little bro I wish I could just send you burning in hell-" << endl;
			cout << "Sorry, wrong input. Try again." << endl;
			cout << ":3" << endl;
      break;
        }
    }
}


// PART II
// tasque 1
int main() {
    int numbah;
    cout << "Hiya! Enter the number and I will do some shenanigans on it :3 >>> ";
    cin >> numbah;
    int answer;

    cout << "\nDo you want me to:";
    cout << "\n0. Exit?";
    cout << "\n1. Count digits?";
    cout << "\n2. Sum digits?";
    cout << "\n3. Print out the average of digits?";
    cout << "\n4. Count the zeros in the number?";

    do {
        cout << "\nEnter your choice >>> ";
        cin >> answer;

        switch (answer) {
        case 0:
            cout << "\nBABAI! :3" << endl;
            break;
        case 1: 
        {
            int count = 0, temp = abs(numbah);
            if (temp == 0) count = 1;
            while (temp != 0) {
                temp /= 10;
                count++;
            }
            cout << "\nThere are " << count << " digits in the number!" << endl;
            break;
        }
        case 2: 
        {
            int sum = 0, temp = abs(numbah);
            do {
                sum += temp % 10;
                temp /= 10;
            } while (temp != 0);
            cout << "\nThe sum of the digits is " << sum << "!" << endl;
            break;
        }
        case 3: 
        {
            int sum = 0, count = 0, temp = abs(numbah);
            do {
                sum += temp % 10;
                temp /= 10;
                count++;
            } while (temp != 0);
            double average = static_cast<double>(sum) / count;
            cout << "\nThe average of the digits is " << average << "!" << endl;
            break;
        }
        case 4: 
        {
            int count = 0, temp = abs(numbah);
            if (temp == 0) count = 1;
            while (temp != 0) {
                if (temp % 10 == 0) count++;
                temp /= 10;
            }
            cout << "\nThere are " << count << " zeros in the number!" << endl;
            break;
        }
        default:
            cout << "\nInvalid choice, please try again." << endl;
            break;
        }
    } while (answer != 0);
}

// tasque 2 (VERSION 1 - self-adjusting row amount)
int main()
{
    int cell;
    cout << "Enter the scale of a cell: ";
    cin >> cell;
    int rows = (cell * 8) / 4;
    for (int i = 0; i < rows/2; i++)
    {
        for (int j = 0; j < 4; j++) 
        {
            for (int k = 0; k < cell; k++)
            {
                cout << "*";
            }
            for (int k = 0; k < cell; k++)
            {
                cout << "-";
            }
        }
        cout << endl;
        cout << endl;
    }
    for (int i = 0; i < rows / 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k < cell; k++)
            {
                cout << "-";
            }
            for (int k = 0; k < cell; k++)
            {
                cout << "*";
            }
        }
        cout << endl;
        cout << endl;
    }
}

// (VERSION 2 - no self-adjust)
int main()
{
    int cell;
    cout << "Enter the scale of a cell: ";
    cin >> cell;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++) 
        {
            for (int k = 0; k < cell; k++)
            {
                cout << "*";
            }
            for (int k = 0; k < cell; k++)
            {
                cout << "-";
            }
        }
        cout << endl;
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k < cell; k++)
            {
                cout << "-";
            }
            for (int k = 0; k < cell; k++)
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}
// exactly like example showed btw, but I doubt it was ANYTHING like a chessboard :P
