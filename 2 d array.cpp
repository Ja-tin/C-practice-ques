#include <iostream>
using namespace std;
int main()
{
    int a[10][20];
    int m,n,i,j;
    cout<<"Enter the number of rows:-";
    cin>>m;
    cout<<"Enter the number of columns";
    cin>>n;

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Matrix"<<endl;
    for( i=0;i<m;i++)
    {
        for( j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

