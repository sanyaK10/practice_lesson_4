#include <iostream>
using namespace std;
int main()
{
    //number 1
    int counter = 0;
    int number;
    cout << "Enter number: ";
    cin >> number;
    while (counter <= number) {
        cout << counter <<'\n';
        counter++;
    }
    //number 2
    int mezha1;
    int mezha2;
    cout << "Enter limit: ";
    cin >> mezha1;
    cout << "the second: ";
    cin >> mezha2;
    if (mezha1 > mezha2) {
        while (mezha2 <= mezha1) {
            cout << mezha2 << '\n';
            ++mezha2;
        }
    }
    else if (mezha1 < mezha2) {
        while (mezha1 <= mezha2) {
            cout << mezha1 << '\n';
            ++mezha1;
        }
    }
    else {
        cout << mezha1;
    }

    //number 3
    int limit1;
    int limit2;
    int suma = 0;
    cout << "Enter limit: ";
    cin >> limit1;
    cout << "the second: ";
    cin >> limit2;
    if (limit1 > limit2) {
        while (limit2 <= limit1) {
            suma += limit2;
            ++limit2;
        }
        cout << suma << '\n';
    }
    else if (limit1 < limit2) {
        while (limit1 <= limit2) {
            suma += limit1;
            ++limit1;
        }
        cout << suma << '\n';
    }
    else {
        cout << limit1;
    }

    //number 4
    int sumaa = 0;
    int numberr;
    cout << "Enter number: ";
    cin >> numberr;
    while (numberr != 0) {
        sumaa += numberr;
        cout << "Enter number:";
        cin >> numberr;
    }
    cout << sumaa << '\n';

    //number 5
    srand(time(NULL));
    int min = 1;
    int max = 501;
    int rand_num = rand() % (max - min + 1) + min;
    int numberrr;
    int stat = 0;

    cout << "Enter number: ";
    cin >> numberrr;

    while (numberrr != rand_num) {
        stat++;

        if (numberrr > rand_num) {
            cout << "number is bigger\n";
        }
        else {
            cout << "number is smaller\n";
        }

        cout << "Enter number: ";
        cin >> numberrr;
    }

    stat++;
    cout << "You won! You needed " << stat << " attempts";
    //number 6
    float numer;
    int con = 0;
    int choose1;
    int choose2;
    short continuea;

    while (con == 0) {
        cout << "Choose your currency: UAH - 1, USD - 2, EUR - 3: ";
        cin >> choose1;

        cout << "Choose the currency to convert to: UAH - 1, USD - 2, EUR - 3: ";
        cin >> choose2;

        cout << "Enter sum: ";
        cin >> numer;

        if (choose1 == 1 && choose2 == 1) {
            cout << numer;
        }
        else if (choose1 == 1 && choose2 == 2) {
            cout << numer / 44;
        }
        else if (choose1 == 1 && choose2 == 3) {
            cout << numer / 51;
        }
        else if (choose1 == 2 && choose2 == 1) {
            cout << numer * 44;
        }
        else if (choose1 == 2 && choose2 == 2) {
            cout << numer;
        }
        else if (choose1 == 2 && choose2 == 3) {
            cout << numer * 0.88;
        }
        else if (choose1 == 3 && choose2 == 1) {
            cout << numer * 51;
        }
        else if (choose1 == 3 && choose2 == 2) {
            cout << numer / 0.88;
        }
        else if (choose1 == 3 && choose2 == 3) {
            cout << numer;
        }
        else {
            cout << "Incorrect currency!";
        }

        cout << "\nYou want to continue? If yes, press 1, if not, press 2: ";
        cin >> continuea;

        switch (continuea) {
        case 1:
            continue;
        case 2:
            con = 1;
            break;
        default:
            cout << "Incorrect choice!";
            con = 1;
        }
    }
}