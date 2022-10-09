#include<iostream>
using namespace std;
 
void half_diamond_pattern(int n){
    int i,j;
    
    //Code to print the upper half of the pattern
    
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
    
    //Code to print the lower half of the patter
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i<j)
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
    half_diamond_pattern(n);
    return 0;
}
