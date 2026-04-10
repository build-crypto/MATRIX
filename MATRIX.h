#ifndef MATRIX_H
#define MATRIX_H
#include <vector>

class MATRIX
{
    public:
        MATRIX(int r=0,int c=0)
        {
            row=r;
            col=c;
            Matran.resize(row,std::vector<int>(col));
            this->Gene_random();
        }
        void Gene_random();
        void Set_MaTran();
        void Get_MaTran();
        MATRIX operator+ (MATRIX);
        MATRIX operator- (MATRIX);
        MATRIX operator* (MATRIX);

    protected:

    private:
        int row, col;
        std::vector<std::vector<int>> Matran;
};

#endif // MATRIX_H
