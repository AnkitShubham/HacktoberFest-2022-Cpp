#include<iostream>
using namespace std;
 
void half_pyramid_pattern(int n){
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i>=j)
            {
                cout<<"*";
            }
        }
        cout<<"\n";
    }
}
int main()
{   
    int n;
    cin>>n;
    half_pyramid_pattern(n);
    return 0;
}
