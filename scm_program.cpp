// Write a menu driven program that implement following operations on a linear array:
// Insert a new element at a specified position                                                                   
// Delete an element either whose value is given or whose position is given                                                   
// To find the location of a given element                                                                                                            
// To display the elements of the linear array


#include <iostream>
using namespace std;

class arr
{
  int n,a[100];
  public:
  void particular(int b[], int &n, int size);
  void deleteavalue(int b[], int &n, int size);
  void search(int b[], int &n, int size);
  void display(int b[],int &n,int size);
  void deleteatpos(int b[],int &n,int size);
};

//Nandini Added Particular Function
void arr::particular(int b[], int &n, int size)
{
    if(n>size)
    {
        cout<<"overflow";
    }
    else
    {
    cout<<"enter the number and index number which you want to insert?" << endl;
        int no=0, index=0;
        cout << "Enter the number: ";
        cin>>no;
        cout << "Enter index number: ";
        cin>>index;
        for(int i=n;i>=index;i--)
        {
            b[i+1]=b[i];
        }
        b[index]=no;
        n=n+1;
    }
}

