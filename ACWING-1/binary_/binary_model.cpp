#include "iostream"
using namespace std;
long n,k;
const int N = 1e5+10;
int x,y,z,T;
int main(){
    cin>>n>>x>>y>>z>>T;
    int total=x+y;
    int money=z+T;
    while(n--){
        int x1,y1,z1;
        cin>>x1>>y1>>z1;
        int total2=x1+y1;
        int money2=z1;
        if(total2>total&&money>=money2){
            total=total2;

        }

    }
    cout<<total<<endl;

}