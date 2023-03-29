#include <iostream>
using namespace std;
class search
{
    int a[10], n;

public:
    void getdata();
    void sequential_search(int);
    void binary_search(int);
    void swap(int *x, int *y);
    void bubble_sort();
};
void search::bubble_sort()
{
    int i, j;
    for (i = n - 1; i > 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(&a[j], &a[j + 1]);
            }
        }
    }
}
void search::swap(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}
void search::getdata()
{
    cout << "Enter the number of elements in the array:";
    cin >> n;
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
void search::sequential_search(int key)
{
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            cout << "Element found at position " << i + 1 << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Element not found\n";
    }
}
void search::binary_search(int key)
{

    int low = 0, high = n - 1, mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (a[mid] == key)
        {
            cout << "Element found in the array";
            return;
        }
        else if (a[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    cout << "Element not found\n";
}
int main()
{
    search s;
    int key, ch;
    s.getdata();
    cout << "Enter the element to be searched:";
    cin >> key;
    cout << "Enter 1 for sequential search \nEnter 2 for binary search( Selecting this option sorts the array in ascending order ):";
    cin >> ch;
    switch (ch)
    {
    case 1:
        s.sequential_search(key);
        break;
    case 2:
        s.bubble_sort();
        s.binary_search(key);
        break;
    default:
        cout << "Invalid choice\n";
    }
    return 0;
}
