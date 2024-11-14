#include <iostream>

using namespace std;

int main() {

    int a, b;
    cin>>a>>b;

    int brojac=0;
    if(a>b) {
        swap(a, b);
    }

    for(int i=a+1; i<=b; i++) {
        int temp=i;
        int broj=0;

        int poslednacifra=temp%10;
        temp/=10;

        int proizvod=1;
        while(temp>0) {
           int srednacifra=temp%10;
             proizvod=proizvod*srednacifra;

            temp/=10;

            if(temp<=9) {
                broj= temp*10+poslednacifra;
                break;
            }

        }
        if(proizvod==0) {
            continue;
        }

        if(proizvod%broj==0) {
            cout<<i<<" -> ("<<proizvod<<" == "<<broj<<" * "<<proizvod/broj<<")"<<endl;
            brojac++;
        }
    }


cout<<brojac;





}
