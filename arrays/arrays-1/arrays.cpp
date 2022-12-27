#include <iostream>

using namespace std;

int main() {
    int a0[10];
    cout << "Test 0\n" << endl;
    cout << a0[3] << endl; // Prints garbage value

    int a1[10] = {0}; // All elements will be initialized to 0 as well like the first element
    cout << "\nTest 1\n" << endl;
    cout << a1[1] << endl;
    cout << a1[2] << endl;
    cout << a1[3] << endl; // All are zeros

    int a2[10] = {1, 2, 3}; // The remaining elements except the first three would be 0
    cout << "\nTest 2\n" << endl;
    cout << a2[1] << endl;
    cout << a2[3] << endl; // Prints zero

    int a3[] = {1, 2, 3}; // Array size not specified
    cout << "\nTest 3\n" << endl;
    cout << a3[1] << endl;
    cout << a3[2] << endl;
    cout << a3[5] << endl; // Prints garbage

    string sports[4]{"Cricket", "Football", "Handball"}; // Linear array of strings
    cout << "\nTest 4\n" << endl;
    cout << sports[2] << endl;
    cout << sports[3] << endl;
    cout << sports[5] << endl; // The second and third one print garbage

    return 0;
}