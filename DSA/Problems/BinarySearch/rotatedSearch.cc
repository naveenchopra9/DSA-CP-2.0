// Write a function that takes input as an sorted array of distinct integers, which is rotated about a pivot point and finds the index of any given element

// arr = [7,9,10,1,2,3,4,5,6];
// element = 4

#include <bits/stdc++.h>

using namespace std;

int rotated_search(vector<int> &arr, int key)
{
    const int n = arr.size();
    int left = 0;
    int right = n - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[left] <= arr[mid])
        {
            // left
            if (key >= arr[left] and key <= arr[mid])
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        else
        {
            // right
            if (key >= arr[mid] and key <= arr[right])
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
    }

    return -1;
}

int main(int argc, char const *argv[])
{
    vector<int> arr{4, 5, 6, 7, 0, 1, 2, 3};
    int key = 0;

    cout << rotated_search(arr, key) << endl;
    return 0;
}
