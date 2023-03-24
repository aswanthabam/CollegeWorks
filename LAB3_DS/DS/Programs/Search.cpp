#include <iostream>
using namespace std;

class LinearSearch
{
    int *array, size;

public:
    LinearSearch(int *a, int n)
    {
        array = a;
        size = n;
    }
    void search(int key)
    {

        int i = 0, found = 0, location, comp = 0;
        cout << "Searching '" << key << "' with Linear Search Algorithm ..." << endl;
        cout << "-----------------------------------------" << endl;
        while (i < size)
        {
            comp++;
            if (array[i] == key)
            {
                found = 1;
                location = i;
                break;
            }
            else
            {
                i++;
            }
        }
        if (found)
            cout << key << " found at index " << location << " (" << location + 1 << "'th position)" << endl;
        else
            cout << "Not Found!" << endl;
        cout << "No of comparisons using Linear Search is " << comp << endl;
    }
};
class BinarySearch
{
    int *array, size;

public:
    BinarySearch(int *a, int n)
    {
        array = a;
        size = n;
    }
    void search(int key)
    {
        int i = 0, j = size - 1, found = 0, m, location, comp = 0;
        cout << "Searching '" << key << "' with Binary Search Algorithm ..." << endl;
        cout << "-----------------------------------------" << endl;
        while (i <= j)
        {
            comp++;
            m = ((i + j) / 2);
            if (array[m] == key)
            {
                found = 1;
                location = m;
                break;
            }
            else if (array[m] > key)
            {
                j = m - 1;
            }
            else if (array[m] < key)
            {
                i = m + 1;
            }
        }
        if (found)
            cout << key << " found at index " << location << " (" << location + 1 << "'th position)" << endl;
        else
            cout << "Not Found!" << endl;
        cout << "No of comparisons using Binary Search is " << comp << endl;
    }
};
int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, n = 10, key;
    cout << "Array is : ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl
         << "Enter key to search: ";
    cin >> key;
    BinarySearch *bi = new BinarySearch(a, n);
    LinearSearch *li = new LinearSearch(a, n);
    li->search(key);
    cout << endl;
    bi->search(key);
    return 0;
}