#include <iostream>
using namespace std;

class InsertionSort
{
public:
    void sort(int arr[], int size, int &comparisons, int &exchanges)
    {
        comparisons = 0;
        exchanges = 0;
        for (int i = 1; i < size; i++)
        {
            int key = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[j] > key)
            {
                arr[j + 1] = arr[j];
                j--;
                comparisons++;
                exchanges++;
            }
            arr[j + 1] = key;
            exchanges++;
        }
    }
};
int main()
{
    int size;
    cout << "Enter the size of the array" << endl;
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    InsertionSort obj;
    int comparisons, exchanges;
    obj.sort(arr, size, comparisons, exchanges);
    cout << "Sorted array is:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Number of comparisons: " << comparisons << endl;
    cout << "Number of exchanges: " << exchanges << endl;

    return 0;
}
