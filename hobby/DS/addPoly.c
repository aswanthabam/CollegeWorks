#include<stdio.h>
struct Node {
  int exp;
  int coeff;
};
void printPoly(struct Node* pol,int *a)
{
  for(int i = 0;i < *a;i++)
  {
    printf("%dX^%d",(pol+i)->coeff,(pol+i)->exp);
    if(i < *a-1) printf(" + ");
  }
}
void addPoly(struct Node* poly1,int *a,struct Node* poly2,int *b,struct Node* poly3,int *c)
{
  int i = 0,j = 0,z = 0;
  while(i < *a && j < *b)
  {
    if(poly1[i].exp == poly2[j].exp)
    {
      poly3[z].exp = poly1[i].exp;
      poly3[z].coeff = poly1[i].coeff + poly2[j].coeff;
      i++;j++;z++;
    }
    else if(poly1[i].exp > poly2[j].exp)
    {
      poly3[z] = poly1[i];
      i++;z++;
    }
    else if(poly1[i].exp < poly2[j].exp)
    {
      poly3[z] = poly2[j];
      j++;z++;
    }
  }
  while(i < *a)
  {
    poly3[z] = poly1[i];
    i++;z++;
  }
  while(j < *b)
  {
    poly3[z] = poly2[j];
    j++;z++;
  }
  *c = z;
  //printPoly(poly3,z);
}
int main()
{
  struct Node poly1[10] = {{4,0},{3,3},{2,3},{1,2}};
  struct Node poly2[10] = {{5,3},{3,3},{2,3},{1,2}};
  struct Node poly3[10];
  int a = 4,b = 4,c;
  printf("First: ");
  printPoly(poly1,&a);
  printf("\nSecond: ");
  printPoly(poly2,&b);
  printf("\nResult: ");
  addPoly(poly1,&a,poly2,&b,poly3,&c);
  printPoly(poly3,&c);
  printf("\n");
  return 0;
}