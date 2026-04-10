
#include "MATRIX.h"
#include <iostream>
#include <time.h>
#include <vector>
using namespace std;

int main()
{
    int row,col;
    cout<<"Nhap kich thuoc Ma tran A: ";
    cin>>row>>col;
    MATRIX A(row,col);
    A.Get_MaTran();
    A.Set_MaTran();
    A.Get_MaTran();
    cout<<"Nhap kich thuoc Ma tran B: ";
    cin>>row>>col;
    MATRIX B(row,col);
    B.Set_MaTran();
    B.Get_MaTran();


    cout<<"A+B = \n";
    MATRIX C = A+B;
    C.Get_MaTran();

    cout<<"A-B = \n";
    MATRIX D = A-B;
    D.Get_MaTran();

    cout<<"A*B = \n";
    MATRIX E = A*B;
    E.Get_MaTran();

    return 0;
}
