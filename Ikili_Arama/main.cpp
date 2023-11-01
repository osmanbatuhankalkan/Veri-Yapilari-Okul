#include <iostream>
using namespace std;
///**************** İKİLİ_ARAMA ****************

int ikiliArama(int A[], int N, int sayi) {
    int sol = 0;
    int sag = N - 1;
    int sayac = 0;

    while (sol <= sag) {
        sayac += 1;

        int orta = (sol + sag) / 2;
        if (A[orta] == sayi){
            cout << "sayac: " << sayac<<endl;
            return orta;
        }
        else if (sayi < A[orta])
            sag = orta - 1;
        else
            sol = orta + 1;
    }
    return -1;
}

int main() {
    int A[] = {3, 5, 7, 11, 13, 17, 19, 23, 29};
    int sayi = 23;
    int sonuc = ikiliArama(A, 9, sayi);

    if (sonuc != -1) {
        cout << "Sayi bulundu indeks: " << sonuc << endl;
    } else {
        cout << "Sayi bulunamadi." << endl;
    }

    return 0;
}
