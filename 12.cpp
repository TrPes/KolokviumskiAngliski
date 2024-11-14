#include <iostream>
#include <cmath>

using namespace std;

int main() {
   int n;

   cin >> n;

   for (int i = 1; i <= n; i++) {
      int a, b;

      cin >> a >> b;
      int tempa=a;
      int brojacnaa=0, tempbrojacnaa=tempa;
      while(tempbrojacnaa>9) {
         tempbrojacnaa=tempbrojacnaa/10;
         brojacnaa++;

      }

      int poslednacifra=tempa%10;
      tempa=tempa/10;
      int brojnov=poslednacifra*(int)pow(10,brojacnaa)+tempa;


      if(brojnov>b) {
         cout<<"YES"<<endl;
      }
      else {
         cout<<"NO"<<endl;
      }

   }

}