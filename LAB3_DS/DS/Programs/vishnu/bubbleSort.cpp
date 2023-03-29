#include <iostream>
using namespace std;
class BubbleSort
{
public:
    void sort(int arr[], int size, int &comparisons, int &exchanges)
    {
        comparisons = 0;
        exchanges = 0;
        bool swapped;
        for (int i = 0; i < size - 1; i++)
        {
            swapped = false;
            for (int j = 0; j < size - i - 1; j++)
            {
                comparisons++;
                if (arr[j] > arr[j + 1])
                {
                    swap(arr[j], arr[j + 1]);
                    exchanges++;
                    swapped = true;
                }
            }
            if (!swapped)
            {
                break;
            }
        }
    }
};
int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    BubbleSort obj;
    int comparisons, exchanges;
    obj.sort(arr, size, comparisons, exchanges);
    cout << "Sorted array is: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Number of comparisons: " << comparisons << endl;
    cout << "Number of exchanges: " << exchanges << endl;
    return 0;
}
