#include <iostream>

using namespace std;

int main()
{
    int i,count1=0;
    string n;
    cin>>n;
    for(i=0;i<n.length();i++){
        if(n[i]=='4' || n[i]=='7'){
            count1++;
        }
        /*else{
            cout<<"NO"<<endl;
            return 0;
        }*/
    }
    if(count1==4 || count1==7)
        cout <<"YES"<< endl;
    else
        cout<<"NO"<<endl;

}
