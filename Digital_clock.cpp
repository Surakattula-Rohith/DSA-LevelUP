#include <bits/stdc++.h>
using namespace std;

string convert_to_digital_time(int minutes){
    //complete this function
    int a = minutes/60 ;
    int b= minutes%60 ;

    string hr = "";
    string min = "" ;

    if(a<10) {
        hr += "0" ;
    }     
    if(b<10){
        min += "0" ; 
    }
    

    hr += to_string(a);
    min += to_string(b) ;

    return (hr + ":" + min) ; 

}

int main(){

    int n ; 
    cin >> n ;
    cout << convert_to_digital_time(n) << endl ;
    return 0 ;
}