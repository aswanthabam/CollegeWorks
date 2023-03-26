#include <iostream>
using namespace std;

class BubbleSort
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
    cout << "Sorting using Bubble sort algorithm ...." << endl;
    cout << "-----------------------------------" << endl;
    for (int i = 0; i < size; i++)
    {
      for (int j = 0; j < size - i - 1; j++)
      {
        comp++;
        if (array[j] > array[j + 1])
        {
          swap(&array[j], &array[j + 1]);
          exch++;
        }
      }
    }
  }
};
int main()
{
  BubbleSort *so = new BubbleSort();
  so->read();
  cout << "The array is : ";
  so->display();
  so->sort();
  cout << "The sorted array is : ";
  so->display();
  cout << "No of comparisons using Bubble sort is : " << so->comp << endl;
  cout << "No of exchanges using Bubble sort is : " << so->exch << endl;
  return 0;
}