#include <iostream>


using namespace std;

int main() {
   int a,b,c;
   cin>>a>>b>>c;
   int zbirnaagli=a+b+c;
   if(a>0 && b>0 && c>0 && zbirnaagli==180) {
   cout<<"YES"<<endl;
      int max=a;
      if(max<b) {
         max=b;
      }
      else if(max<c) {
         max=c;
      }
      if(max==90) {
         cout<<"RIGHT"<<endl;
      }
      else if(max<90) {
         cout<<"ACUTE"<<endl;

      }
      else if(max>90) {
         cout<<"OBTUSE"<<endl;
        
      }
   }
   else {
      cout<<"NO"<<endl;
   }

}