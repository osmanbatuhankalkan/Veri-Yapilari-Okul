
#include <iostream>
using namespace std;

void yaz( int [][4] );

int main()

{
    int diz[3][4]={{1,1,2,2},{5,6,5,6},{4,8,9,3}};
    yaz(diz);
    return 0;

}
void yaz ( int d[][4])  // matris elemanlarını ekrana yazdıran fonkisyon
{
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<4;j++)
            cout<<d[i][j];
        cout<<endl;
    }
}


//int main() {
//    int dizi[3][4] = {{10,5,12,20},{7,3,14,22},{8,7,8,24}};
//
//    for(int i=0; i<3; i++) {
//        for(int j=0; j<4; j++) {
//            cout << dizi[i][j] << "\t";
//        }
//        cout << endl;
//    }
//}
