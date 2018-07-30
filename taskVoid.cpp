#include <iostream>
using namespace std;

int main()
{
 void * arr[3];
 arr[0] = new int(10);
 int * xInt = static_cast<int*>(arr[0]);
 cout<<"type is int -> "<<*xInt<<endl;

 arr[1] = new float(9.5);
 float * xFloat = static_cast<float*>(arr[1]);
 cout<<"type is float -> "<<*xFloat<<endl;

 arr[2] = new double;
 double * xDouble = static_cast<double*>(arr[2]);
 *xDouble = 536.565;
 cout<<"type is double -> "<<*xDouble<<endl;
}

