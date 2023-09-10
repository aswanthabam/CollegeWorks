#include <iostream>
using namespace std;
class search
{
    int a[10], n;

public:
    void getdata()
    {
        cout << "Enter size of array:";
        cin >> n;
        cout << "Enter elements of array: ";
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
    }
    void sequential_search(int key)
    {
        cout << "Searching using sequential search ...." << endl;
        cout << "------------------------------------" << endl;
        int flag = 0;
        int comp = 0;
        for (int i = 0; i < n; i++)
        {
            comp++;
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
        cout << "No of comparisons using sequential search : " << comp << endl;
    }
    void binary_search(int key)
    {
        cout << "Searching using binary search ..." << endl;
        cout << "------------------------------------" << endl;
        cout << "Array is sorted in ascending order!" << endl;
        int low = 0, high = n - 1, mid, found = 0, comp = 0;
        while (low <= high)
        {
            mid = (low + high) / 2;
            comp++;
            if (a[mid] == key)
            {
                cout << "Element found at position " << mid + 1 << endl;
                found = 1;
                break;
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
        if (!found)
            cout << "Element not found\n";
        cout << "No of comparisons using binary search : " << comp << endl;
    }
    void swap(int *x, int *y)
    {
        int t = *x;
        *x = *y;
        *y = t;
    }
    void bubble_sort()
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
};
int main()
{
    search s;
    int key, ch;
    s.getdata();
    cout << "Enter the element to be searched: ";
    cin >> key;
    s.sequential_search(key);
    s.bubble_sort(); // Sort before binary search
    s.binary_search(key);
    return 0;
}
