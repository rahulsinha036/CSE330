//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:
vector<string> v;
    void solve(string s, string output){
        
        if(s.empty()){
            v.push_back(output);
            return;
        }

        output.push_back(' ');
        output.push_back(s[0]);
        solve(s.substr(1),output);
        
        output.pop_back();
        output.pop_back();
        output.push_back(s[0]);
        solve(s.substr(1),output);

    }
    vector<string> permutation(string S){
        string output="";
        output.push_back(S[0]);
        
        solve(S.substr(1),output);
        
        return v;
    }
};

//{ Driver Code Starts.

int  main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        vector<string> ans;
        Solution obj;
        ans = obj.permutation(S);
        for(int i=0;i<ans.size();i++){
            cout<<"("<<ans[i]<<")";
        }
        cout << endl;
    }
}

// } Driver Code Ends
