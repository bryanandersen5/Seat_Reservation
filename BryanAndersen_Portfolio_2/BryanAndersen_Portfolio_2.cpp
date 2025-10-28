// BryanAndersen_Portfolio_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int row;
char col;
string seats[5][6] = { {"E", "E", "E", "E", "E", "E"} , {"E", "E", "E", "E", "E", "E"} , {"E", "E", "E", "E", "E", "E"} , {"E", "E", "E", "E", "E", "E"}, {"E", "E", "E", "E", "E", "E"} };
char res = 'Y';
int price;
int total = 0;
int M = 0, R = 0;

void seatDisplay() {
    cout << "\n\t\t\tSeat Reservation System";
    cout << "\n\t\t*****************************************";
    cout << "\n\t\tA\tB\tC\tD\tE\tF";
    for (int i = 0; i < 5; i++) {
        cout << "\n   " << i + 1 << "\t\t";
        for (int j = 0; j < 6; j++) {
            cout << seats[i][j] << "\t";
        }
    }
    total = total + price;
    cout << "\nThe number of matinee seat/s purchased is " << M;
    cout << "\nThe number of regular seat/s purchased is " << R;
    cout << "\nThe total price is " << total;
}

//void reserveSeat(int row, char col) {
//    int colIndex = col - 'A';
//    if (row >= 1 && row <= 5 && colIndex >= 0 && colIndex <= 5) {
//        if (seats[row - 1][colIndex] == 'E') {
//            seats[row - 1][colIndex] = 'X';
//        }
//        else {
//            cout << "Seat " << row << col << " is already taken." << endl;
//        }
//    }
//}

int main()
{
    seatDisplay();
    cout << "\n\n";
    while (res == 'y' || res == 'Y') {
        cout << "Enter the row number using numbers from 1 to 5: ";
        cin >> row;
        if (row < 1 || row > 5) {
            cout << "Please type number 1 to 5: ";
            cin >> row;
        }
        cout << "\nEnter the column letter by entering letters A to F: ";
        cin >> col;
        col = toupper(col); // Convert input to uppercase for simplicity
        if (col < 'A' || col > 'F') {
            cout << "Please type letter A to F: ";
            cin >> col;
            col = toupper(col);
        }
        while (seats[row - 1][col - 'A'] == "X") {
            cout << "The seat is already reserved. Please reserve another seat." << endl;
            cout << "Enter the row number using numbers from 1 to 5: ";
            cin >> row;
            if (row < 1 || row > 5) {
                cout << "Invalid row number. Please type number 1 to 5: ";
                cin >> row;
            }
            cout << "Enter the column letter by entering letters A to F: ";
            cin >> col;
            col = toupper(col); // Convert input to uppercase for simplicity
            if (col < 'A' || col > 'F') {
                cout << "Invalid column letter. Please type letter A to F: ";
                cin >> col;
                col = toupper(col);
            }
        }

        int colIndex = col - 'A'; // Convert column letter to column index (0 to 5)
        seats[row - 1][colIndex] = "X"; // Subtract 1 from row to get the correct index

        if (row == 1) {
            M = M + 1;
            price = 20;
        }
        else {
            R = R + 1;
            price = 10;
        }

        seatDisplay();


        cout << "\n\nDo you want to reserve more seats (Y/N)? ";
        cin >> res;
        cout << "\n\n";
        while (res != 'Y' && res != 'y' && res != 'N' && res != 'n') {
            cout << "Please type Y/N: ";
            cin >> res;
            cout << "\n\n";
        }
        if (res == 'N' || res == 'n') {
            int n = 5; // The number of rows in the pattern

            for (int i = 1; i <= n; i++) {
                // Print "Thank you" i times in each row
                for (int j = 0; j < i; j++) {
                    cout << "Thank you";
                }
                cout << endl;
            }

            // Print "Thank you" n-1 times in each row
            for (int i = n - 1; i >= 1; i--) {
                for (int j = 0; j < i; j++) {
                    cout << "Thank you";
                }
                cout << endl;
            }

            return 0;
        }
    }
}