#include <iostream>
using namespace std;

class SelectionSort
{
    int size, *array;

public:
    int comp = 0, exch = 0;
    void swap(int *a, int *b)
    {
        int tmp = *a;
        *a = *b;
        *b = tmp;
    }
    void read()
    {
        cout << "Enter size: ";
        cin >> size;
        array = new int[size];
        cout << "Enter array: ";
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
        int min_index;
        cout << "Sorting using Selection sort algorithm ...." << endl;
        cout << "-----------------------------------" << endl;
        for (int i = 0; i < size; i++)
        {
            min_index = i;
            for (int j = i + 1; j < size; j++)
            {
                comp++;
                if (array[min_index] > array[j])
                {
                    min_index = j;
                }
            }
            if (min_index != i)
            {
                swap(&array[min_index], &array[i]);
                exch++;
            }
        }
    }
};
int main()
{
    SelectionSort *so = new SelectionSort();
    so->read();
    cout << "The array is : ";
    so->display();
    so->sort();
    cout << "The sorted array is : ";
    so->display();
    cout << "No of comparisons using Selection sort is : " << so->comp << endl;
    cout << "No of exchanges using Selection sort is : " << so->exch << endl;
    return 0;
}