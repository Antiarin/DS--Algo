https://www.codechef.com/START39C/problems/RECENTCONT
#include <bits/stdc++.h>
using namespace std;
int main(void){
    int T, N;
    cin>>T;
    while(T--){
        cin>>N;
        int a=0, b=0;
        // vector <string> s(N);        //s.push_back-->dynamic size array 
        // for(int i =0; i<N;i++){
        //   cin>>s[i];
        // }
        // for(int i=0; i<N; i++){
        //     if(s[i][0]=='S'){
        //         a++;
        //     }
        //     else{
        //         b++;
        //     }
        // }
        string s;     
        for (int i =0; i<N; i++){
            cin>>s;
           if (s[0]=='S'){
               a++;
           }
           else{
               b++;
           }
        }
       cout<<a<<" "<<b<<"\n";      // cout<<a;
                                  // cout<<" ";
                                 // cout<<b;

    }
}