#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int l=0,r=n-1;
    int target;
    cout<<"Enter targeted value"<<endl;

    cin>>target;
    while (l<=r)
    {
        int mid = (l+r)/2;

        if(a[mid] == target)
        {
            cout<<a[mid]<<" " <<"found";
            return 0;
        }
        else if(a[mid]>target)
        {
            r = mid-1;
        }
        else
        {
            l = mid+1;
        }
    }
    cout<<"Not found"<<endl;
    return 0;
}