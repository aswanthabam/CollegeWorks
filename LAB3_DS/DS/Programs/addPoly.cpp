#include <iostream>
using namespace std;
class Poly
{
  int *array, size;

public:
  void read()
  {
    cout << "Enter degree: ";
    cin >> size;
    array = new int[size];
    for (int i = 0; i <= size; i++)
    {
      cout << "Enter coefficient of x^" << i << ": ";
      cin >> array[i];
    }
  }
  int max(int m, int n)
  {
    return (m > n) ? m : n;
  }
  Poly *add(Poly *poly2)
  {
    Poly *res = new Poly;
    int s = max(size, poly2->size);
    res->size = s;
    res->array = new int[s];
    for (int i = 0; i <= size; i++)
      res->array[i] = array[i];
    for (int i = 0; i <= poly2->size; i++)
      res->array[i] += poly2->array[i];
    return res;
  }
  void printPoly()
  {
    for (int i = size; i >= 0; i--)
    {
      cout << array[i];
      if (i != 0)
        cout << "x^" << i;
      if (i != 0)
        cout << " + ";
    }
    cout << endl;
  }
};
int main()
{
  Poly poly1, poly2, *res;
  cout << "Enter details of first polynomial: " << endl;
  poly1.read();
  cout << "Enter details of second polynomial: " << endl;
  poly2.read();
  cout << "First polynomial: ";
  poly1.printPoly();
  cout << "Second polynomial: ";
  poly2.printPoly();
  res = poly1.add(&poly2);
  cout << "Sum of the two polynomials is: ";
  res->printPoly();
  return 0;
}
