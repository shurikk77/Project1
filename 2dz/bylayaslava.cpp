#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    for(int i=0;i<13;++i)
    {
        if(i<7){
        if(0==i%2){
            for(int j=0; j<4; ++j)
                {
                    cout<<"  *";
                }
                cout.width(60);
        cout<< setw(60) << setfill('/')  ;
        }
         else {
                cout<<" ";
                for(int j=0; j<4; ++j)
                cout<<"*  ";
         }
                cout<<'\n';
        }

    }

    for(int i=0;i<18;++i)
         if(0==i%2)
            cout<< setw(72) << setfill(' ')<<'\n';
            else
            cout<< setw(72) << setfill('/')<<'\n';

        return 0;
}
