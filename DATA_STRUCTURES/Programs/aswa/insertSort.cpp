#include <iostream>
using namespace std;

class InsertSort
{

public:
  int *array, size, comp = 0, exch = 0;
  void swap(int *a, int *b)
  {
    int tmp = *a;
    *a = *b;
    *b = tmp;
  }

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
    int j = 0;
    cout << "Sorting using insert sort ...." << endl;
    cout << "-------------------------" << endl;
    for (int i = 1; i < size; i++)
    {
      j = i;
      while ((j > 0) && (array[j - 1] > array[j]))
      {
        swap(&array[j], &array[j - 1]);
        j--;
        comp++;
        exch++;
      }
    }
  }
};
int main()
{
  InsertSort *in = new InsertSort;
  in->readValues();
  cout << "Array elements are: ";
  in->display();
  cout << endl;
  in->sort();
  cout << "Sorted Array is : ";
  in->display();
  cout << "No of comparisons using Insert sort is : " << in->comp << endl;
  cout << "No of exchanges using Insert sort is : " << in->exch << endl;
  return 0;
}