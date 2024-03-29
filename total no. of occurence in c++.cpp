#include <iostream>
#include <algorithm>
using namespace std;
int first(int arr[], int size, int key)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    int a = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            a = mid;
            e = mid - 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return a;
}
int last(int arr[], int size, int key)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    int a = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            a = mid;
            s = mid + 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return a;
}
int main()
{
    int size;
    cout << "enter size";
    cin >> size;
    int arr[size];
    cout << "enter element of array";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + size);
    int key;
    cout << "enter key";
    cin >> key;
    int n = first(arr, size, key);
    int m = last(arr, size, key);
    cout << (m - n) + 1 << endl;
}