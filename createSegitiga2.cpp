#include <iostream>
using namespace std;

void createTriangle(int a, int b)
{
    int i,j,k,x;
    int n = 5;
   
    for (i=0;i<n;i++) 
    {
        for (j=n;j>i;j--) 
        {
            cout << " "; 
        }
            for(k=0;k<=i;k++)
            { 	
                x=(k+2)+k;
                cout<<x;
            }
        cout << endl;
        if(x<a || x>=b)
        break;
    }
}

int main()
{
     createTriangle(2,10);
     cout << endl;
     createTriangle(2,2);
}

