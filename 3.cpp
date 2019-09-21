#include <iostream>
using namespace std;

int main() {
    int people, count_handshake;
    cout<<"Many People : ";
    cin>> people;
    
    for(int i=people-1;i>=1;i--){
     count_handshake = i+count_handshake;
    }
   cout<<count_handshake;

 return 0;	
}

