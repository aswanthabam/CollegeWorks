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
    int partition(int *A, int l, int h)
    {
        int pivot, i = l, j = h + 1, t;
        pivot = A[l];
        while (1)
        {
            do
            {
                i++;
            } while (i <= h && A[i] <= pivot);
            do
            {
                j--;
            } while (A[j] > pivot);
            if (i >= j)
                break;
            t = A[i];
            A[i] = A[j];
            A[j] = t;
        }
        A[l] = A[j];
        A[j] = pivot;
        return j;
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