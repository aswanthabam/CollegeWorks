#include <iostream>
using namespace std;
class Polynomial;

class Term
{
public:
  int coeff, exp;
  Term(){};
  void set(int a, int b) // Set values of the term
  {
    coeff = a;
    exp = b;
  }
  void readValues(int a) // Read values from the user
  {
    cout << "Enter coefficient and exponent of term " << a + 1 << ": ";
    cin >> coeff >> exp;
  }
};
class Polynomial
{
public:
  int n;
  Term *poly;
  Polynomial()
  {
    poly = new Term[10];
  }
  void read() // Read values from the user
  {
    cout << "Enter no of terms: ";
    cin >> n;
    poly = new Term[n];
    for (int i = 0; i < n; i++)
    {
      (poly + i)->readValues(i);
    }
  }
  void display() // Display Polynomial
  {
    for (int i = 0; i < n; i++)
    {
      cout << (poly + i)->coeff << "x^" << (poly + i)->exp;
      if (i != n - 1)
        cout << " + ";
    }
    cout << endl;
  }
  Polynomial *operator+(Polynomial ply2) // Addition of polynomials
  {
    Polynomial *res = new Polynomial;
    Term *poly2 = ply2.poly;
    int i = 0, j = 0, z = 0;
    while ((i < n) && (j < ply2.n))
    {
      if (poly[i].exp == poly2[j].exp)
      {
        res->poly[z].set(poly[i].coeff + poly2[j].coeff, poly[i].exp);
        i++;
        j++;
        z++;
      }
      else if (poly[i].exp > poly2[j].exp)
      {
        res->poly[z] = poly[i];
        i++;
        z++;
      }
      else if (poly[i].exp < poly2[j].exp)
      {
        res->poly[z] = poly2[i];
        j++;
        z++;
      }
    }
    while (i < n)
    {
      res->poly[z] = poly[i];
      i++;
      z++;
    }
    while (j < ply2.n)
    {
      res->poly[z] = poly2[j];
      j++;
      z++;
    }
    res->n = z;
    return res;
  }
};
int main()
{
  Polynomial poly1, poly2, *res;
  cout << "Enter polynomial one:-" << endl;
  poly1.read();
  cout << "Enter polynnomial two:-" << endl;
  poly2.read();
  cout << "Polynomial one : ";
  poly1.display();
  cout << "Polynomial two : ";
  poly2.display();
  res = (poly1 + poly2);
  cout << "Result : ";
  res->display();
  return 0;
}
