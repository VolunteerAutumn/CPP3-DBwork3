#include <iostream>
using namespace std;

// PART I
// tasque 1
int main()
{
	int num;
	cout << "Enter a number >>> ";
	cin >> num;
	int i = 0;
	while (i <= num)
	{
		cout << i << ", ";
		i++;
	}
}

// tasque 2
int main()
{
	int start, end;
	cout << "Enter two numbers separated with space >>> ";
	cin >> start >> end;
	if (start > end) {
		int temp = start;
		start = end;
		end = temp;
	}

	int num = start;
	while (num <= end) {
		cout << num << ", ";
		num++;
	}

	cout << "\n";
	num = start;
	while (num <= end) {
		if (num % 2 == 0) {
			cout << num << ", ";
		}
		num++;
	}
	cout << "\n";
	num = start;
	while (num <= end) {
		if (num % 2 != 0) {
			cout << num << ", ";
		}
		num++;
	}

	cout << "\n";
	num = start;
	while (num <= end) {
		if (num % 7 == 0) {
			cout << num << ", ";
		}
		num++;
	}
}

// tasque 3
int main()
{
	int start, end;
	cout << "Enter two numbers separated with space >>> ";
	cin >> start >> end;
	if (start > end) {
		int temp = start;
		start = end;
		end = temp;
	}

	int num = start;
	int sum{ 0 };
	while (num <= end) {
		sum = sum + num;
		num++;
	}
	cout << "Sum of integers between " << start << " and " << end << " is " << sum << "." << endl;
}

// tasque 4
int main()
{
	int numbah = 1;
	int sum = 0;
	cout << "Hello!\n";
	do
	{
		cout << "Enter the number, and I will ad it to the sum (0 to exit) >>> ";
		cin >> numbah;
		if (numbah != 0) {
			sum = sum + numbah;
		}
		else {
			break;
		}
	} while (numbah != 0);
	cout << "The sum of numbers you have entered: " << sum << endl;
}

//PART II
// tasque 1
int main()
{
	srand(time(0));
	int target = rand() % 50;0;
	int guess = 1;
	int guessamount = 0;
	cout << "Guess the number between 1 and 500! (0 to exit)" << endl;
	while (guess != 0) {
		cout << "Enter da guess >>> ";
		cin >> guess;
		if (guess > target) {
			cout << "Too big!" << endl;
			guessamount++;
		}
		else if (guess < target) {
			cout << "To little!" << endl;
			guessamount++;
		}
		else {
			cout << "You win!\n";
			cout << "It took you " << guessamount << " guesses to guess the numuber!" << endl;
			break;
		}
	}
}

// tasque 2
int main()
{
    int user_sum = 1;
    char user_currency, currency;
    double dollars_in_euro = 1.17;
    double dollars_in_pound = 1.34;
    double dollarsum = 0;
    double finsum = 0;
    do 
    {
        cout << "Hello!\nEnter the sum of currency you want to convert (0 to quit):\n>>> ";
        cin >> user_sum;

        if (user_sum == 0) {
            break;
        }

        cout << "What currency is it? ($/E/P) >>> ";
        cin >> user_currency;

        cout << "What currency do you want to convert it to? ($/E/P) >>> ";
        cin >> currency;

        switch (user_currency)
        {
        case '$':
            dollarsum = user_sum;
            break;
        case 'E':
            dollarsum = user_sum * dollars_in_euro;
            break;
        case 'P':
            dollarsum = user_sum * dollars_in_pound;
            break;
        default:
            cout << "Unknown input currency!\n";
            continue;
        }

        switch (currency)
        {
        case '$':
            finsum = dollarsum;
            break;
        case 'E':
            finsum = dollarsum / dollars_in_euro;
            break;
        case 'P':
            finsum = dollarsum / dollars_in_pound;
            break;
        default:
            cout << "Unknown target currency!\n";
            continue;
        }

        cout << user_sum << " " << user_currency
            << " = " << finsum << " " << currency << "\n\n";
    } while (user_sum!=0);
}
