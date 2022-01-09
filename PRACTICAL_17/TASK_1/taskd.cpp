#include <bits/stdc++.h>
using namespace std;

void printvector(vector<int> v)
{
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); ++it)
        cout << *it << " ";
    cout << '\n';
}
void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << '\n';
}
int main()
{
    // creating a Array
    int arr[] = {2, 7, 5, 1, 8, 3, 3, 4};
    // Converting a array into vector
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> vec(arr, arr + n);
    // sorting an vector
    cout << "\nPrinting vector before sorting : \n";
    printvector(vec);
    sort(vec.begin(), vec.end());
    cout << "\nPrinting vector after sorting : \n";
    printvector(vec);
    // Reversing a vector
    reverse(vec.begin(), vec.end());
    cout << "\nPrinting vector after Reversing : \n";
    printvector(vec);
    cout << "\nPrinting max and min element of vector : \n";
    cout << "\nMax element is : " << *(max_element(vec.begin(), vec.end())) << "\nMin Element of vector is : " << *(min_element(vec.begin(), vec.end())) << endl;
    // counting  occurrence of an element
    cout << "\noccurrence of an 3 in vector :" << count(vec.begin(), vec.end(), 3) << endl;
    sort(arr, arr + n);
    cout << "\nPrinting array after sorting :\n";
    printArray(arr, n);
    cout << "\nUsing Binary Search for finding 50 in an Array : \n ";
    if (binary_search(arr, arr + n, 50))
    {
        cout << "\n50 Exist in the Array \n";
    }
    else
    {
        cout << "\n50 Doesn't Exist in the Array\n";
    }
    return 0;
}