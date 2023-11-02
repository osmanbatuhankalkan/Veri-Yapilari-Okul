#include <iostream>
using namespace std;

// DOGRUSAL ARAMA - TEK BOYUTLU DİZİ

int Arama (int A[], int N, int sayi) {
    int i;
    for(i = 0; i < N; i++) {
        if(A[i] == sayi) {
            return i;
        }
    }
    return -1;
}

int main() {
    int A[] = {3, 5, 7, 4, 6, 10, 11};
    int sayi = 6;
    int sonuc = Arama(A, 7, sayi);
    if (sonuc != -1) {
        cout << "Sayi bulundu indeks: " << sonuc << endl;
    } else {
        cout << "Sayi bulunamadi." << endl;
    }
    return 0;
}

