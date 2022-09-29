//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
      long long int numberOfways(int a[], int n)
   {
       // Complete the function
       int sum=n;
       int count=0;
       int sum1=0;
       for(int i=0;i<n;i++)
       {
           if(a[i]==a[i+1])
           {
               count++;
           }
           else
           {
               sum1=(count *(count+1))/2;
               sum+=sum1;
               count=0;
           }
           
       }
       sum1=(count *(count+1))/2;
       sum+=sum1;
       return sum;
       
   }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n; 
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    Solution ob;
	    cout << ob.numberOfways(a, n)<<"\n";
     }
	return 0;
}

// } Driver Code Ends
