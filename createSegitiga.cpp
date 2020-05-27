#include <iostream>
using namespace std;

void createTri(int n)
{
    for(int i=1;i<=n;i++) 
    {
        for(int j=n;j>i;j--)
        { 
            cout << " ";
        }
        for(int k=1;k<=(2*i-1);k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
}

int main()
{
    createTri(5);
    return 0;
}


