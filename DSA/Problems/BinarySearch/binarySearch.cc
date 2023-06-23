// Given a sorted array which can contain repeated elements, and an element K, we need to find the frequency of a given element.

// arr = [0,1,1,1,1,2,2,2,2,3,4,4,4,5,10]
// key = 2
// output = 4

// Idea = upper_bound(key)[last occurence] - lower_bound(key)[first occruence]

#include <bits/stdc++.h>

using namespace std;

int lower_bound(vector<int> &arr, int key)
{
    int left = 0, right = arr.size() - 1;
    int ans = -1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            right = mid - 1;
        }
        else if (arr[mid] > key)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    return ans;
}

int upper_bound(vector<int> &arr, int key)
{
    int left = 0, right = arr.size() - 1;
    int ans = -1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            left = mid + 1;
        }
        else if (arr[mid] > key)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    return ans;
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {0, 1, 1, 1, 1, 2, 2, 2, 2, 3, 4, 4, 4, 5, 10};
    // cout << lower_bound(arr, 22);
    // cout << upper_bound(arr, 2);
    int freq = upper_bound(arr, 2) - lower_bound(arr, 2) + 1;
    cout << freq << endl;

    // STL
    // upper_bound() => will return iterator to next integer (+1)
    cout << upper_bound(arr.begin(), arr.end(), 2) - lower_bound(arr.begin(), arr.end(), 2);
    return 0;
}
