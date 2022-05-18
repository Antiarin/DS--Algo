//    https://www.codechef.com/START39C/problems/AORB
#include <bits/stdc++.h>
using namespace std;
int main(void){
    int T;
    cin>>T;
    while(T--){
        int X, Y;
        cin>>X>>Y;
        int tot, total;
        tot=(500-(X*2) + 1000- ((X+Y)*4));
        total=(500-((X+Y)*2) + 1000- (Y*4));
        if(tot>=total){
            cout<<tot<<"\n";
        }
        else{
            cout<<total<<"\n";
        }
    }    
}