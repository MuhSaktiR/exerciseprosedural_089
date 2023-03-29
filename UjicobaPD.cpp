#include <iostream>
using namespace std;

void kelulusan(){
    int nilM[20] = {85, 70, 55, 85, 60, 80, 55, 65, 90, 65, 85, 70, 55, 85, 60, 80, 55, 65, 90, 65};
    int nilBI[20] = {55, 85, 60, 80, 85, 70, 75, 60, 75, 80, 85, 90, 65, 70, 80, 90, 75, 80, 85, 80};

    string Nama[20] = {"Agil", "Sakti", "Rangga", "Teguh", "Babe", "Andi", "Dika", "Brandon", "Alif", "William", "Putri", "Samsul", "Yanti", "Lidia", "Julia", "Kurnia", "Iofi", "Zeta", "Kaela", "Ollie"};
    string status[20];

    int rerata, total;
    int jumlah_diterima = 0, jumlah_tidak_diterima = 0;


       for (int i = 0; i < 20; i++) {
        total = nilM[i] + nilBI[i];
        rerata = total / 2;
        if (rerata >= 70 || nilM[i] > 80) {
            status[i] = "Diterima";
            jumlah_diterima++;
        } 
        else {
            status[i] = "Tidak diterima";
            jumlah_tidak_diterima++;
        }
    }

cout << "\n==========================================="<<endl;

cout << "    Kandidat Penerimaan Mahasiswa Baru     "<<endl;

cout << "===========================================\n"<<endl;

cout << "\tTercatat 20 Kandidat\n" << endl;

    cout << "==============================" << endl;
    cout << "Nama\t\tStatus\n";
    cout << "==============================" << endl;
    for (int i = 0; i < 20; i++) {
        cout << Nama[i] << "\t\t" << status[i] << endl;
    }

    cout<<"\n===================================================="<<endl;

    cout<<"\tTotal Kandidat Diterima/Tidak Diterima"<<endl;

    cout<<"===================================================="<<endl;

    cout << "\nJumlah kandidat diterima : " << jumlah_diterima << endl;
    cout << "Jumlah kandidat tidak diterima : " << jumlah_tidak_diterima << endl;
    cout << "\n" << endl;

}

int main(){
    kelulusan();

    return 0;
}