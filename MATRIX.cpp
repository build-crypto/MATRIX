#include "MATRIX.h"
#include <iostream>
#include <time.h>
#include <vector>

void MATRIX::Gene_random()
{

    for (int t=0;t<row;t++)
    {
        for (int i=0;i<col;i++)
            Matran[t][i] = rand()%2001-1000;
    }
}
void MATRIX::Set_MaTran()
{
     std::cout<<"Nhap Ma tran\n";
    for (int t=0;t<row;t++)
    {
        for (int i=0;i<col;i++)
            std::cin>>Matran[t][i];
    }
}
void MATRIX::Get_MaTran()
{

    for (int t=0;t<row;t++)
    {   std::cout<<"| ";
        for (int i=0;i<col;i++)
            std::cout<<Matran[t][i]<<" ";
        std::cout<<"|\n";
    }
}
MATRIX MATRIX::operator+ (MATRIX B)
{
    if (row==B.row&&col==B.col)
    {
        MATRIX C = *this;
         for (int t=0;t<row;t++)
        {
            for (int i=0;i<col;i++)
          {
              C.Matran[t][i]+=B.Matran[t][i];
          }
        }
        return C;
    }
   else
   {
       std::cout<<"HAI MA TRAN KO THE CONG!\n";
       return MATRIX();
   }
}
MATRIX MATRIX::operator- (MATRIX B)
{
    if (row==B.row&&col==B.col)
    {
         MATRIX C = *this;
         for (int t=0;t<row;t++)
        {
            for (int i=0;i<col;i++)
          {
              C.Matran[t][i] -= B.Matran[t][i];
          }
        }
        return C;
    }
   else
   {
       std::cout<<"HAI MA TRAN KO THE TRU!\n";
       return MATRIX();
   }
}
MATRIX MATRIX::operator* (MATRIX B)
{
    if (col==B.row)
    {
        MATRIX C(row,B.col);
        for (int t =0; t < C.row; t++)
        {
            for (int i =0; i < C.col; i++)
            {
                int Sum=0;
                for (int k = 0;k<col;k++)
                    Sum += (Matran[t][k]*B.Matran[k][i]);
                C.Matran[t][i] = Sum;
            }
        }
        return C;
    }
   else
   {
       std::cout<<"HAI MA TRAN KO THE NHAN!\n";
       return MATRIX();
   }
}

