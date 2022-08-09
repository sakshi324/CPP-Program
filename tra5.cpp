#include<iostream>
using namespace std;
int main()
{
    static int array[10][10];
    int i,j,m,n,a;
    cout<<"Enter the order of the matrix\n"
    cin>>m; 
    cin>>n;
  if (m==n)
{

cout<<"Enter the co-efficient of the matrix\n";
for(i=0;i<m;++i)
{
    for(j=0;j<n;++j)
}
    cout<<"  "<<array[i][j];
    }
    cout<<"\n";
    }
    for(i=0;i<m;++i)
    {
        a=array[i][j];
        array[i][j]
        array[i][j]=array[i][m-i-1];
    }
cout<<"the matrix after changing the\n";
cout<<"main diagonal and secondary daigoal\n";
for(i=0;i<m;++j)
{
    for(j=0;j<n;++j)
    {
        cout<<" "<<array[i][j];
    }
        cout<<"\n";
}
}
else 
cout<<"The given order is not square matrix\n";
}
