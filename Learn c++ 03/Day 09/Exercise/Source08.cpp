#include<iostream>
#include<crtdbg.h>
using namespace std;
struct Matrix
{
    int rows;
    int cols;
    int **ptr;
};

void MakeMatrix(int rows, int cols, Matrix* mat) {
    mat->ptr = new int* [rows];
    for (int i = 0; i < rows; i++) {
        mat->ptr[i] = new int[cols];
    }
    mat->rows = rows;
    mat->cols = cols;
}

void FillMatrix(Matrix &mat) {
    for (int i = 0; i < mat.rows; i++) {

        for (int j = 0; j < mat.cols; j++) {
            cout << "Enter the ele for row" << i + 1 << " col" << j + 1;
            cin >> mat.ptr[i][j];
        }
    }
}

bool MultiplyMatrices(Matrix u, Matrix v, Matrix* w) {
    int x = u.rows;
    int y = v.cols;
    if (x != y) {
        return false;
    }
    w->rows = x;
    w->cols = y;
    w->ptr = new int* [x];
    for (int i = 0; i < x; i++) {
        w->ptr[i] = new int[y];
        for (int j = 0; j < y; j++) {
            w->ptr[i][j] = 0;
        }
    }

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < u.cols; k++) {
                w->ptr[i][j] += u.ptr[i][k] * v.ptr[k][j];
            }
        }
    }
    return true;
}

void PrintMatrix(Matrix u) {
    for (int i = 0; i < u.rows; ++i)
        for (int j = 0; j < u.cols; ++j)
        {
            cout << " " << u.ptr[i][j];
            if (j == u.cols - 1)
                cout << endl;
        }
}

void FreeMatrix(Matrix &u) {
    delete[] u.ptr;
    u.ptr = nullptr;
}

int main() {
    Matrix u{ 0, 0, nullptr }, v{ 0, 0, nullptr };
    Matrix w{ 0, 0 , nullptr };
    MakeMatrix(/*rows*/2, /*cols*/2, &u);
    FillMatrix(u);
    MakeMatrix(2, 1, &v);
    FillMatrix(v);
    bool succeeded = MultiplyMatrices(u, v, &w);
    if (succeeded) {
        PrintMatrix(u);
        PrintMatrix(v);
        for (size_t i = 0; i < w.rows; ++i) {
            for (size_t j = 0; j < w.cols; ++j) {
                std::cout << w.ptr[i][j] << " " << std::flush;
            }
            std::cout << std::endl;
        }
    }
    FreeMatrix(u);
    FreeMatrix(v);
    FreeMatrix(w);
    _CrtDumpMemoryLeaks(); // should report no leakages
}
