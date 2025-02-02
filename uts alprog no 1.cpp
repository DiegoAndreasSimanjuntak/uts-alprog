#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    string nama, npm;
    float nilaiAbsen, nilaiTugas, nilaiUTS, nilaiUAS, nilaiAkhir;
    char hurufMutu;

    // Input data
    cout << "Masukkan Nama Mahasiswa: ";
    getline(cin, nama);
    cout << "Masukkan NPM: ";
    getline(cin, npm);

    cout << "Masukkan Nilai Absen: ";
    cin >> nilaiAbsen;
    cout << "Masukkan Nilai Tugas: ";
    cin >> nilaiTugas;
    cout << "Masukkan Nilai UTS: ";
    cin >> nilaiUTS;
    cout << "Masukkan Nilai UAS: ";
    cin >> nilaiUAS;

    nilaiAkhir = (0.1 * nilaiAbsen) + (0.2 * nilaiTugas) + (0.3 * nilaiUTS) + (0.4 * nilaiUAS);

    if (nilaiAkhir >= 85 && nilaiAkhir < 100) {
        hurufMutu = 'A';
    } else if (nilaiAkhir >= 80 && nilaiAkhir < 85) {
        hurufMutu = 'B';
    } else if (nilaiAkhir >= 75 && nilaiAkhir < 80) {
        hurufMutu = 'C';
    } else if (nilaiAkhir >= 70 && nilaiAkhir < 75) {
        hurufMutu = 'D';
    } else {
        hurufMutu = 'E';
    }



    cout << "\n\nNama Mahasiswa: " << nama << endl;
    cout << "NPM: " << npm << endl;
    cout << "Nilai Absen: " << nilaiAbsen << endl;
    cout << "Nilai Tugas: " << nilaiTugas << endl;
    cout << "Nilai UTS: " << nilaiUTS << endl;
    cout << "Nilai UAS: " << nilaiUAS << endl;
    cout << "Nilai Akhir: " << nilaiAkhir << endl;
    cout << "Nilai Mutu: " << hurufMutu << endl;

    return 0;
}
