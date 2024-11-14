#include <iostream>

using namespace std;

int main() {

   int m;
   cin>>m;
   int sumanadeliteli=0;
   int max=0;
   bool flag=false;
   int broj=0;

   for(int i=m-1; i>=1; i--) {
      for(int j=2; j<=m/2; j++) {
         if(i%j==0) {
            sumanadeliteli+=j;
         }
      }

      if(max<sumanadeliteli) {
        max=sumanadeliteli;
         broj=i;
      }
      sumanadeliteli=0;
   }

cout<<broj<<endl;
   return 0;
}
