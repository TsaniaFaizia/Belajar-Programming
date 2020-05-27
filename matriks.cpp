#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void createMatrix(int m)
{
    int matriks[m][m];
    int total;
    srand(time(0));
    
    cout << "Matriks:   \n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            matriks[i][j]=1+rand()%99;
            cout << "\t" << matriks[i][j];
        }
        cout << endl;
    }
    
    int diag1=(matriks[0][0]+matriks[1][1]+matriks[2][2]);
    int diag2=(matriks[2][0]+matriks[1][1]+matriks[0][2]);
    total=diag1+diag2;
    cout << "\nTotal  :" << total;
}

int main()
{
    createMatrix(3);
}



