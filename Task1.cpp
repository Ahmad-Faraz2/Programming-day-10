#include <iostream>
using namespace std;
void swap(int& a, int& b);
void sortArray(int arr[], int n);
bool canBeConsecutive(int arr[], int n);

int main() 
{
    int n;
    cout << "Array Length: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    bool result = canBeConsecutive(arr, n);
    cout << boolalpha << result << endl;

    return 0;

}

void swap(int& a, int& b) 
{
    int temp = a;
    a = b;
    b = temp;
}

void sortArray(int arr[], int n) 
{
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

bool canBeConsecutive(int arr[], int n) 
{
    sortArray(arr, n);

    for (int i = 0; i < n - 1; i++) 
    {
        if (arr[i] == arr[i + 1]) 
        {
            return false;
        }
    }

    for (int i = 0; i < n - 1; i++) 
    {
        if (arr[i + 1] - arr[i] != 1) 
        {
            return false;
        }
    }

    return true;
}