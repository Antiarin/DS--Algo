https://www.codechef.com/START39C/problems/COMPRESSVD
#include <bits/stdc++.h>
using namespace std;

int main (void){
    int T,N;
    cin>>T;
    while(T--){
        cin>>N;
        vector <int> A(N);
        vector <int> B;
        for (int i=0; i<N; i++){
            cin>>A[i];
        }
        B.push_back(A[0]);
        for(int i=1;i<N;i++){
            if(A[i]!=B.back()){
                 B.push_back(A[i]);
            }
        } 
        cout <<B.size() << "\n";
    }
}
