#include <iostream>
using namespace std;

int main() {
	int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(y*10>=x){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
	return 0;
}
