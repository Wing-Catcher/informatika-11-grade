#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <cstdlib>
using namespace std;

// Struktur untuk menyimpan menu
struct Item {
    string nama;
    int jumlah;
    int hargaSatuan;
};

// Fungsi trim spasi depan-belakang
string trim(const string &str) {
    size_t start = str.find_first_not_of(" ");
    size_t end = str.find_last_not_of(" ");
    if (start == string::npos || end == string::npos) return "";
    return str.substr(start, end - start + 1);
}

// Fungsi parsing daftar makanan/minuman dengan format: nama (jumlah)
vector<Item> parseItems(const string &input) {
    vector<Item> items;
    string token;
    stringstream ss(input);

    while (getline(ss, token, '-')) {
        token = trim(token);
        if (token.empty()) continue;

        int jumlah = 1; // default quantity
        size_t pos1 = token.find("(");
        size_t pos2 = token.find(")");

        if (pos1 != string::npos && pos2 != string::npos && pos2 > pos1) {
            string jumlahStr = token.substr(pos1 + 1, pos2 - pos1 - 1);
            jumlah = stoi(jumlahStr);
            token = trim(token.substr(0, pos1)); // nama tanpa (x)
        }

        items.push_back({token, jumlah, 0});
    }

    return items;
}

int main() {
    char ulang;

    do {
        system("cls"); // clear screen setiap kali ulang

        string namaKasir, namaPelanggan, tanggal;
        string inputMakanan, inputMinuman;
        int uangPelanggan;

        // Header + Petunjuk
        cout << "====================" << endl;
        cout << "Program Kantin Advanced" << endl;
        cout << "Pembuat: Raffy Ahmad Jaliyyan" << endl;
        cout << "====================" << endl;
        cout << "Tata Cara Penggunaan:" << endl;
        cout << "1. Masukkan nama kasir, nama pelanggan & tanggal (contoh: 12 Agustus 2025)." << endl;
        cout << "2. Input daftar makanan/minuman: Nama (jumlah) - Nama (jumlah)" << endl;
        cout << "   Contoh: Nasi Goreng (2) - Nasi Bakar (4) - Nasi Kuning (1)" << endl;
        cout << "3. Masukkan harga per item saat diminta." << endl;
        cout << "4. Lihat nota & status pembayaran." << endl;
        cout << "====================" << endl << endl;

        // Input
        cout << "Masukkan nama kasir     : ";
        getline(cin, namaKasir);

        cout << "Masukkan nama pelanggan : ";
        getline(cin, namaPelanggan);

        cout << "Masukkan tanggal        : ";
        getline(cin, tanggal);
        cout << endl;

        cout << "Masukkan daftar makanan: ";
        getline(cin, inputMakanan);
        vector<Item> makanan = parseItems(inputMakanan);

        for (auto &m : makanan) {
            cout << "Harga untuk " << m.nama << " (per 1 porsi) = Rp";
            cin >> m.hargaSatuan;
        }
        cout << endl;

        cin.ignore();

        cout << "Masukkan daftar minuman: ";
        getline(cin, inputMinuman);
        vector<Item> minuman = parseItems(inputMinuman);

        for (auto &mn : minuman) {
            cout << "Harga untuk " << mn.nama << " (per 1 gelas) = Rp";
            cin >> mn.hargaSatuan;
        }
        cout << endl;

        // Hitung total
        int totalMakanan = 0, totalMinuman = 0;
        for (auto &m : makanan) totalMakanan += m.hargaSatuan * m.jumlah;
        for (auto &mn : minuman) totalMinuman += mn.hargaSatuan * mn.jumlah;
        int totalBayar = totalMakanan + totalMinuman;

        // Input uang pelanggan
        cout << "Anda membawa uang: Rp";
        cin >> uangPelanggan;

        // Output Nota
        cout << "\n===== NOTA PEMBAYARAN KANTIN ADVANCED =====\n";
        cout << "Kasir          : " << namaKasir << endl;
        cout << "Nama Pelanggan : " << namaPelanggan << endl;
        cout << "Tanggal        : " << tanggal << endl;
        cout << "-------------------------------------------\n";

        cout << "Makanan:\n";
        for (int i = 0; i < (int)makanan.size(); i++) {
            int subtotal = makanan[i].hargaSatuan * makanan[i].jumlah;
            cout << "  " << (i+1) << ". " << makanan[i].nama
                 << " (" << makanan[i].jumlah << "x) Rp" << makanan[i].hargaSatuan
                 << " -> Rp" << subtotal << endl;
        }
        cout << "Total Makanan  : Rp" << totalMakanan << endl;

        cout << "\nMinuman:\n";
        for (int i = 0; i < (int)minuman.size(); i++) {
            int subtotal = minuman[i].hargaSatuan * minuman[i].jumlah;
            cout << "  " << (i+1) << ". " << minuman[i].nama
                 << " (" << minuman[i].jumlah << "x) Rp" << minuman[i].hargaSatuan
                 << " -> Rp" << subtotal << endl;
        }
        cout << "Total Minuman  : Rp" << totalMinuman << endl;

        cout << "-------------------------------------------\n";
        cout << "TOTAL BAYAR    : Rp" << totalBayar << endl;
        cout << "UANG ANDA      : Rp" << uangPelanggan << endl;

        // Kondisi uang
        if (uangPelanggan > totalBayar) {
            cout << "KEMBALIAN      : Rp" << uangPelanggan - totalBayar << endl;
        } else if (uangPelanggan == totalBayar) {
            cout << "Keterangan     : Uang Anda PAS" << endl;
        } else {
            cout << "Keterangan     : Uang Anda kurang Rp" << totalBayar - uangPelanggan << endl;
        }

        cout << "===========================================\n";
        cout << "   Terima kasih telah berbelanja\n";
        cout << "===========================================\n";

        // Tanya ulang program
        cout << "\nMengulang Program (y/n)? ";
        cin >> ulang;
        cin.ignore();

    } while (ulang == 'y' || ulang == 'Y');

    return 0;
}
