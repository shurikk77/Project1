#include <iostream>
#include <fstream>
using namespace std;
int main()
{   ofstream out;
     out.open("test2.txt");
    int i,j;
    int k = 10;
    int medals[10][5];
    string country[10] = {"Австрия", "Германия","Канада","Китай","Корея","Норвегия","Россия","США","Финляндия","Япония"};
    for (i = 0; i < k; i++)
    {
        cout << country[i] << " -> " ;
        cin >> medals [i][0] >> medals [i][1] >> medals [i][2];
    }
    for (i = 0; i < k; i++)
         medals [i][3] = medals[i][0] + medals[i][1] + medals[i][2];
    for (i = 0; i < k; i++)
         medals [i][4] = 7*medals[i][0] + 6*medals[i][1] + 5*medals[i][2];
         
     for (j=0; j <k; j++)    
      for ( i = 1; i < k-j; i++)
            if (medals[i][4] > medals[i-1][4])
            {
                swap(medals[i][4],medals[i-1][4]);
                swap(medals[i][3],medals[i-1][3]);
                swap(medals[i][2],medals[i-1][2]);
                swap(medals[i][1],medals[i-1][1]);
                swap(medals[i][0],medals[i-1][0]);
                swap(country[i],country[i-1]);
            }
    cout << endl;
    for (i = 0; i < k; i++) {
        cout << country[i] << " - ";
     for (j=0; j<5; j++)
      cout << medals[i][j] << " ";
     cout << endl; 
    }
     cout << "№" << "  " << "Страна" << "  " << "Золото" << "  " << "Серебро" << "  " << "Бронза" << "  " << "Всего" << "  " << "Очков" <<endl;
    for (i = 0; i < k; i++)
    {
        out << i+1 << setw(8) << country[i] << setw(8) << medals[i][0] << setw(8) << medals[i][1] << setw(8) << medals[i][2] << setw(8) << medals[i][3] << setw(8) << medals[i][4];
    }
    out.close();
    return 0;
}