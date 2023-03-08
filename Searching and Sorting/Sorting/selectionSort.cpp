#include <iostream>
using namespace std;
#include <vector>

//Selection Sort-->We select the minimum element and swap it with first index for each iteration.
//Best,Average and Worst Case Time Complexity is O(n^2);
void selectionSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        // swap(arr[min],arr[i]);
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

int main()
{
    vector<int> arr = {113, 46, 24, 52, 20, 9};
    selectionSort(arr);
    cout << "Afer sorting the array : " << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}
