#include <iostream>
using namespace std;

// Recursive function to display the face values of digits
void findFaceValues(int number) {
    // Base case: if the number is 0, return
    if (number == 0) 
        return;

    // Recursive call to process the rest of the number
    findFaceValues(number / 10);

    // Display the face value of the current digit
    cout << number % 10 << " ";
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // Handle negative numbers
    if (number < 0) {
        cout << "Face values of the entered number: -";
        number = -number; // Make the number positive for processing
    } else {
        cout << "Face values of the entered number: ";
    }

    // Call the recursive function
    findFaceValues(number);

    cout << endl;
    return 0;
}
