#include <iostream>
#include <cmath>

using namespace std;

int main() {
   int a, b;
   cin>>a>>b;
   int brojac=0;
   if(b<a) {
      swap(a,b);
   }


   for(int i=a; i<=b; i++) {
      int temp=i;

      int poslednacifra=temp%10;
      temp/=10;


         int srednicifri=0;
         int prvacifra=0;

         int brojnaprvidvecifri=0;
         int brojnasrednicifri=0;
         while(temp>9) {
            srednicifri=temp%10;
           brojnasrednicifri=brojnasrednicifri*10+srednicifri;
            temp/=10;
         }
         prvacifra=temp;
         brojnaprvidvecifri=prvacifra+poslednacifra;

        
         if(brojnasrednicifri%brojnaprvidvecifri==0) {
            cout<<i<<" -> ("<<brojnasrednicifri<<" == "<<"("<<poslednacifra<<" + "<<prvacifra<<")"<<" * "<<brojnasrednicifri/brojnaprvidvecifri<<")"<<endl;
            brojac++;
         }








   }
   cout<<brojac;


}s