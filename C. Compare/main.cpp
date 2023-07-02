#include <iostream>
using namespace std;
string smallestLexicographical( string s, string t ){
   int ret;
   ret = s.compare( t );
   if( ret == 0 ) {return s;}
   else if( ret > 0 ) {return t;}
   else {return s;}
}

int main(){

   string X, Y;
   cin >> X >> Y;

   cout << smallestLexicographical(X, Y);
}
