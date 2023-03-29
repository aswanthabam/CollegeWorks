#include <iostream>
using namespace std;

class QuickSort
{
private:
    void quickSort(int *A, int l, int h)
    {
        int j;
        if (l < h)
        {
            j = partition(A, l, h);
            quickSort(A, l, j - 1);
            quickSort(A, j + 1, h);
        }
    }
    int partition(int *arr, int low, int high)
    {
        int pivot = arr[high];
        int i = low - 1;
        for (int j = low; j < high; j++) {
            if (arr[j] < pivot) {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[high]);
        return i + 1;
    }

public:
    int *array, size;

    void readValues()
    {
        cout << "Enter array size: ";
        cin >> size;
        array = new int[size];
        cout << "Enter array elements: ";
        for (int i = 0; i < size; i++)
            cin >> array[i];
    }
    void display()
    {
        for (int i = 0; i < size; i++)
        {
            cout << array[i] << " ";
        }
        cout << endl;
    }
    void sort()
    {
        cout << "Sorting using Quick sort ...." << endl;
        cout << "-------------------------" << endl;
        quickSort(array, 0, size - 1);
    }
};
int main()
{
    QuickSort *in = new QuickSort;
    in->readValues();
    cout << "Array elements are: ";
    in->display();
    cout << endl;
    in->sort();
    cout << "Sorted Array is : ";
    in->display();
    return 0;
}