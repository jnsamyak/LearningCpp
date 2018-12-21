#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int n,i=0,j=0,space=1;
    cout<<"Enter the no of rows:\n";
    cin>>n;
        cout<<"Testing Loop 1:"<<endl;
    //testing various loops
        for(i=0;i<n;i++)
       {
             for(j=i;j<n;j++)
                 {
                    cout<<j;
                 }
        cout<<endl;
        } 
        
        cout<<"Testing Loops 2:"<<endl;
        for(i=0; i<n ;i++)
       {
            for(j=i; j>=0;j--)
                {
                    cout<<j;
                }
            cout<<endl;
       }
       cout<<"Testing Loop 3:"<<endl;
       for(i=0; i<n ;i++)
       {
            for(j=i ;j<n ;j++)
                {
                    cout<<j;
                }
            cout<<endl;
       }
       cout<<"Testing Loop 4:"<<endl;
       for(i=0;i<n;i++)
       {
            for(j=i;j<n;j++)
                {
                    for(int k=0;k<=i;k++)
                     {
                         cout<<" ";     
                     }
                     cout<<" "<<i;
 
                }
            cout<<endl;
       }
       cout<<"Testing Loop 5:"<<endl;
       space=n-1;
       for(i=1;i<=n;i++)
       {    for(j=0;j<=space;j++)
                cout<<" ";
                space--;
            for(j=0;j<(2*i)-1;j++)
                cout<<"*";
                
            cout<<endl;
       }
       for(i=1;i<=n-1;i++)
       {    for(j=0;j<=space;j++)
                cout<<" ";
                space++;
            for(j=0;j<=2*(n-i)-1;j++)
                cout<<"*";
                cout<<endl;
       }    
       cout<<"Testing Loop 6:"<<endl;
       char str[]="SAMYAK";
       int len=strlen(str);
            for(i=0;i<=len;i++)
            {   for(j=0;j<i;j++)
                 {   cout<<str[j];
                 }
                 cout<<endl;   
            }
       return 0;
}
