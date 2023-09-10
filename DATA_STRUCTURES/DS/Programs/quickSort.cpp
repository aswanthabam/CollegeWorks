#include <iostream>
using namespace std;
class QuickSort
{
public:
    void sort(int arr[], int low, int high)
    {
        if (low < high)
        {
            int pivot = partition(arr, low, high);
            sort(arr, low, pivot - 1);
            sort(arr, pivot + 1, high);
        }
    }

private:
    int partition(int arr[], int low, int high)
    {
        int pivot = arr[high];
        int i = low - 1;

        for (int j = low; j < high; j++)
        {
            if (arr[j] < pivot)
            {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[high]);
        return i + 1;
    }
};
int main()
{
    QuickSort obj;
    int size;
    cout << "Enter size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    obj.sort(arr, 0, size - 1);
    cout << "Sorted array is: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
