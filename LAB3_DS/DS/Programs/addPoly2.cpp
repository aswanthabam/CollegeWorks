#include<iostream>
using namespace std;
class Poly{
public: void Accept(int* A, int m){
        for (int i = 0; i <= m; i++){
            cout << "Enter the coefficient of x^" << i << ": ";
            cin >> A[i];
        }}
    int max(int m, int n){
        return (m > n) ? m : n;}
    int* add(int A[], int B[], int m, int n){
        int size = max(m, n);
        int* sum = new int[size];
        for (int i = 0; i <= m; i++)
            sum[i] = A[i];
        for (int i = 0; i <=n; i++)
            sum[i] += B[i];
        return sum;
    }
    void printPoly(int poly[], int n){
        for (int i = 0; i <= n; i++) {
            cout << poly[i];
            if (i != 0)
                cout << "x^" << i;
            if (i != n)
                cout << " + ";
        }
        cout << endl;
    }
};
int main(){
    Poly poly;
    int m, n;
    cout << "Enter the degree of the first polynomial: ";
    cin >> m;
    int* A = new int[m];
    poly.Accept(A, m);
    cout << "Enter the degree of the second polynomial: ";
    cin >> n;
    int* B = new int[n];
    poly.Accept(B, n);
    int* sum = poly.add(A, B, m, n);
    int size = poly.max(m, n);
    cout << "Sum of the two polynomials is: ";
    poly.printPoly(sum, size);
    return 0;
}
