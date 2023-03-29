#include <iostream>
using namespace std;
class SelectionSort
{
public:
    void sort(int arr[], int size, int &comparisons, int &exchanges)
    {
        comparisons = 0;
        exchanges = 0;
        for (int i = 0; i < size - 1; i++)
        {
            int min_idx = i;
            for (int j = i + 1; j < size; j++)
            {
                comparisons++;
                if (arr[j] < arr[min_idx])
                {
                    min_idx = j;
                }
            }
            if (min_idx != i)
            {
                swap(arr[i], arr[min_idx]);
                exchanges++;
            }
        }
    }
};

int main()
{
    SelectionSort obj;
    int size;
    cout << "Enter size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter elements of the array: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    int comparisons, exchanges;
    obj.sort(arr, size, comparisons, exchanges);
    cout << "Sorted array is: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
    cout << "Number of comparisons: " << comparisons << endl;
    cout << "Number of exchanges: " << exchanges << endl;
    return 0;
}
