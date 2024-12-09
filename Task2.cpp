#include <iostream>
using namespace std;

int numberofRotations(string directions[], int n);

int main() 
{
    int n;
    cout << "Enter the number of directions: ";
    cin >> n;

    string directions[n];
    cout << "Enter the directions (right/left): ";
    for (int i = 0; i < n; i++) {
        cin >> directions[i];
    }

    int result = numberofRotations(directions, n);
    cout << "Number of full rotations: " << result << endl;

    return 0;
}


int numberofRotations(string directions[], int n) 
{
    int totalRotations = 0;

    for (int i = 0; i < n; i++) 
    {
        if (directions[i] == "right") 
        {
            totalRotations += 90;
        } 
        else if (directions[i] == "left") 
        {
            totalRotations -= 90;
        }
    }

    return abs(totalRotations) / 360;
}