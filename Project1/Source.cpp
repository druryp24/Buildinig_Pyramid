//Pyramid Shape
//by:Painter Drury
//date: 9/30/24



#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
int main() {
    int row; //current row number
    int col; //current collum number
    int i; //allows for if a space or * should be place in given collum in given row
    int w; //changes i so it can be used for differing rows
    int q; // allows user to input number of rows desired
    int r; //calculates number of collums based on user input


    cout << "Number of rows: ";
    cin >> q; 

    r = (q * 2) + 1; //coverting numbers of rows to number of collums

    i = q + 1; //adjust so that i is in the middle of the collums
    w = 0;

    for (row = 1; row <= q; row++) {

        for (col = 1; col <= r; col++) {
            if (col < i || col > i + w) { //by adding w it allows for more * to be printed
                cout << " ";
            }
            else
                cout << "*";
        }
        cout << "\n"; //creates new row 
        w += 2; //with every new row 2 more more stars needed printed - consisten with adding the 2
        i--; //by subtracting one it will open up two more collums ,one to the left and one to the right, of the row above
    }
}