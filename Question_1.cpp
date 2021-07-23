
#include <bits/stdc++.h>
using namespace std;
map < char,int> mymap ;

string numtostr(int n) {
    ostringstream str1 ;
    str1 << n ;
    return str1.str();
}

int strtonum(string s){
    int x ;
    stringstream str1(s);
    str1 >> x ;
    return x ;
}

int decodeSymbolicNotation(string notation) {
   int val1 = 0 , val2 = 0 , val3 = 0 ; 
   for ( int i = 0 ; i <= 2 ; i++) val1 += mymap[notation[i]];
   for ( int i = 3 ; i <= 5 ; i++) val2 += mymap[notation[i]];
   for ( int i = 6 ; i <= 8 ; i++) val3 += mymap[notation[i]];
   string str1 = numtostr(val1);
   string str2 = numtostr(val2); 
   string str3 = numtostr(val3);
   string finalstring = str1 + str2 + str3 ;

   int val = strtonum(finalstring);
   return val ;
} 

int main() {
    mymap['r'] = 4 ;
    mymap['w'] = 2 ;
    mymap['x'] = 1 ;  
    string str ;
    cin >> str ;
    cout << decodeSymbolicNotation(str) << endl;
}