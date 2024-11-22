//   ===============================================================
//   |          TUGAS PROJECT UAS ALGORITMA & PEMROGRAMAN          |
//   |                SISTEM PEMESANAN TIKET BIOSKOP               |
//   |-------------------------------------------------------------|
//   |    NAMA KELOMPOK : HENGKER NGAWI                            |
//   |    ANGGOTA       : ANWA AL GHIFARY DAFITO (2410631170009)   |
//   |                    M. FHAREL ATHALLAH PANE (2410631170156)  |
//   |                    RAIKA MAULANA DWI PUTRA (2410631170100)  |
//   |    KELAS         : 1B INFORMATIKA                           |
//   |                                                             |
//   ===============================================================

#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

struct film {
    vector<string> judul_film, sinopsis, produser, genre, ket_rate, rate_umur;
    vector<int> durasi;
};

struct jadwalFilm {
    string judul_film, tanggal_tayang, hari_tayang, studio, jam_tayang;
    int auditorium, harga_film;
    vector<string> seat;
};

struct tiketPengunjung {
    string nama_pengunjung, judul_film, ket_rate, rate_umur, tanggal_pesan, hari_tayang, jam_tayang, seat;
    int auditorium, harga;
};

struct transaksiPengunjung {
    string nama_pengunjung, nama_makanan, nama_minuman, judul_film, tanggal_pesan, hari_pesan, jam_tayang, mtd_pembyr;
    int jumlah_seat, total_harga, harga_makanan, harga_minuman, harga_film, total_harga_film, ppn, harga_film_ppn, uang_dibayarkan, kembalian;
    vector<string> semuaSeat;
};

struct makanan {
    string namaMakanan;
    int hargaMakanan;
};

struct minuman {
    string namaMinuman;
    int hargaMinuman;
};

void tampilNamaKelompok(){
    cout << endl << endl << "   ===============================================================" << endl;
    cout << "   |          TUGAS PROJECT UAS ALGORITMA & PEMROGRAMAN          |" << endl;
    cout << "   |                SISTEM PEMESANAN TIKET BIOSKOP               |" << endl;
    cout << "   |-------------------------------------------------------------|" << endl;
    cout << "   |    NAMA KELOMPOK : HENGKER NGAWI                            |" << endl;
    cout << "   |    ANGGOTA       : ANWA AL GHIFARY DAFITO (2410631170009)   |" << endl;
    cout << "   |                    M. FHAREL ATHALLAH PANE (2410631170156)  |" << endl;
    cout << "   |                    RAIKA MAULANA DWI PUTRA (2410631170100)  |" << endl;
    cout << "   |    KELAS         : 1B INFORMATIKA                           |" << endl;
    cout << "   |                                                             |" << endl;
    cout << "   ===============================================================" << endl << endl;
}

void tampilMenuUtama(string name){
    cout << endl;
    cout << "||  Selamat datang, " << name << endl << endl;

    cout << ">>>>>>>>>>>>>>>>>>>>>  NGAWI PLAZA PARK - CINEMA XX  <<<<<<<<<<<<<<<<<<<<<" << endl;
    cout << " |                 # Sistem Manajemen Pemesanan Tiket #                 | " << endl;
    cout << " |                                                                      | " << endl;
    cout << " |                           ~~ Menu Utama ~~                           | " << endl;
    cout << " |     1. Data Tiket Pengunjung                                         | " << endl;
    cout << " |     2. Data Film On-going                                            | " << endl;
    cout << " |     3. Data Makanan dan Minuman                                      | " << endl;
    cout << " |     4. Exit                                                          | " << endl;
    cout << " |                                                                      | " << endl;
    cout << " |                   # jika kamu mengalami kendala #                    | " << endl;
    cout << ">>>>>>>>>>>>>>>>>>>>>>>  Contact : 0895-1711-7162  <<<<<<<<<<<<<<<<<<<<<<<" << endl << endl;
}

void tampilMenuTiketPengunjung(string name){
    cout << endl;
    cout << "||  Selamat datang, " << name << endl << endl;

    cout << ">>>>>>>>>>>>>>>>>>>>>  NGAWI PLAZA PARK - CINEMA XX  <<<<<<<<<<<<<<<<<<<<<" << endl;
    cout << " |                 # Sistem Manajemen Pemesanan Tiket #                 | " << endl;
    cout << " |                                                                      | " << endl;
    cout << " |                      ~~ Menu Tiket Pengunjung ~~                     | " << endl;
    cout << " |     1. Tambah Tiket Pengunjung                                       | " << endl;
    cout << " |     2. Lihat Tiket Pengunjung                                        | " << endl;
    cout << " |     3. Lihat Transaksi                                               | " << endl;
    cout << " |     4. Hapus Tiket Pengunjung                                        | " << endl;
    cout << " |     5. Kembali ke Menu Utama                                         | " << endl;
    cout << " |                                                                      | " << endl;
    cout << " |                   # jika kamu mengalami kendala #                    | " << endl;
    cout << ">>>>>>>>>>>>>>>>>>>>>>>  Contact : 0895-1711-7162  <<<<<<<<<<<<<<<<<<<<<<<" << endl << endl;
}

void tampilMenuFilm(string name){
    cout << endl;
    cout << "||  Selamat datang, " << name << endl << endl;

    cout << ">>>>>>>>>>>>>>>>>>>>>  NGAWI PLAZA PARK - CINEMA XX  <<<<<<<<<<<<<<<<<<<<<" << endl;
    cout << " |                 # Sistem Manajemen Pemesanan Tiket #                 | " << endl;
    cout << " |                                                                      | " << endl;
    cout << " |                       ~~ Menu Film On-going ~~                       | " << endl;
    cout << " |     1. Tambah Film                                                   | " << endl;
    cout << " |     2. Lihat Film                                                    | " << endl;
    cout << " |     3. Hapus Film                                                    | " << endl;
    cout << " |     4. Kembali ke Menu Utama                                         | " << endl;
    cout << " |                                                                      | " << endl;
    cout << " |                   # jika kamu mengalami kendala #                    | " << endl;
    cout << ">>>>>>>>>>>>>>>>>>>>>>>  Contact : 0895-1711-7162  <<<<<<<<<<<<<<<<<<<<<<<" << endl << endl;
}

void tampilMenuMakananMinuman(string name){
    cout << endl;
    cout << "||  Selamat datang, " << name << endl << endl;

    cout << ">>>>>>>>>>>>>>>>>>>>>  NGAWI PLAZA PARK - CINEMA XX  <<<<<<<<<<<<<<<<<<<<<" << endl;
    cout << " |                 # Sistem Manajemen Pemesanan Tiket #                 | " << endl;
    cout << " |                                                                      | " << endl;
    cout << " |                    ~~ Menu Makanan dan Minuman ~~                    | " << endl;
    cout << " |     1. Tambah Makanan dan Minuman                                    | " << endl;
    cout << " |     2. Lihat Makanan dan Minuman                                     | " << endl;
    cout << " |     3. Hapus Makanan dan Minuman                                     | " << endl;
    cout << " |     4. Kembali ke Menu Utama                                         | " << endl;
    cout << " |                                                                      | " << endl;
    cout << " |                   # jika kamu mengalami kendala #                    | " << endl;
    cout << ">>>>>>>>>>>>>>>>>>>>>>>  Contact : 0895-1711-7162  <<<<<<<<<<<<<<<<<<<<<<<" << endl << endl;
}

void tampilDataFilm(film Film, vector<vector<jadwalFilm>> &jFilm){
    for (int i = 0; i < Film.judul_film.size(); i++){
        cout << endl << "===================== # Film ke-" <<i+1 << " # ====================="<< endl << endl;
        cout << "Judul Film     : " << Film.judul_film[i]<< endl;
        cout << "Produser       : " << Film.produser[i]<< endl;
        cout << "Genre          : " << Film.genre[i] << endl;
        if (Film.durasi[i] >= 60){
            int jam = Film.durasi[i] / 60;
            int menit = Film.durasi[i] % 60;
            if (menit != 0){
                cout << "Durasi         : " << jam << " Jam " << menit << " Menit (" << Film.durasi[i] << " menit)" << endl;
            } else if (menit == 0){
                cout << "Durasi         : " << jam << " Jam " << "(" << Film.durasi[i] << " menit)" << endl;
            }
        } else {
            cout << "Durasi         : " << Film.durasi[i] << "Menit" << endl;
        }
        cout << "Rating Umur    : " << Film.rate_umur[i] << endl;
        cout << "Keterangan     : " << Film.ket_rate[i] << endl;
        cout << endl << Film.sinopsis[i] << endl;
        cout << endl << "                    # Jadwal Tayang #"<< endl;
        cout << "Tanggal Tayang : " << jFilm[i][0].tanggal_tayang << endl;
        cout << "Studio         : " << jFilm[i][0].studio << endl;
        if (jFilm[i][0].hari_tayang == "Minggu" || jFilm[i][0].hari_tayang == "minggu" ||
            jFilm[i][0].hari_tayang == "Sabtu" || jFilm[i][0].hari_tayang == "sabtu"){
            cout << "Harga          : Rp." << jFilm[i][0].harga_film << " (Weekend)"<< endl;
        } else {
            cout << "Harga          : Rp." << jFilm[i][0].harga_film << " (Weekdays)"<< endl;
        }
        cout << "Auditorium     : " << jFilm[i][0].auditorium << endl;
        /*
        for (int jam = 0; jam < 4; jam++){
            cout << "   " << jFilm[i][jam].hari_tayang << "\n" << "     " << jFilm[i][jam].jam_tayang;
        } */
        // Menampilkan hari tayang
        cout << "Hari Tayang    : ";
        for (int jam = 0; jam < jFilm[i].size(); jam++) {
            cout << setw(15) << left << jFilm[i][jam].hari_tayang; // Mengatur lebar kolom untuk keselarasan
        }
        cout << endl;

        // Menampilkan jam tayang
        cout << "Jam Tayang     : ";
        for (int jam = 0; jam < jFilm[i].size(); jam++) {
            cout << setw(15) << left << jFilm[i][jam].jam_tayang + " WIB";
        }
        cout << endl << endl;
    }
}

void tampilFilmBerAudi(film Film, vector<vector<jadwalFilm>> &jFilm, int audi, bool tidakDitemukan){
    for (int i = 0; i < Film.judul_film.size(); i++){
        if (!jFilm[i].empty() && audi == jFilm[i][0].auditorium){
            cout << endl << "===================== # Film ke-" <<i+1 << " # ====================="<< endl << endl;
            cout << "Judul Film     : " << Film.judul_film[i]<< endl;
            cout << "Produser       : " << Film.produser[i]<< endl;
            cout << "Genre          : " << Film.genre[i] << endl;
            if (Film.durasi[i] >= 60){
                int jam = Film.durasi[i] / 60;
                int menit = Film.durasi[i] % 60;
                if (menit != 0){
                    cout << "Durasi         : " << jam << " Jam " << menit << " Menit (" << Film.durasi[i] << " menit)" << endl;
                } else if (menit == 0){
                    cout << "Durasi         : " << jam << " Jam " << "(" << Film.durasi[i] << " menit)" << endl;
                }
            } else {
                cout << "Durasi         : " << Film.durasi[i] << endl;
            }
            cout << "Rating Umur    : " << Film.rate_umur[i] << endl;
            cout << "Keterangan     : " << Film.ket_rate[i] << endl;
            cout << endl << Film.sinopsis[i] << endl;
            cout << endl << "                    # Jadwal Tayang #"<< endl;
            cout << "Tanggal Tayang : " << jFilm[i][0].tanggal_tayang << endl;
            cout << "Studio         : " << jFilm[i][0].studio << endl;
            if (jFilm[i][0].hari_tayang == "Minggu" || jFilm[i][0].hari_tayang == "minggu" ||
                jFilm[i][0].hari_tayang == "Sabtu" || jFilm[i][0].hari_tayang == "sabtu"){
                cout << "Harga          : Rp." << jFilm[i][0].harga_film << " (Weekend)"<< endl;
            } else {
                cout << "Harga          : Rp." << jFilm[i][0].harga_film << " (Weekdays)"<< endl;
            }
            cout << "Auditorium     : " << jFilm[i][0].auditorium << endl;
            /*
            for (int jam = 0; jam < 4; jam++){
                cout << "   " << jFilm[i][jam].hari_tayang << "\n" << "     " << jFilm[i][jam].jam_tayang;
            } */
            // Menampilkan hari tayang
            cout << "Hari Tayang    : ";
            for (int jam = 0; jam < jFilm[i].size(); jam++) {
                cout << setw(15) << left << jFilm[i][jam].hari_tayang; // Mengatur lebar kolom untuk keselarasan
            }
            cout << endl;

            // Menampilkan jam tayang
            cout << "Jam Tayang     : ";
            for (int jam = 0; jam < jFilm[i].size(); jam++) {
                cout << setw(15) << left << jFilm[i][jam].jam_tayang + " WIB";
            }
            cout << endl << endl;

            tidakDitemukan = true;
        }
    }
}

void tampilFilmBerHari(film Film, vector<vector<jadwalFilm>> &jFilm, string hari, bool tidakDitemukan){
    for (int i = 0; i < Film.judul_film.size(); i++){
        if (!jFilm[i].empty() && hari == jFilm[i][0].hari_tayang){
            cout << endl << "===================== # Film ke-" <<i+1 << " # ====================="<< endl << endl;
            cout << "Judul Film     : " << Film.judul_film[i]<< endl;
            cout << "Produser       : " << Film.produser[i]<< endl;
            cout << "Genre          : " << Film.genre[i] << endl;
            if (Film.durasi[i] >= 60){
                int jam = Film.durasi[i] / 60;
                int menit = Film.durasi[i] % 60;
                if (menit != 0){
                    cout << "Durasi         : " << jam << " Jam " << menit << " Menit (" << Film.durasi[i] << ")" << endl;
                } else if (menit == 0){
                    cout << "Durasi         : " << jam << " Jam " << "(" << Film.durasi[i] << ")" << endl;
                }
            } else {
                cout << "Durasi         : " << Film.durasi[i] << endl;
            }
            cout << "Rating Umur    : " << Film.rate_umur[i] << endl;
            cout << "Keterangan     : " << Film.ket_rate[i] << endl;
            cout << endl << Film.sinopsis[i] << endl;
            cout << endl << "                          # Jadwal Tayang #"<< endl;
            cout << "Tanggal Tayang : " << jFilm[i][0].tanggal_tayang << endl;
            cout << "Studio         : " << jFilm[i][0].studio << endl;
            if (jFilm[i][0].hari_tayang == "Minggu" || jFilm[i][0].hari_tayang == "minggu" ||
                jFilm[i][0].hari_tayang == "Sabtu" || jFilm[i][0].hari_tayang == "sabtu"){
                cout << "Harga          : " << jFilm[i][0].harga_film << " (Weekend)"<< endl;
            } else {
                cout << "Harga          : " << jFilm[i][0].harga_film << " (Weekdays)"<< endl;
            }
            cout << "Auditorium     : " << jFilm[i][0].auditorium << endl;
            // Menampilkan hari tayang
            cout << "Hari Tayang    : ";
            for (int jam = 0; jam < jFilm[i].size(); jam++) {
                cout << setw(15) << left << jFilm[i][jam].hari_tayang; // Mengatur lebar kolom untuk keselarasan
            }
            cout << endl;

            // Menampilkan jam tayang
            cout << "Jam Tayang     : ";
            for (int jam = 0; jam < jFilm[i].size(); jam++) {
                cout << setw(15) << left << jFilm[i][jam].jam_tayang + " WIB";
            }
            cout << endl << endl;

            tidakDitemukan = true;
        }
    }
}

void tampilDataMakdanMin(vector<makanan> vctMkn, vector<minuman> vctMnm, string nicknm){
    cout << endl;
    cout << "||  Selamat datang, " << nicknm << endl << endl;
    cout << ">>>>>>>>>>>>>>>>>>>>>  NGAWI PLAZA PARK - CINEMA XX  <<<<<<<<<<<<<<<<<<<<<" << endl;
    cout << "                   # Sistem Manajemen Pemesanan Tiket #" << endl << endl;
    cout << "                   ~~ Lihat Data Makanan dan Minuman ~~" << endl;
    cout << endl << "===================== # Makanan # ====================="<< endl << endl;
    for (int i = 0; i < vctMkn.size(); i++){
        cout << "  # Makanan ke-" <<i+1 << " #"<< endl;
        cout << "  Nama   : " << vctMkn[i].namaMakanan << endl;
        cout << "  Harga  : Rp." << vctMkn[i].hargaMakanan << endl;
        cout << endl;
    }
    cout << "===================== # Minuman # ====================="<< endl << endl;
    for (int i = 0; i < vctMnm.size(); i++){
        cout << "  # Minuman ke-" <<i+1 << " #"<< endl;
        cout << "  Nama   : " << vctMnm[i].namaMinuman << endl;
        cout << "  Harga  : Rp." << vctMnm[i].hargaMinuman << endl;
        cout << endl;
    }
}

void tampilDataMakanan(vector<makanan> vctMkn, string nicknm){
    cout << endl;
    cout << "||  Selamat datang, " << nicknm << endl << endl;
    cout << ">>>>>>>>>>>>>>>>>>>>>  NGAWI PLAZA PARK - CINEMA XX  <<<<<<<<<<<<<<<<<<<<<" << endl;
    cout << "                   # Sistem Manajemen Pemesanan Tiket #" << endl << endl;
    cout << "                   ~~ Lihat Data Makanan dan Minuman ~~" << endl << endl;
    cout << "===================== # Makanan # ====================="<< endl << endl;
    for (int i = 0; i < vctMkn.size(); i++){
        cout << "# Makanan ke-" <<i+1 << " #"<< endl;
        cout << "  Nama   : " << vctMkn[i].namaMakanan << endl;
        cout << "  Harga  : Rp." << vctMkn[i].hargaMakanan << endl;
        cout << endl;
    }
    cout << "===================== # Minuman # ====================="<< endl << endl;
    cout << "||  Belum ada Data Minuman yang ditambahkan." << endl << endl;
}

void tampilDataMinuman(vector<minuman> vctMnm, string nicknm){
    cout << endl;
    cout << "||  Selamat datang, " << nicknm << endl << endl;
    cout << ">>>>>>>>>>>>>>>>>>>>>  NGAWI PLAZA PARK - CINEMA XX  <<<<<<<<<<<<<<<<<<<<<" << endl;
    cout << "                   # Sistem Manajemen Pemesanan Tiket #" << endl << endl;
    cout << "                   ~~ Lihat Data Makanan dan Minuman ~~" << endl << endl;
    cout << "===================== # Makanan # ====================="<< endl << endl;
    cout << "||  Belum ada Data Minuman yang ditambahkan." << endl << endl;
    cout << "===================== # Minuman # ====================="<< endl << endl;
    for (int i = 0; i < vctMnm.size(); i++){
        cout << "# Minuman ke-" <<i+1 << " #"<< endl;
        cout << "  Nama   : " << vctMnm[i].namaMinuman << endl;
        cout << "  Harga  : Rp." << vctMnm[i].hargaMinuman << endl;
        cout << endl;
    }
}

void tampilTiketPengunjung(vector<tiketPengunjung> vctTiket){
    for (int i = 0; i < vctTiket.size(); i++){
        cout << "   # Tiket ke-" <<i+1 << " #"<< endl;
        cout << "   /\\  /\\  /\\  /\\  /\\  /\\  /\\  /\\  /\\  /\\  /\\  /\\ "<< endl;
        cout << "  /  \\/  \\/  \\/  \\/  \\/  \\/  \\/  \\/  \\/  \\/  \\/  \\ "<< endl;
        cout << " |                                                |"<<endl;
        cout << " |    NGAWI PLAZA PARK               CINEMA XX    |"<<endl;
        cout << " |  --------------------------------------------  |"<<endl;
        cout << " |   a/n " <<setw(37)<< left << vctTiket[i].nama_pengunjung <<"    |"<<endl;
        cout << " |                                                |"<<endl;
        cout << " |   Film        : "<<setw(28)<<left<< vctTiket[i].judul_film << "   |"<<endl;
        cout << " |                 "<<setw(4)<<left<< vctTiket[i].rate_umur <<"("<<setw(23)<<left<<vctTiket[i].ket_rate+")"<<"   |"<<endl;
        cout << " |   Day         : "<<setw(28)<<left<< vctTiket[i].hari_tayang << "   |"<<endl;
        cout << " |   Date        : "<<setw(28)<<left<< vctTiket[i].tanggal_pesan << "   |"<<endl;
        cout << " |   Time        : "<<setw(28)<<left<< vctTiket[i].jam_tayang + " WIB" << "   |"<<endl;
        cout << " |   Seat        : "<<setw(28)<<left<< vctTiket[i].seat << "   |"<<endl;
        cout << " |   Auditorium  : "<<setw(28)<<left<< vctTiket[i].auditorium << "   |"<<endl;
        cout << " |   Price       : Rp."<<setw(25)<<left<< vctTiket[i].harga << "   |"<<endl;
        cout << " |   INCL. TAX                                    |"<<endl;
        cout << " |                                                |"<<endl;
        cout << " |  --------------------------------------------  |"<<endl;
        cout << " |   Selamat Menonton - Terima kasih              |"<<endl;
        cout << " |                                                |"<<endl;
        cout << "  \\  /\\  /\\  /\\  /\\  /\\  /\\  /\\  /\\  /\\  /\\  /\\  /"<<endl;
        cout << "   \\/  \\/  \\/  \\/  \\/  \\/  \\/  \\/  \\/  \\/  \\/  \\/ "<<endl;
        cout << endl;
    }
}

void tampilPilihanHpsMakOrMin(string nicknm){
    cout << endl;
    cout << "||  Selamat datang, " << nicknm << endl << endl;
    cout << ">>>>>>>>>>>>>>>>>>>>>  NGAWI PLAZA PARK - CINEMA XX  <<<<<<<<<<<<<<<<<<<<<" << endl;
    cout << "                   # Sistem Manajemen Pemesanan Tiket #" << endl << endl;
    cout << "                   ~~ Hapus Data Makanan dan Minuman ~~" << endl << endl;
    cout << "   ====================== X ======================" << endl;
    cout << "    |   Ingin hapus data apa :                  |" << endl;
    cout << "    |   1. Makanan                              |" << endl;
    cout << "    |   2. Minuman                              |" << endl;
    cout << "    |   0. Kembali ke Menu Makanan dan Minuman  |" << endl;
    cout << "   ====================== X ======================" << endl;
}

void tampilPilTambahMakOrMin(string nicknm){
    cout << endl;
    cout << "||  Selamat datang, " << nicknm << endl << endl;
    cout << ">>>>>>>>>>>>>>>>>>>>>  NGAWI PLAZA PARK - CINEMA XX  <<<<<<<<<<<<<<<<<<<<<" << endl;
    cout << "                   # Sistem Manajemen Pemesanan Tiket #" << endl << endl;
    cout << "                  ~~ Tambah Data Makanan dan Minuman ~~" << endl << endl;
    cout << "   ====================== X ======================" << endl;
    cout << "    |   Ingin tambah data apa :                 |" << endl;
    cout << "    |   1. Makanan                              |" << endl;
    cout << "    |   2. Minuman                              |" << endl;
    cout << "    |   0. Kembali ke Menu Makanan dan Minuman  |" << endl;
    cout << "   ====================== X ======================" << endl;
}

void tampilFilmBerdasarkan(){
    cout << "====================== X ======================" << endl;
    cout << " |   Tampilkan Film Berdasarkan :            |" << endl;
    cout << " |   1. Auditorium                           |" << endl;
    cout << " |   2. Hari                                 |" << endl;
    cout << " |   3. Semuanya                             |" << endl;
    cout << "====================== X ======================" << endl;
}

void tampilHeadTambahTiket(string nicknm){
    cout << endl;
    cout << "||  Selamat datang, " << nicknm << endl << endl;
    cout << ">>>>>>>>>>>>>>>>>>>>>  NGAWI PLAZA PARK - CINEMA XX  <<<<<<<<<<<<<<<<<<<<<" << endl;
    cout << "                   # Sistem Manajemen Pemesanan Tiket #" << endl << endl;
    cout << "                 ~~ Pembuatan Tiket Bioskop Pengunjung ~~" << endl;
}

const string dfgd = "admin123";

int main(){
    string pw, nicknm, jdlFilm, sinopFilm, genrFilm, tglTayang, hrTayang, rStudio, jamTayang, prod, exit, nmMkn, nmMnm, nmPengunjung,
    session, strYesorno, semuaSeat;
    char ch, yesorno;
    int pilihan, duraFilm, audi, harga, hrgMkn, hrgMnm, pilihSeat, pilihMknMnm, jumlahTiket, pilihJam,
        total_biaya, biaya_mkn, biaya_mnm, biaya_film, ppn, biaya_film_ppn, ppnPerFilm, mtdPembyrn, uangBayar, uangKembalian;
    bool backToMainMenu = false, backToFilmMenu = false, backToMknMnmMenu = false, backToTiketMenu = false;

    vector<tiketPengunjung> vctTiket;
    tiketPengunjung strctTiket;
    vector<transaksiPengunjung> vctTransaksi;
    transaksiPengunjung strctTransaksi;
    // jadwalFilm jFilm[50][4];
    vector<vector<jadwalFilm>> jFilm;
    vector<jadwalFilm> jamTayangFilm;
    jadwalFilm jadwal;
    film Film;
    transaksiPengunjung transaksiP;
    vector<makanan> vctMkn;
    makanan strctMkn;
    vector<minuman> vctMnm;
    minuman strctMnm;


    // PEMBUKA FORM LOGIN
    tampilNamaKelompok();
    cout << "  | ====================== LOGIN KE PROGRAM ====================== | " << endl << endl;
    cout << "   i : Selain Admin dan Petugas, dilarang masuk!" << endl << endl;
    do {
        cout << "   Masukkan Nama     :\n   => ";
        getline(cin, nicknm);
        if (nicknm == ""){
            system("cls");
            tampilNamaKelompok();
            cout << "  | ====================== LOGIN KE PROGRAM ====================== | " << endl << endl;
            cout << "   i : Selain Admin dan Petugas, dilarang masuk!" << endl;
            cout << "   Nama tidak boleh kosong!" << endl;
        }
    } while (nicknm == "");
    system("cls");
    tampilNamaKelompok();
    cout << "  | ====================== LOGIN KE PROGRAM ====================== | " << endl << endl;
    cout << "   i : Selain Admin dan Petugas, dilarang masuk!" << endl << endl;
    cout << "   Masukkan Nama     :\n   => ";
    cout << nicknm;
    cout << "\n\n\n   Masukkan Password :\n   => ";
    do {
        pw = "";
        cin >> pw;

        system("cls");
        if (pw != dfgd){
            tampilNamaKelompok();
            cout << "  | ====================== LOGIN KE PROGRAM ====================== | " << endl << endl;
            cout << "   i : Selain Admin dan Petugas, dilarang masuk!" << endl << endl;
            cout << "   Masukkan Nama     :\n   => ";
            cout << nicknm;
            cout << endl << endl << "   Password salah!" << endl;
            cout << "   Masukkan Password :\n   => ";
        }
    } while (pw != dfgd);
    // PEMBUKA FORM LOGIN

    // MENU UTAMA
    do {
        tampilMenuUtama(nicknm);

        do {
            cout << "||  Masukkan Pilihan (1/2/3/4) :\n  => ";
            cin >> pilihan;
            if (pilihan < 1 || pilihan > 4) {
                system("cls");
                tampilMenuUtama(nicknm);

                cout << "Pilihan " << pilihan << " tidak tersedia!\n" << endl;
            }
        } while (pilihan < 1 || pilihan > 4);

        switch (pilihan){
            case 1: // Menu Data Tiket Pengunjung
                do {
                    system("cls");
                    tampilMenuTiketPengunjung(nicknm);
                    do {
                        cout << "||  Masukkan Pilihan (1/2/3/4/5) :\n  => ";
                        cin >> pilihan;
                        if (pilihan < 1 || pilihan > 5) {
                            system("cls");
                            tampilMenuTiketPengunjung(nicknm);

                            cout << "Pilihan " << pilihan << " tidak tersedia!\n" << endl;
                        }
                    } while (pilihan < 1 || pilihan > 5);

                    switch (pilihan){
                        case 1: // Tambah tiket pengunjung
                            do {
                                if (Film.judul_film.size() == 0){
                                    system("cls");
                                    tampilHeadTambahTiket(nicknm);
                                    cout << "\n||  Belum ada Film yang ditambahkan." << endl << endl << endl;
                                    cout << "Ketik 'exit' untuk kembali ke Menu Film : ";
                                    do {
                                        do {
                                            cin >> exit;
                                            if (exit == ""){
                                                system("cls");
                                                tampilHeadTambahTiket(nicknm);
                                                cout << "\n||  Belum ada Film yang ditambahkan." << endl << endl;
                                                cout << "Input kosong!" << endl;
                                                cout << "Ketik 'exit' untuk kembali ke Menu Tiket : ";
                                            }
                                        } while (exit == "");

                                        if (exit != "exit" && exit != "EXIT" && exit != "Exit"){
                                            system("cls");
                                            tampilHeadTambahTiket(nicknm);
                                            cout << "\n||  Belum ada Film yang ditambahkan." << endl << endl;
                                            cout << "Input tidak sesuai!" << endl;
                                            cout << "Ketik 'exit' untuk kembali ke Menu Tiket : ";
                                        }
                                    } while (exit != "exit" && exit != "EXIT" && exit != "Exit");

                                    backToTiketMenu = true;
                                    system("cls");
                                    break;
                                } else {
                                    system("cls");
                                    tampilHeadTambahTiket(nicknm);
                                    cout << "\n  =================== X ===================" << endl;
                                    for (int i = 0; i < Film.judul_film.size(); i++){
                                        cout <<"   "<<i+1<< ". " << Film.judul_film[i] << endl;
                                    }
                                    cout << "  =========================================" << endl << endl;
                                    do {
                                        cout << "||  Pilih Film yang Ingin Ditonton (Ketik angka)(0 untuk keluar) : ";
                                        cin >> pilihan;

                                        if (pilihan > Film.judul_film.size() || pilihan < 0){
                                            system("cls");
                                            tampilHeadTambahTiket(nicknm);
                                            cout << "\n========================= X =========================" << endl;
                                            for (int i = 0; i < Film.judul_film.size(); i++){
                                                cout <<"   "<<i+1<< ". " << Film.judul_film[i] << endl;
                                            }
                                            cout << "========================= X =========================" << endl;
                                            cout << "Input "<< pilihan << " tidak sesuai!" << endl;
                                        }
                                    } while (pilihan > Film.judul_film.size() || pilihan < 0);

                                    if (pilihan == 0){
                                        system("cls");
                                        backToTiketMenu = true;
                                        break;
                                    } else {
                                        cout << endl << "   # Film yang Dipilih # : " << Film.judul_film[pilihan - 1] << endl << endl;
                                        cout << "||  Atas nama :\n  => ";
                                        cin.ignore();
                                        getline(cin, nmPengunjung);

                                        cout << "\n||  Ingin memesan berapa tiket :\n  => ";
                                        cin >> jumlahTiket;
                                        biaya_film = jFilm[pilihan - 1][0].harga_film * jumlahTiket; // biaya film
                                        cout << "\nJam Tayang     : ";
                                        for (int jam = 0; jam < jFilm[pilihan - 1].size(); jam++) {
                                            cout << jam+1 << ". " << jFilm[pilihan - 1][jam].jam_tayang << " WIB    ";
                                        }
                                        cout << endl;
                                        do {
                                            cout << "||  Pilih Jam Tayang Film (input angka) :\n  => ";
                                            cin >> pilihJam;
                                            if (pilihJam < 1 || pilihJam > 4){
                                                cout << endl << "Input tidak valid! Pilih Jam Tayang yang ada." << endl;
                                            }
                                        } while (pilihJam < 1 || pilihJam > 4);
                                        cout << "\n||  Tampilan Seat" << endl;
                                        for (int i = 1; i <= jumlahTiket; i++){
                                            cout << "                   LAYAR BIOSKOP"<<endl;
                                            cout << "----------------------------------------------------"<<endl<<endl;
                                            cout << "    ";
                                            // menampilkan seat
                                            for (int j = 0; j < 50; j++){
                                                if (j % 5 == 0 && j != 0){
                                                    cout << "\t";
                                                }
                                                if (j % 10 == 0 && j != 0){
                                                    cout << endl << "    ";
                                                }
                                                string kursi = jFilm[pilihan - 1][pilihJam - 1].seat[j];
                                                string kursiNew =  (kursi == "XX")? "XX" : (stoi(kursi) < 10 ? "0"+kursi : kursi);
                                                cout << (kursiNew == "XX" ? "XX" : kursiNew) << "  ";
                                            }
                                            cout << "\n\n||  Pilih kursi ke-"<< i <<" :\n  => ";
                                            do {
                                                cin >> pilihSeat;
                                                if (jFilm[pilihan - 1][pilihJam - 1].seat[pilihSeat - 1] == "XX"){
                                                    cout << "Seat " << pilihSeat << " sudah dipesan."<< endl;
                                                    cout << "||  Pilih kursi ke-"<< i <<" :\n  => ";
                                                }
                                            } while (jFilm[pilihan - 1][pilihJam - 1].seat[pilihSeat - 1] == "XX");

                                            jFilm[pilihan - 1][pilihJam - 1].seat[pilihSeat - 1] = "XX";
                                            strctTiket.seat = to_string(pilihSeat);
                                            strctTransaksi.semuaSeat.push_back(to_string(pilihSeat));
                                            cout << endl;

                                            strctTiket.nama_pengunjung = nmPengunjung;
                                            strctTiket.judul_film = Film.judul_film[pilihan - 1];
                                            strctTiket.rate_umur = Film.rate_umur[pilihan - 1];
                                            strctTiket.ket_rate = Film.ket_rate[pilihan - 1];
                                            strctTiket.tanggal_pesan = jFilm[pilihan - 1][0].tanggal_tayang;
                                            strctTiket.hari_tayang = jFilm[pilihan - 1][0].hari_tayang;
                                            strctTiket.auditorium = jFilm[pilihan - 1][0].auditorium;
                                            strctTiket.harga = jFilm[pilihan - 1][0].harga_film;
                                            strctTiket.jam_tayang = jFilm[pilihan - 1][pilihJam - 1].jam_tayang;
                                            vctTiket.push_back(strctTiket);
                                        }

                                        if (vctMkn.size() == 0){
                                            cout <<endl<< "## Tidak ada Stok Makanan" << endl;
                                            nmMkn = " - ";
                                            biaya_mkn = 0;
                                        } else if (vctMkn.size() != 0){
                                            do {
                                                cout << "||  Apakah ingin membeli makanan? (y/n) : ";
                                                cin >> yesorno;
                                                if (yesorno != 'y' && yesorno != 'Y' && yesorno != 'n' && yesorno != 'N'){
                                                    cout << endl << "Input tidak sesuai!" << endl;
                                                }
                                            } while (yesorno != 'y' && yesorno != 'Y' && yesorno != 'n' && yesorno != 'N');
                                            if (yesorno == 'y' || yesorno == 'Y'){
                                                cout << endl;
                                                for (int i = 0; i < vctMkn.size(); i++){
                                                    cout << "# Makanan ke-" <<i+1 << " #"<< endl;
                                                    cout << "Nama   : " << vctMkn[i].namaMakanan << endl;
                                                    cout << "Harga  : Rp." << vctMkn[i].hargaMakanan << endl;
                                                    cout << endl;
                                                }
                                                do {
                                                    cout << "||  Pilih makanan (1-"<< vctMkn.size() <<")(0 untuk batal) :\n  => ";
                                                    cin >> pilihMknMnm;
                                                    if (pilihMknMnm > vctMkn.size() || pilihMknMnm < 0){
                                                        cout << "Makanan ke-"<< pilihMknMnm << " tidak ada!" << endl;
                                                    }
                                                } while (pilihMknMnm > vctMkn.size() || pilihMknMnm < 0);

                                                if (pilihMknMnm != 0){
                                                    nmMkn = vctMkn[pilihMknMnm - 1].namaMakanan;
                                                    biaya_mkn = vctMkn[pilihMknMnm - 1].hargaMakanan;
                                                }
                                            } else if (yesorno == 'n' || yesorno == 'N') {
                                                nmMkn = " - ";
                                                biaya_mkn = 0;
                                            }
                                        }

                                        if (vctMnm.size() == 0){
                                            cout <<endl<< "## Tidak ada Stok Minuman" << endl;
                                            nmMnm = " - ";
                                            biaya_mnm = 0;
                                        } else if (vctMnm.size() != 0){
                                            do {
                                                cout << "||  Apakah ingin membeli minuman? (y/n) : ";
                                                cin >> yesorno;
                                                if (yesorno != 'y' && yesorno != 'Y' && yesorno != 'n' && yesorno != 'N'){
                                                    cout << endl << "Input tidak sesuai!" << endl;
                                                }
                                            } while (yesorno != 'y' && yesorno != 'Y' && yesorno != 'n' && yesorno != 'N');
                                            if (yesorno == 'y' || yesorno == 'Y'){
                                                cout << endl;
                                                for (int i = 0; i < vctMnm.size(); i++){
                                                    cout << "# Minuman ke-" <<i+1 << " #"<< endl;
                                                    cout << "Nama   : " << vctMnm[i].namaMinuman << endl;
                                                    cout << "Harga  : Rp." << vctMnm[i].hargaMinuman << endl;
                                                    cout << endl;
                                                }
                                                do {
                                                    cout << "||  Pilih minuman (1-"<< vctMnm.size() <<")(0 untuk batal) :\n  => ";
                                                    cin >> pilihMknMnm;
                                                    if (pilihMknMnm > vctMnm.size() || pilihMknMnm < 0){
                                                        cout << "Minuman ke-"<< pilihMknMnm << " tidak ada!" << endl;
                                                    }
                                                } while (pilihMknMnm > vctMnm.size() || pilihMknMnm < 0);

                                                if (pilihMknMnm != 0){
                                                    nmMnm = vctMnm[pilihMknMnm - 1].namaMinuman;
                                                    biaya_mnm = vctMnm[pilihMknMnm - 1].hargaMinuman;
                                                }
                                            } else if (yesorno == 'n' || yesorno == 'N') {
                                                nmMnm = " - ";
                                                biaya_mnm = 0;
                                            }
                                        }
                                        ppnPerFilm = 0.1 * jFilm[pilihan - 1][0].harga_film;
                                        ppn = 0.1 * biaya_film;
                                        biaya_film_ppn = ppn + biaya_film;
                                        total_biaya = biaya_film_ppn + biaya_mkn + biaya_mnm;

                                        cout << "  =========================== X ===========================" << endl;
                                        cout << "  |                    Rincian Biaya                      |"<< endl;
                                        cout << "  =========================================================" << endl;
                                        cout << "  |        Items            | qty |   Price   |   Total   |" << endl;
                                        cout << "    "<< setw(27) <<left<< Film.judul_film[pilihan - 1]
                                        <<setw(5)<<left<<jumlahTiket<<"Rp."<<setw(9)<<left<<jFilm[pilihan - 1][0].harga_film <<"Rp."<<biaya_film << endl;
                                        cout << "    PPN 10%                    "<<setw(5)<<left<<jumlahTiket<<"Rp."<<setw(9)<<left<<ppnPerFilm<<"Rp."<<ppn<<endl;
                                        cout << "    "<< setw(27) <<left<< nmMkn <<setw(5)<<left<<(nmMkn == " - " ? "0":"1")<<"Rp."<<setw(9)<<left<<(biaya_mkn == 0?"-":to_string(biaya_mkn))<<(biaya_mkn == 0?"Rp.-":"Rp."+ to_string(biaya_mkn))<< endl;
                                        cout << "    "<< setw(27) <<left<< nmMnm <<setw(5)<<left<<(nmMnm == " - " ? "0":"1")<<"Rp."<<setw(9)<<left<<(biaya_mnm == 0?"-":to_string(biaya_mnm))<<(biaya_mnm == 0?"Rp.-":"Rp."+ to_string(biaya_mnm))<< endl;
                                        cout << "  ---------------------------------------------------------" << endl;
                                        cout << "    Total Biaya :                              Rp."<<total_biaya<<endl;
                                        cout << "  =========================================================" << endl;
                                        cout << "\n=========== X ===========" << endl;
                                        cout << " | 1. Tunai            |" << endl;
                                        cout << " | 2. QRIS             |" << endl;
                                        cout << " | 3. Dana             |" << endl;
                                        cout << " | 4. OVO              |" << endl;
                                        cout << " | 5. GoPay            |" << endl;
                                        cout << " | 6. SeaBank          |" << endl;
                                        cout << " | 7. M-banking        |" << endl;
                                        cout << "=========== X ===========" << endl;
                                        do {
                                            cout <<endl<< "||  Metode Pembayaran (angka 1-7) : ";
                                            cin >> mtdPembyrn;
                                            if (mtdPembyrn == 1){
                                                cout <<endl<< "||  Masukkan uang (>= "<<total_biaya<<") : ";
                                                do {
                                                    cin >> uangBayar;
                                                    if (uangBayar < total_biaya){
                                                        cout << "Uang yang dibayar kurang dari Rp."<<total_biaya<< " !"<< endl;
                                                        cout <<endl<< "||  Masukkan uang (cth 150000) : ";
                                                    }
                                                } while (uangBayar < total_biaya);
                                                uangKembalian = uangBayar - total_biaya;
                                                cout <<endl<< "Uang Kembalian anda : Rp."<< uangKembalian << endl;
                                                strctTransaksi.mtd_pembyr = "Tunai";
                                                strctTransaksi.uang_dibayarkan = uangBayar;
                                                strctTransaksi.kembalian = uangKembalian;
                                            } else if (mtdPembyrn == 2){
                                                cout <<endl<< "Metode yang Dipilih : QRIS"<< endl;
                                                strctTransaksi.mtd_pembyr = "QRIS";
                                                strctTransaksi.uang_dibayarkan = total_biaya;
                                                strctTransaksi.kembalian = 0;
                                            } else if (mtdPembyrn == 3){
                                                cout <<endl<< "Metode yang Dipilih : Dana"<< endl;
                                                strctTransaksi.mtd_pembyr = "Dana";
                                                strctTransaksi.uang_dibayarkan = total_biaya;
                                                strctTransaksi.kembalian = 0;
                                            } else if (mtdPembyrn == 4){
                                                cout <<endl<< "Metode yang Dipilih : OVO"<< endl;
                                                strctTransaksi.mtd_pembyr = "OVO";
                                                strctTransaksi.uang_dibayarkan = total_biaya;
                                                strctTransaksi.kembalian = 0;
                                            } else if (mtdPembyrn == 5){
                                                cout <<endl<< "Metode yang Dipilih : GoPay"<< endl;
                                                strctTransaksi.mtd_pembyr = "GoPay";
                                                strctTransaksi.uang_dibayarkan = total_biaya;
                                                strctTransaksi.kembalian = 0;
                                            } else if (mtdPembyrn == 6){
                                                cout <<endl<< "Metode yang Dipilih : SeaBank"<< endl;
                                                strctTransaksi.mtd_pembyr = "SeaBank";
                                                strctTransaksi.uang_dibayarkan = total_biaya;
                                                strctTransaksi.kembalian = 0;
                                            } else if (mtdPembyrn == 7){
                                                cout <<endl<< "Metode yang Dipilih : M-banking"<< endl;
                                                strctTransaksi.mtd_pembyr = "M-banking";
                                                strctTransaksi.uang_dibayarkan = total_biaya;
                                                strctTransaksi.kembalian = 0;
                                            }
                                            if (mtdPembyrn < 1 || mtdPembyrn > 7){
                                                cout << "Pilihan "<<mtdPembyrn<< " tidak ada!"<< endl;
                                            }
                                        } while (mtdPembyrn < 1 || mtdPembyrn > 7);


                                        strctTransaksi.nama_pengunjung = nmPengunjung;
                                        strctTransaksi.nama_makanan = nmMkn;
                                        strctTransaksi.nama_minuman = nmMnm;
                                        strctTransaksi.judul_film = Film.judul_film[pilihan - 1];
                                        strctTransaksi.tanggal_pesan = jFilm[pilihan - 1][0].tanggal_tayang;
                                        strctTransaksi.hari_pesan = jFilm[pilihan - 1][0].hari_tayang;
                                        strctTransaksi.jam_tayang = jFilm[pilihan - 1][pilihJam - 1].jam_tayang;
                                        strctTransaksi.jumlah_seat = jumlahTiket;
                                        strctTransaksi.total_harga = total_biaya;
                                        strctTransaksi.harga_makanan = biaya_mkn;
                                        strctTransaksi.harga_minuman = biaya_mnm;
                                        strctTransaksi.harga_film = jFilm[pilihan - 1][0].harga_film;
                                        strctTransaksi.total_harga_film = biaya_film;
                                        strctTransaksi.ppn = ppn;
                                        strctTransaksi.harga_film_ppn = biaya_film_ppn;
                                        vctTransaksi.push_back(strctTransaksi);
                                    }
                                }
                                cout << "\nBerhasil memesan Tiket Film '" << Film.judul_film[pilihan - 1] << "'!" << endl << endl;
                                cout << "Apakah ingin menambahkan Film kembali? (y/n) : ";
                                cin >> yesorno;
                            } while (yesorno == 'Y' || yesorno == 'y');
                            backToTiketMenu = true;
                            system("cls");
                            break;
                        case 2: // Lihat Tiket Pengunjung
                            system("cls");
                            cout << endl;
                            cout << "||  Selamat datang, " << nicknm << endl << endl;
                            cout << ">>>>>>>>>>>>>>>>>>>>>  NGAWI PLAZA PARK - CINEMA XX  <<<<<<<<<<<<<<<<<<<<<" << endl;
                            cout << "                   # Sistem Manajemen Pemesanan Tiket #" <<endl<<endl;
                            cout << "                       ~~ Lihat Tiket Pengunjung ~~" <<endl<<endl;

                            if (vctTiket.size() == 0){
                                cout << "\n||  Belum ada Pemesanan Tiket yang ditambahkan." << endl << endl;
                                do {
                                    do {
                                        cout << "Ketik 'exit' untuk kembali ke Menu Tiket : ";
                                        cin >> exit;
                                        if (exit == ""){
                                            system("cls");
                                            cout << endl;
                                            cout << "||  Selamat datang, " << nicknm << endl << endl;
                                            cout << ">>>>>>>>>>>>>>>>>>>>>  NGAWI PLAZA PARK - CINEMA XX  <<<<<<<<<<<<<<<<<<<<<" << endl;
                                            cout << "                   # Sistem Manajemen Pemesanan Tiket #" <<endl<<endl;
                                            cout << "                       ~~ Lihat Tiket Pengunjung ~~" <<endl<<endl;
                                            cout << "\n||  Belum ada Pemesanan Tiket yang ditambahkan." << endl << endl;
                                            cout << "Input kosong!" << endl;
                                        }
                                    } while (exit == "");

                                    if (exit != "exit" && exit != "EXIT"){
                                        system("cls");
                                        cout << endl;
                                        cout << "||  Selamat datang, " << nicknm << endl << endl;
                                        cout << ">>>>>>>>>>>>>>>>>>>>>  NGAWI PLAZA PARK - CINEMA XX  <<<<<<<<<<<<<<<<<<<<<" << endl;
                                        cout << "                   # Sistem Manajemen Pemesanan Tiket #" <<endl<<endl;
                                        cout << "                       ~~ Lihat Tiket Pengunjung ~~" <<endl<<endl;
                                        cout << "\n||  Belum ada Pemesanan Tiket yang ditambahkan." << endl << endl;
                                        cout << "Input tidak sesuai!" << endl;
                                    }
                                } while (exit != "exit" && exit != "EXIT");

                                backToTiketMenu = true;
                                system("cls");
                                break;
                            } else {
                                tampilTiketPengunjung(vctTiket);
                                cout << "||  Ketik 'exit' untuk kembali ke Menu Film : ";
                                do {
                                    do {
                                        cin >> exit;
                                        if (exit == ""){
                                            system("cls");
                                            tampilDataFilm(Film, jFilm);
                                            cout << "Input kosong!" << endl;
                                            cout << "Ketik 'exit' untuk kembali ke Menu Film : ";
                                        }
                                    } while (exit == "");

                                    if (exit != "exit" && exit != "EXIT"){
                                        system("cls");
                                        tampilDataFilm(Film, jFilm);
                                        cout << "Input tidak sesuai!" << endl;
                                        cout << "Ketik 'exit' untuk kembali ke Menu Film : ";
                                    }
                                } while (exit != "exit" && exit != "EXIT");

                                backToTiketMenu = true;
                                system("cls");
                            }
                            break;

                        case 3: // Lihat Transaksi Pengunjung
                            system("cls");
                            cout << endl;
                            cout << "||  Selamat datang, " << nicknm << endl << endl;
                            cout << ">>>>>>>>>>>>>>>>>>>>>  NGAWI PLAZA PARK - CINEMA XX  <<<<<<<<<<<<<<<<<<<<<" << endl;
                            cout << "                   # Sistem Manajemen Pemesanan Tiket #" <<endl<<endl;
                            cout << "                     ~~ Lihat Transaksi Pengunjung ~~" <<endl<<endl;

                            if (vctTransaksi.size() == 0){
                                cout << "\n||  Belum ada Transaksi yang ditambahkan." << endl << endl;
                                do {
                                    do {
                                        cout << "Ketik 'exit' untuk kembali ke Menu Tiket : ";
                                        cin >> exit;
                                        if (exit == ""){
                                            system("cls");
                                            cout << endl;
                                            cout << "||  Selamat datang, " << nicknm << endl << endl;
                                            cout << ">>>>>>>>>>>>>>>>>>>>>  NGAWI PLAZA PARK - CINEMA XX  <<<<<<<<<<<<<<<<<<<<<" << endl;
                                            cout << "                   # Sistem Manajemen Pemesanan Tiket #" <<endl<<endl;
                                            cout << "                     ~~ Lihat Transaksi Pengunjung ~~" <<endl<<endl;
                                            cout << "\n||  Belum ada Transaksi yang ditambahkan." << endl << endl;
                                            cout << "Input kosong!" << endl;
                                        }
                                    } while (exit == "");

                                    if (exit != "exit" && exit != "EXIT"){
                                        system("cls");
                                        cout << endl;
                                        cout << "||  Selamat datang, " << nicknm << endl << endl;
                                        cout << ">>>>>>>>>>>>>>>>>>>>>  NGAWI PLAZA PARK - CINEMA XX  <<<<<<<<<<<<<<<<<<<<<" << endl;
                                        cout << "                   # Sistem Manajemen Pemesanan Tiket #" <<endl<<endl;
                                        cout << "                     ~~ Lihat Transaksi Pengunjung ~~" <<endl<<endl;
                                        cout << "\n||  Belum ada Transaksi yang ditambahkan." << endl << endl;
                                        cout << "Input tidak sesuai!" << endl;
                                    }
                                } while (exit != "exit" && exit != "EXIT");

                                backToTiketMenu = true;
                                system("cls");
                                break;
                            } else {
                                for (int i = 0; i < vctTransaksi.size(); i++){
                                    cout << "   # Transaksi ke-" <<i+1 << " #"<< endl << endl;
                                    cout << "     NGAWI PLAZA PARK                     CINEMA XX "<<endl;
                                    cout << "   --------------------------------------------------"<<endl;
                                    cout << "    a/n " << vctTransaksi[i].nama_pengunjung <<endl<<endl;
                                    cout << "    "<< vctTransaksi[i].judul_film <<endl;
                                    cout << "    "<< vctTransaksi[i].hari_pesan << ", "<< vctTransaksi[i].tanggal_pesan <<" - "<< vctTransaksi[i].jam_tayang + " WIB" <<endl;
                                    cout << "    Harga Film     : Rp."<< vctTransaksi[i].harga_film <<endl;
                                    cout << "    Jumlah Tiket   : "<< vctTransaksi[i].jumlah_seat <<" tiket"<<endl;
                                    cout << "    Kursi Dipilih  : ";
                                    for (int j = 0; j < vctTransaksi[i].semuaSeat.size(); j++){
                                        cout <<"#"<< vctTransaksi[i].semuaSeat[j] << "  ";
                                    }
                                    cout <<endl<< "    Makanan        : "<< vctTransaksi[i].nama_makanan <<endl;
                                    cout << "    Minuman        : "<< vctTransaksi[i].nama_minuman <<endl;
                                    cout << "    Total Biaya    : Total Harga Film  = Rp."<< vctTransaksi[i].total_harga_film << " ("<<vctTransaksi[i].jumlah_seat<<" tiket x Rp."<<vctTransaksi[i].harga_film<<")"<<endl;
                                    cout << "                     PPN 10%           = Rp."<< vctTransaksi[i].ppn <<endl;
                                    cout << "                     Harga Makanan     = Rp."<< vctTransaksi[i].harga_makanan <<endl;
                                    cout << "                     Harga Minuman     = Rp."<< vctTransaksi[i].harga_minuman <<endl;
                                    cout << "                     -------------------------------- +" << endl;
                                    cout << "                     Total Harga       = Rp."<< vctTransaksi[i].total_harga <<endl;
                                    cout << "    Metode Bayar   : "<< vctTransaksi[i].mtd_pembyr <<endl;
                                    cout << "    Uang Dibayar   : Rp."<< vctTransaksi[i].uang_dibayarkan <<endl;
                                    cout << "    Uang Kembalian : Rp."<< vctTransaksi[i].kembalian << endl << endl;
                                    cout << "   --------------------------------------------------"<<endl;
                                    cout << endl;
                                }
                                cout << "||  Ketik 'exit' untuk kembali ke Menu Film : ";
                                do {
                                    do {
                                        cin >> exit;
                                        if (exit == ""){
                                            system("cls");
                                            tampilDataFilm(Film, jFilm);
                                            cout << "Input kosong!" << endl;
                                            cout << "Ketik 'exit' untuk kembali ke Menu Film : ";
                                        }
                                    } while (exit == "");

                                    if (exit != "exit" && exit != "EXIT"){
                                        system("cls");
                                        tampilDataFilm(Film, jFilm);
                                        cout << "Input tidak sesuai!" << endl;
                                        cout << "Ketik 'exit' untuk kembali ke Menu Film : ";
                                    }
                                } while (exit != "exit" && exit != "EXIT");

                                backToTiketMenu = true;
                                system("cls");
                            }
                            break;

                        case 4: // Hapus Tiket Pengunjung
                            system("cls");
                            cout << endl;
                            cout << "||  Selamat datang, " << nicknm << endl << endl;
                            cout << ">>>>>>>>>>>>>>>>>>>>>  NGAWI PLAZA PARK - CINEMA XX  <<<<<<<<<<<<<<<<<<<<<" << endl;
                            cout << "                   # Sistem Manajemen Pemesanan Tiket #" << endl << endl;
                            cout << "                       ~~ Hapus Tiket Pengunjung ~~" << endl << endl;
                            if (vctTiket.size() == 0){
                                cout << "\n||  Belum ada Tiket Pengunjung yang ditambahkan." << endl << endl;
                                cout << "Ketik 'exit' untuk kembali ke Menu Tiket : ";
                                do {
                                    do {
                                        cin >> exit;
                                        if (exit == ""){
                                            system("cls");
                                            cout << endl;
                                            cout << "||  Selamat datang, " << nicknm << endl << endl;
                                            cout << ">>>>>>>>>>>>>>>>>>>>>  NGAWI PLAZA PARK - CINEMA XX  <<<<<<<<<<<<<<<<<<<<<" << endl;
                                            cout << "                   # Sistem Manajemen Pemesanan Tiket #" << endl << endl;
                                            cout << "                       ~~ Hapus Tiket Pengunjung ~~" << endl << endl;
                                            cout << "\n||  Belum ada Tiket Pengunjung yang ditambahkan." << endl << endl;
                                            cout << "Input kosong!" << endl;
                                            cout << "Ketik 'exit' untuk kembali ke Menu Tiket : ";
                                        }
                                    } while (exit == "");
                                    if (exit != "exit" && exit != "EXIT"){
                                        system("cls");
                                        cout << endl;
                                        cout << "||  Selamat datang, " << nicknm << endl << endl;
                                        cout << ">>>>>>>>>>>>>>>>>>>>>  NGAWI PLAZA PARK - CINEMA XX  <<<<<<<<<<<<<<<<<<<<<" << endl;
                                        cout << "                   # Sistem Manajemen Pemesanan Tiket #" << endl << endl;
                                        cout << "                       ~~ Hapus Tiket Pengunjung ~~" << endl << endl;
                                        cout << "\n||  Belum ada Tiket Pengunjung yang ditambahkan." << endl << endl;
                                        cout << "Input harus 'exit' atau 'EXIT'!" << endl;
                                        cout << "Ketik 'exit' untuk kembali ke Menu Tiket : ";
                                    }
                                } while (exit != "exit" && exit != "EXIT");
                                backToTiketMenu = true;
                                system("cls");
                                break;
                            } else {
                                do {
                                    tampilTiketPengunjung(vctTiket);
                                    do {
                                        cout << "||  Tiket Ke Berapa Yang Ingin Dihapus? (Ketik Angka)(ketik 0 untuk keluar) : ";
                                        cin >> pilihan;
                                        if (pilihan > vctTiket.size() || pilihan < 0){
                                            system("cls");
                                            cout << endl;
                                            cout << "||  Selamat datang, " << nicknm << endl << endl;
                                            cout << ">>>>>>>>>>>>>>>>>>>>>  NGAWI PLAZA PARK - CINEMA XX  <<<<<<<<<<<<<<<<<<<<<" << endl;
                                            cout << "                   # Sistem Manajemen Pemesanan Tiket #" << endl << endl;
                                            cout << "                       ~~ Hapus Tiket Pengunjung ~~" << endl << endl;
                                            tampilTiketPengunjung(vctTiket);
                                            cout << "Tiket ke-"<< pilihan << " tidak ada!" << endl;
                                        }
                                    } while (pilihan > vctTiket.size() || pilihan < 0);

                                    if (pilihan == 0){
                                        system("cls");
                                        backToTiketMenu = true;
                                        break;
                                    } else {
                                        vctTiket.erase(vctTiket.begin() + pilihan - 1);
                                    }
                                    cout << "\Tiket ke-"<<" Telah Dihapus" << endl << endl;

                                    do {
                                        cout << "||  Apakah ingin menghapus Tiket kembali? (y/n) : ";
                                        cin >> yesorno;
                                        if (yesorno != 'y' && yesorno != 'Y' && yesorno != 'n' && yesorno != 'N'){
                                            cout << endl << "Input tidak sesuai!" << endl;
                                        }
                                    } while (yesorno != 'y' && yesorno != 'Y' && yesorno != 'n' && yesorno != 'N');
                                } while (yesorno == 'Y' || yesorno == 'y');
                                backToTiketMenu = true;
                                system("cls");
                            }
                            break;

                        case 5: // Kembali ke menu utama
                            backToMainMenu = true;
                            backToTiketMenu = false;
                            system("cls");
                            break;
                    }
                } while (backToTiketMenu == true);
                break;
            case 2: // Menu Data Film
                do {
                    system("cls");
                    tampilMenuFilm(nicknm);
                    do {
                        cout << "||  Masukkan Pilihan (1/2/3/4) :\n  => ";
                        cin >> pilihan;
                        cin.ignore();
                        if (pilihan < 1 || pilihan > 4) {
                            system("cls");
                            tampilMenuFilm(nicknm);
                            cout << "Pilihan " << pilihan << " tidak tersedia!\n" << endl;
                        }
                    } while (pilihan < 1 || pilihan > 4);
                    system("cls");
                    switch (pilihan){
                        case 1:
                            do {
                                cout << endl;
                                cout << "||  Selamat datang, " << nicknm << endl << endl;

                                cout << ">>>>>>>>>>>>>>>>>>>>>  NGAWI PLAZA PARK - CINEMA XX  <<<<<<<<<<<<<<<<<<<<<" << endl;
                                cout << "                   # Sistem Manajemen Pemesanan Tiket #" << endl << endl;
                                cout << "                     ~~ Tambah Data Film On-Going ~~" << endl;
                                cout << "                              ~~ Film ke-" << Film.judul_film.size() + 1 << " ~~" << endl;

                                cout << "||  Judul Film :\n  => ";
                                getline(cin, jdlFilm);
                                Film.judul_film.push_back(jdlFilm);

                                cout << "\n||  Sinopsis Film :\n  => ";
                                getline(cin, sinopFilm);
                                Film.sinopsis.push_back(sinopFilm);

                                cout << "\n||  Produser :\n  => ";
                                getline(cin, prod);
                                Film.produser.push_back(prod);

                                cout << "\n||  Genre Film :\n  => ";
                                getline(cin, genrFilm);
                                Film.genre.push_back(genrFilm);

                                cout << "\n||  Durasi Film (menit, cth: 110) :\n  => ";
                                cin >> duraFilm;
                                Film.durasi.push_back(duraFilm);

                                cout << "\n============= X =============" << endl;
                                cout << " | 1. SU (Semua Umur)      |" << endl;
                                cout << " | 2. R13 (Remaja <= 13)   |" << endl;
                                cout << " | 3. D17 (Dewasa <= 17)   |" << endl;
                                cout << " | 4. D21 (Dewasa <= 21)   |" << endl;
                                cout << "============= X =============" << endl;
                                cout << "||  Rate Film (1/2/3/4) :\n  => ";
                                cin >> pilihan;
                                cin.ignore();
                                if (pilihan == 1){
                                    Film.rate_umur.push_back("SU");
                                    Film.ket_rate.push_back("Semua Umur");
                                } else if (pilihan == 2){
                                    Film.rate_umur.push_back("R13");
                                    Film.ket_rate.push_back("Remaja 13 Tahun >");
                                } else if (pilihan == 3){
                                    Film.rate_umur.push_back("D17");
                                    Film.ket_rate.push_back("Dewasa 17 Tahun >");
                                } else if (pilihan == 4){
                                    Film.rate_umur.push_back("D21");
                                    Film.ket_rate.push_back("Dewasa 21 Tahun >");
                                }

                                cout << "\n||  Tanggal Tayang (cth: 09 April 2024) :\n  => ";
                                getline(cin,tglTayang);

                                cout << "\n||  Hari Tayang (cth: Minggu) :\n  => ";
                                cin >> hrTayang;

                                cout << "\n========================= X =========================" << endl;
                                cout << " |            (biaya Weekdays, biaya Weekend)      |" << endl;
                                cout << " | 1. Regular      (Rp30.000, Rp50.000)            |" << endl;
                                cout << " | 2. Dolby Atmos  (Rp30.000, Rp60.000)            |" << endl;
                                cout << " | 3. IMAX         (Rp75.000, Rp100.000)           |" << endl;
                                cout << " | 4. The Premiere (Rp120.000, Rp150.000)          |" << endl;
                                cout << " |                                                 |" << endl;
                                cout << "========================= X =========================" << endl;
                                cout << "||  Pilih Studio (1-4):\n  => ";
                                cin >> pilihan;

                                if (pilihan == 1){
                                    if (hrTayang == "Minggu" || hrTayang == "minggu" || hrTayang == "Sabtu" || hrTayang == "sabtu"){
                                        harga = 50000;
                                    } else {
                                        harga = 30000;
                                    }
                                    rStudio = "Regular";
                                } else if (pilihan == 2){
                                    if (hrTayang == "Minggu" || hrTayang == "minggu" || hrTayang == "Sabtu" || hrTayang == "sabtu"){
                                        harga = 60000;
                                    } else {
                                        harga = 30000;
                                    }
                                    rStudio = "Dolby Atmos";
                                } else if (pilihan == 3){
                                    if (hrTayang == "Minggu" || hrTayang == "minggu" || hrTayang == "Sabtu" || hrTayang == "sabtu"){
                                        harga = 100000;
                                    } else {
                                        harga = 75000;
                                    }
                                    rStudio = "IMAX";
                                } else if (pilihan == 4){
                                    if (hrTayang == "Minggu" || hrTayang == "minggu" || hrTayang == "Sabtu" || hrTayang == "sabtu"){
                                        harga = 150000;
                                    } else {
                                        harga = 120000;
                                    }
                                    rStudio = "The Premiere";
                                }

                                bool pilihAudi = false;

                                system("cls");
                                cout << endl;
                                cout << "||  Selamat datang, " << nicknm << endl << endl;
                                cout << ">>>>>>>>>>>>>>>>>>>>>  NGAWI PLAZA PARK - CINEMA XX  <<<<<<<<<<<<<<<<<<<<<" << endl;
                                cout << "                   # Sistem Manajemen Pemesanan Tiket #                   " << endl;
                                cout << "                                                                          " << endl;
                                cout << "                      ~~ Tentukan Jam Tayang Film ~~                      " << endl;
                                cout << "  Film ke-" << Film.judul_film.size()<< endl;
                                cout << "  Judul Film              : " << jdlFilm << endl;
                                cout << "  Tanggal Tayang          : " << tglTayang << endl;

                                do {
                                    cout << "  Pilih Auditorium (1-9)  : ";
                                    cin >> audi;
                                    cout << endl << endl;

                                    int indexFilm = Film.judul_film.size() - 1; // Index untuk film terakhir yang ditambahkan

                                    // Memasukkan 4 jam tayang untuk tanggal tersebut
                                    for (int i = 0; i < 4; i++) {
                                        cout << "||  Masukkan Jam Tayang ke-" << (i + 1) << " (HH:MM):\n  => ";
                                        cin >> jamTayang;

                                        bool konflik = false;
                                        bool konflikHariYangSama = false;

                                        // Pengecekan Jam bentrok di jadwal yang sama
                                        for (int j = 0; j < jFilm.size(); j++) {
                                            if (j == indexFilm) continue;  // Lewati pengecekan pada film yang sama
                                            for (int k = 0; k < jFilm[j].size(); k++) {
                                                if (jFilm[j][k].tanggal_tayang == tglTayang && jFilm[j][k].hari_tayang == hrTayang &&
                                                    jFilm[j][k].jam_tayang == jamTayang && jFilm[j][k].auditorium == audi) {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << "||  Selamat datang, " << nicknm << endl << endl;
                                                    cout << ">>>>>>>>>>>>>>>>>>>>>  NGAWI PLAZA PARK - CINEMA XX  <<<<<<<<<<<<<<<<<<<<<" << endl;
                                                    cout << "                   # Sistem Manajemen Pemesanan Tiket #                   " << endl;
                                                    cout << "                                                                          " << endl;
                                                    cout << "                      ~~ Tentukan Jam Tayang Film ~~                      " << endl;
                                                    cout << "  Film ke-" << Film.judul_film.size()<< endl;
                                                    cout << "  Judul Film              : " << jdlFilm << endl;
                                                    cout << "  Tanggal Tayang          : " << tglTayang << endl << endl;
                                                    cout << "  Peringatan: Jam tayang ke-"<<i+1<< " = "<<jamTayang<< " dan auditorium "<<audi<<" sudah ada pada film '"<< Film.judul_film[j]
                                                    <<"'! \n              Harap pilih jam atau auditorium yang berbeda." << endl << endl;
                                                    konflik = true;
                                                    break; // keluar dari loop karena konflik ditemukan
                                                }
                                            }
                                        }
                                        if (konflik) {
                                            pilihAudi = true;
                                            break;
                                        } else if (konflikHariYangSama) {
                                            --i;
                                        } else {
                                            jadwal.judul_film = jdlFilm;
                                            jadwal.tanggal_tayang = tglTayang;
                                            jadwal.hari_tayang = hrTayang;
                                            jadwal.studio = rStudio;
                                            jadwal.auditorium = audi;
                                            jadwal.harga_film = harga;
                                            jadwal.jam_tayang = jamTayang;
                                            for (int bangku = 1; bangku <= 50; bangku++){
                                                jadwal.seat.push_back(to_string(bangku));
                                            }
                                            // jFilm[indexFilm].push_back(jadwal);
                                            jamTayangFilm.push_back(jadwal);
                                            pilihAudi = false;
                                        }
                                    }
                                    jFilm.push_back(jamTayangFilm);
                                    jamTayangFilm.clear();
                                } while (pilihAudi);

                                cout << "\nData film dan jadwal tayang berhasil ditambahkan!" << endl << endl;
                                cout << "Apakah ingin menambahkan Film kembali? (y/n) : ";
                                cin >> yesorno;
                                cin.ignore();
                                system("cls");
                            } while (yesorno == 'Y' || yesorno == 'y');

                            backToFilmMenu = true;
                            system("cls");
                            break;
                        case 2:
                            cout << endl;
                            cout << "||  Selamat datang, " << nicknm << endl << endl;
                            cout << ">>>>>>>>>>>>>>>>>>>>>  NGAWI PLAZA PARK - CINEMA XX  <<<<<<<<<<<<<<<<<<<<<" << endl;
                            cout << "                   # Sistem Manajemen Pemesanan Tiket #                   " << endl;
                            cout << "                                                                          " << endl;
                            cout << "                      ~~ Lihat Data Film On-Going ~~                      " << endl << endl;

                            if (Film.judul_film.size() == 0){
                                cout << "\n||  Belum ada Film yang ditambahkan." << endl << endl;
                                cout << "Ketik 'exit' untuk kembali ke Menu Film : ";

                                do {
                                    do {
                                        getline(cin, exit);
                                        if (exit == ""){
                                            system("cls");
                                            cout << endl;
                                            cout << "||  Selamat datang, " << nicknm << endl << endl;
                                            cout << ">>>>>>>>>>>>>>>>>>>>>  NGAWI PLAZA PARK - CINEMA XX  <<<<<<<<<<<<<<<<<<<<<" << endl;
                                            cout << "                   # Sistem Manajemen Pemesanan Tiket #                   " << endl;
                                            cout << "                                                                          " << endl;
                                            cout << "                      ~~ Lihat Data Film On-Going ~~                      " << endl;
                                            cout << "\n||  Belum ada Film yang ditambahkan." << endl << endl;
                                            cout << "Input kosong!" << endl;
                                            cout << "Ketik 'exit' untuk kembali ke Menu Film : ";
                                        }
                                    } while (exit == "");

                                    if (exit != "exit" && exit != "EXIT"){
                                        system("cls");
                                        cout << endl;
                                        cout << "||  Selamat datang, " << nicknm << endl << endl;
                                        cout << ">>>>>>>>>>>>>>>>>>>>>  NGAWI PLAZA PARK - CINEMA XX  <<<<<<<<<<<<<<<<<<<<<" << endl;
                                        cout << "                   # Sistem Manajemen Pemesanan Tiket #                   " << endl;
                                        cout << "                                                                          " << endl;
                                        cout << "                      ~~ Lihat Data Film On-Going ~~                      " << endl;
                                        cout << "\n||  Belum ada Film yang ditambahkan." << endl << endl;
                                        cout << "Input tidak sesuai!" << endl;
                                        cout << "Ketik 'exit' untuk kembali ke Menu Film : ";
                                    }
                                } while (exit != "exit" && exit != "EXIT");

                                backToFilmMenu = true;
                                system("cls");
                                break;
                            } else {
                                bool tidakDitemukan = false;
                                tampilFilmBerdasarkan();
                                do {
                                    cout << "||  Pilih (1-3):\n  => ";
                                    cin >> pilihan;
                                    if (pilihan < 1 || pilihan > 3) {
                                        system("cls");
                                        cout << endl;
                                        cout << "||  Selamat datang, " << nicknm << endl << endl;
                                        cout << ">>>>>>>>>>>>>>>>>>>>>  NGAWI PLAZA PARK - CINEMA XX  <<<<<<<<<<<<<<<<<<<<<" << endl;
                                        cout << "                   # Sistem Manajemen Pemesanan Tiket #                   " << endl;
                                        cout << "                                                                          " << endl;
                                        cout << "                      ~~ Lihat Data Film On-Going ~~                      " << endl;
                                        tampilFilmBerdasarkan();
                                        cout << "Pilihan " << pilihan << " tidak tersedia!\n" << endl;
                                    }
                                } while (pilihan < 1 || pilihan > 3);

                                switch (pilihan){
                                    case 1:
                                        cout << endl << "Masukkan Auditorium (1-9): ";
                                        cin >> audi;

                                        system("cls");
                                        cout << endl;
                                        cout << "||  Selamat datang, " << nicknm << endl << endl;
                                        cout << ">>>>>>>>>>>>>>>>>>>>>  NGAWI PLAZA PARK - CINEMA XX  <<<<<<<<<<<<<<<<<<<<<" << endl;
                                        cout << "                   # Sistem Manajemen Pemesanan Tiket #                   " << endl;
                                        cout << "                                                                          " << endl;
                                        cout << "                      ~~ Lihat Data Film On-Going ~~                      " << endl;
                                        cout << "  Auditorium : " << audi << endl << endl;
                                        tampilFilmBerAudi(Film, jFilm, audi, tidakDitemukan);

                                        for (int i = 0; i < Film.judul_film.size(); i++){
                                            if (audi == jFilm[i][0].auditorium){
                                                tidakDitemukan = true;
                                            }
                                        }

                                        if (tidakDitemukan == false){
                                            cout << endl << "Data Auditorium " << audi << " Tidak Ada!" << endl;
                                        }
                                        cout << endl << "Ketik 'exit' untuk kembali ke Menu Film : ";
                                        do {
                                            do {
                                                cin.ignore();
                                                getline(cin, exit);
                                                if (exit == ""){
                                                    system("cls");
                                                    cout << endl;
                                                    cout << "||  Selamat datang, " << nicknm << endl << endl;
                                                    cout << ">>>>>>>>>>>>>>>>>>>>>  NGAWI PLAZA PARK - CINEMA XX  <<<<<<<<<<<<<<<<<<<<<" << endl;
                                                    cout << "                   # Sistem Manajemen Pemesanan Tiket #                   " << endl;
                                                    cout << "                                                                          " << endl;
                                                    cout << "                      ~~ Lihat Data Film On-Going ~~                      " << endl;
                                                    cout << "  Auditorium : " << audi << endl << endl;
                                                    tampilFilmBerAudi(Film, jFilm, audi, tidakDitemukan);
                                                    for (int i = 0; i < Film.judul_film.size(); i++){
                                                        if (audi == jFilm[i][0].auditorium){
                                                            tidakDitemukan = true;
                                                        }
                                                    }
                                                    if (tidakDitemukan == false){
                                                        cout << endl << "Data Auditorium " << audi << " Tidak Ada!" << endl;
                                                    }
                                                    cout << "Input kosong!" << endl;
                                                    cout << "Ketik 'exit' untuk kembali ke Menu Film : ";
                                                }
                                            } while (exit == "");

                                            if (exit != "exit" && exit != "EXIT"){
                                                system("cls");
                                                cout << endl;
                                                cout << "||  Selamat datang, " << nicknm << endl << endl;
                                                cout << ">>>>>>>>>>>>>>>>>>>>>  NGAWI PLAZA PARK - CINEMA XX  <<<<<<<<<<<<<<<<<<<<<" << endl;
                                                cout << "                   # Sistem Manajemen Pemesanan Tiket #                   " << endl;
                                                cout << "                                                                          " << endl;
                                                cout << "                      ~~ Lihat Data Film On-Going ~~                      " << endl;
                                                cout << "  Auditorium : " << audi << endl << endl;
                                                tampilFilmBerAudi(Film, jFilm, audi, tidakDitemukan);
                                                for (int i = 0; i < Film.judul_film.size(); i++){
                                                    if (audi == jFilm[i][0].auditorium){
                                                        tidakDitemukan = true;
                                                    }
                                                }
                                                if (tidakDitemukan == false){
                                                    cout << endl << "Data Auditorium " << audi << " Tidak Ada!" << endl;
                                                }
                                                cout << "Input tidak sesuai!" << endl;
                                                cout << "Ketik 'exit' untuk kembali ke Menu Film : ";
                                            }
                                        } while (exit != "exit" && exit != "EXIT");

                                        backToFilmMenu = true;
                                        system("cls");
                                        break;

                                    case 2:
                                        cout << "\n||  Masukkan Hari (cth: Minggu) :\n  => ";
                                        cin >> hrTayang;

                                        system("cls");
                                        cout << endl;
                                        cout << "||  Selamat datang, " << nicknm << endl << endl;
                                        cout << ">>>>>>>>>>>>>>>>>>>>>  NGAWI PLAZA PARK - CINEMA XX  <<<<<<<<<<<<<<<<<<<<<" << endl;
                                        cout << "                   # Sistem Manajemen Pemesanan Tiket #                   " << endl;
                                        cout << "                                                                          " << endl;
                                        cout << "                      ~~ Lihat Data Film On-Going ~~                      " << endl;
                                        cout << "  Hari : " << hrTayang << endl << endl;
                                        tampilFilmBerHari(Film, jFilm, hrTayang, tidakDitemukan);
                                        for (int i = 0; i < Film.judul_film.size(); i++){
                                            if (hrTayang == jFilm[i][0].hari_tayang){
                                                tidakDitemukan = true;
                                            }
                                        }
                                        if (tidakDitemukan == false){
                                            cout << endl << "Data Hari " << hrTayang << " Tidak Ada!" << endl;
                                        }

                                        cout << endl << "Ketik 'exit' untuk kembali ke Menu Film : ";
                                        do {
                                            do {
                                                cin.ignore();
                                                getline(cin, exit);
                                                if (exit == ""){
                                                    system("cls");
                                                    cout << endl;
                                                    cout << "||  Selamat datang, " << nicknm << endl << endl;
                                                    cout << ">>>>>>>>>>>>>>>>>>>>>  NGAWI PLAZA PARK - CINEMA XX  <<<<<<<<<<<<<<<<<<<<<" << endl;
                                                    cout << "                   # Sistem Manajemen Pemesanan Tiket #                   " << endl;
                                                    cout << "                                                                          " << endl;
                                                    cout << "                      ~~ Lihat Data Film On-Going ~~                      " << endl;
                                                    cout << "  Hari : " << hrTayang << endl << endl;
                                                    tampilFilmBerHari(Film, jFilm, hrTayang, tidakDitemukan);
                                                    for (int i = 0; i < Film.judul_film.size(); i++){
                                                        if (hrTayang == jFilm[i][0].hari_tayang){
                                                            tidakDitemukan = true;
                                                        }
                                                    }
                                                    if (tidakDitemukan == false){
                                                        cout << endl << "Data Hari " << hrTayang << " Tidak Ada!" << endl;
                                                    }
                                                    cout << "Input kosong!" << endl;
                                                    cout << "Ketik 'exit' untuk kembali ke Menu Film : ";
                                                }
                                            } while (exit == "");

                                            if (exit != "exit" && exit != "EXIT"){
                                                system("cls");
                                                cout << endl;
                                                cout << "||  Selamat datang, " << nicknm << endl << endl;
                                                cout << ">>>>>>>>>>>>>>>>>>>>>  NGAWI PLAZA PARK - CINEMA XX  <<<<<<<<<<<<<<<<<<<<<" << endl;
                                                cout << "                   # Sistem Manajemen Pemesanan Tiket #                   " << endl;
                                                cout << "                                                                          " << endl;
                                                cout << "                      ~~ Lihat Data Film On-Going ~~                      " << endl;
                                                cout << "  Hari : " << hrTayang << endl << endl;
                                                tampilFilmBerHari(Film, jFilm, hrTayang, tidakDitemukan);
                                                for (int i = 0; i < Film.judul_film.size(); i++){
                                                    if (hrTayang == jFilm[i][0].hari_tayang){
                                                        tidakDitemukan = true;
                                                    }
                                                }
                                                if (tidakDitemukan == false){
                                                    cout << endl << "Data Hari " << hrTayang << " Tidak Ada!" << endl;
                                                }
                                                cout << "Input tidak sesuai!" << endl;
                                                cout << "Ketik 'exit' untuk kembali ke Menu Film : ";
                                            }
                                        } while (exit != "exit" && exit != "EXIT");

                                        backToFilmMenu = true;
                                        system("cls");
                                        break;
                                    case 3:
                                        system("cls");
                                        cout << endl;
                                        cout << "||  Selamat datang, " << nicknm << endl << endl;
                                        cout << ">>>>>>>>>>>>>>>>>>>>>  NGAWI PLAZA PARK - CINEMA XX  <<<<<<<<<<<<<<<<<<<<<" << endl;
                                        cout << "                   # Sistem Manajemen Pemesanan Tiket #                   " << endl;
                                        cout << "                                                                          " << endl;
                                        cout << "                      ~~ Lihat Data Film On-Going ~~                      " << endl << endl;
                                        tampilDataFilm(Film, jFilm);
                                        cout << endl << "Ketik 'exit' untuk kembali ke Menu Film : ";
                                        do {
                                            do {
                                                cin.ignore();
                                                getline(cin, exit);
                                                if (exit == ""){
                                                    system("cls");
                                                    tampilDataFilm(Film, jFilm);
                                                    cout << "Input kosong!" << endl;
                                                    cout << "Ketik 'exit' untuk kembali ke Menu Film : ";
                                                }
                                            } while (exit == "");

                                            if (exit != "exit" && exit != "EXIT"){
                                                system("cls");
                                                tampilDataFilm(Film, jFilm);
                                                cout << "Input tidak sesuai!" << endl;
                                                cout << "Ketik 'exit' untuk kembali ke Menu Film : ";
                                            }
                                        } while (exit != "exit" && exit != "EXIT");

                                        backToFilmMenu = true;
                                        system("cls");
                                        break;
                                }
                            }
                            break;
                        case 3:
                            do {
                                cout << endl;
                                cout << "||  Selamat datang, " << nicknm << endl << endl;
                                cout << ">>>>>>>>>>>>>>>>>>>>>  NGAWI PLAZA PARK - CINEMA XX  <<<<<<<<<<<<<<<<<<<<<" << endl;
                                cout << "                   # Sistem Manajemen Pemesanan Tiket #" << endl << endl;
                                cout << "                      ~~ Hapus Data Film On-Going ~~" << endl << endl;
                                if (Film.judul_film.size() == 0){
                                    cout << "\n||  Belum ada Film yang ditambahkan." << endl << endl;
                                    cout << "Ketik 'exit' untuk kembali ke Menu Film : ";

                                    do {
                                        do {
                                            getline(cin, exit);
                                            if (exit == ""){
                                                system("cls");
                                                cout << endl;
                                                cout << "||  Selamat datang, " << nicknm << endl << endl;
                                                cout << ">>>>>>>>>>>>>>>>>>>>>  NGAWI PLAZA PARK - CINEMA XX  <<<<<<<<<<<<<<<<<<<<<" << endl;
                                                cout << "                   # Sistem Manajemen Pemesanan Tiket #" << endl << endl;
                                                cout << "                      ~~ Hapus Data Film On-Going ~~" << endl << endl;
                                                cout << "\n||  Belum ada Film yang ditambahkan." << endl << endl;
                                                cout << "Input kosong!" << endl;
                                                cout << "Ketik 'exit' untuk kembali ke Menu Film : ";
                                            }
                                        } while (exit == "");

                                        if (exit != "exit" && exit != "EXIT"){
                                            system("cls");
                                            cout << endl;
                                            cout << "||  Selamat datang, " << nicknm << endl << endl;
                                            cout << ">>>>>>>>>>>>>>>>>>>>>  NGAWI PLAZA PARK - CINEMA XX  <<<<<<<<<<<<<<<<<<<<<" << endl;
                                            cout << "                   # Sistem Manajemen Pemesanan Tiket #" << endl << endl;
                                            cout << "                      ~~ Hapus Data Film On-Going ~~" << endl << endl;
                                            cout << "\n||  Belum ada Film yang ditambahkan." << endl << endl;
                                            cout << "Input tidak sesuai!" << endl;
                                            cout << "Ketik 'exit' untuk kembali ke Menu Film : ";
                                        }
                                    } while (exit != "exit" && exit != "EXIT");

                                    backToFilmMenu = true;
                                    system("cls");
                                    break;
                                } else {
                                    for (int i = 0; i < Film.judul_film.size(); i++){
                                        cout << endl << "   ~~~~ # Film ke-" <<i+1 << " # ~~~~"<< endl;
                                        cout << "   Judul Film     : " << Film.judul_film[i]<< endl;
                                        cout << "   Produser       : " << Film.produser[i]<< endl << endl;
                                    }
                                    do {
                                        cout << "\n||  Film Ke Berapa Yang Ingin Dihapus? (Ketik Angka)(ketik 0 untuk keluar) : ";
                                        cin >> pilihan;

                                        if (pilihan > Film.judul_film.size() || pilihan < 0){
                                            system("cls");
                                            cout << endl;
                                            cout << "||  Selamat datang, " << nicknm << endl << endl;
                                            cout << ">>>>>>>>>>>>>>>>>>>>>  NGAWI PLAZA PARK - CINEMA XX  <<<<<<<<<<<<<<<<<<<<<" << endl;
                                            cout << "                   # Sistem Manajemen Pemesanan Tiket #" << endl << endl;
                                            cout << "                      ~~ Hapus Data Film On-Going ~~" << endl << endl;
                                            for (int i = 0; i < Film.judul_film.size(); i++){
                                                cout << endl << "   ~~~~ # Film ke-" <<i+1 << " # ~~~~"<< endl;
                                                cout << "   Judul Film     : " << Film.judul_film[i]<< endl;
                                                cout << "   Produser       : " << Film.produser[i]<< endl << endl;
                                            }
                                            cout << "Input "<< pilihan << " tidak sesuai!" << endl;
                                        }
                                    } while (pilihan > Film.judul_film.size() || pilihan < 0);

                                    if (pilihan == 0){
                                        system("cls");
                                        backToFilmMenu = true;
                                        break;
                                    } else {
                                        session = Film.judul_film[pilihan - 1];
                                        Film.judul_film.erase(Film.judul_film.begin() + pilihan - 1);
                                        Film.sinopsis.erase(Film.sinopsis.begin() + pilihan - 1);
                                        Film.produser.erase(Film.produser.begin() + pilihan - 1);
                                        Film.genre.erase(Film.genre.begin() + pilihan - 1);
                                        Film.ket_rate.erase(Film.ket_rate.begin() + pilihan - 1);
                                        Film.rate_umur.erase(Film.rate_umur.begin() + pilihan - 1);
                                        Film.durasi.erase(Film.durasi.begin() + pilihan - 1);

                                        jFilm.erase(jFilm.begin() + pilihan - 1);
                                    }
                                }
                                cout << "\nFilm ke-"<<pilihan<<" '" << session << "' Telah Dihapus" << endl << endl;
                                do {
                                    cout << "||  Apakah ingin menghapus Film kembali? (y/n) : ";
                                    cin >> yesorno;
                                    cin.ignore();
                                    system("cls");
                                    if (yesorno != 'y' && yesorno != 'Y' && yesorno != 'n' && yesorno != 'N'){
                                        cout << "Input tidak sesuai!" << endl;
                                    }
                                } while (yesorno != 'y' && yesorno != 'Y' && yesorno != 'n' && yesorno != 'N');
                            } while (yesorno == 'Y' || yesorno == 'y');
                            backToFilmMenu = true;
                            system("cls");
                            break;
                        case 4: // kembali ke menu utama
                            backToFilmMenu = false;
                            backToMainMenu = true;
                            system("cls");
                            break;
                    }
                } while (backToFilmMenu == true);
                break;

            case 3: // Data Makanan dan Minuman
                do {
                    system("cls");
                    tampilMenuMakananMinuman(nicknm);
                    do {
                        cout << "||  Masukkan Pilihan (1/2/3/4) :\n  => ";
                        cin >> pilihan;
                        if (pilihan < 1 || pilihan > 4) {
                            system("cls");
                            tampilMenuMakananMinuman(nicknm);

                            cout << "Pilihan " << pilihan << " tidak tersedia!\n" << endl;
                        }
                    } while (pilihan < 1 || pilihan > 4);

                    // pilihan 1 - 4 Data Makanan dan Minuman
                    switch (pilihan){
                        // Tambah Data Makanan dan Minuman
                        case 1:
                            system("cls");
                            tampilPilTambahMakOrMin(nicknm);
                            do {
                                cout << "||  Pilih (0/1/2):\n  => ";
                                cin >> pilihan;
                                if (pilihan < 0 || pilihan > 2) {
                                    system("cls");
                                    tampilPilTambahMakOrMin(nicknm);
                                    cout << "Pilihan " << pilihan << " tidak tersedia!\n" << endl;
                                }
                            } while (pilihan < 0 || pilihan > 2);
                            if (pilihan == 0){
                                system("cls");
                                backToMknMnmMenu = true;
                                break;
                            } else if (pilihan == 1){
                                do {
                                    system("cls");
                                    cout << endl;
                                    cout << "||  Selamat datang, " << nicknm << endl << endl;
                                    cout << ">>>>>>>>>>>>>>>>>>>>>  NGAWI PLAZA PARK - CINEMA XX  <<<<<<<<<<<<<<<<<<<<<" << endl;
                                    cout << "                   # Sistem Manajemen Pemesanan Tiket #" << endl << endl;
                                    cout << "                        ~~ Tambah Data Makanan ~~" << endl;
                                    cout << "                             ~~ Data ke-" << vctMkn.size() + 1 << " ~~" << endl;
                                    cout << "||  Nama Makanan :\n  => ";
                                    cin.ignore();
                                    getline(cin, nmMkn);
                                    cout << "\n||  Harga Makanan (cth: 25000) :\n  => ";
                                    cin >> hrgMkn;

                                    strctMkn.namaMakanan = nmMkn;
                                    strctMkn.hargaMakanan = hrgMkn;
                                    vctMkn.push_back(strctMkn);

                                    cout << "\nData Makanan '"<< nmMkn <<"' berhasil ditambahkan!" << endl << endl;
                                    do {
                                        cout << "||  Apakah ingin menambahkan kembali? (y/n) : ";
                                        cin >> yesorno;
                                        system("cls");
                                        if (yesorno != 'y' && yesorno != 'Y' && yesorno != 'n' && yesorno != 'N'){
                                            cout << endl << "Input tidak sesuai!" << endl;
                                        }
                                    } while (yesorno != 'y' && yesorno != 'Y' && yesorno != 'n' && yesorno != 'N');
                                } while (yesorno == 'Y' || yesorno == 'y');

                            } else if (pilihan == 2){
                                do {
                                    system("cls");
                                    cout << endl;
                                    cout << "||  Selamat datang, " << nicknm << endl << endl;
                                    cout << ">>>>>>>>>>>>>>>>>>>>>  NGAWI PLAZA PARK - CINEMA XX  <<<<<<<<<<<<<<<<<<<<<" << endl;
                                    cout << "                   # Sistem Manajemen Pemesanan Tiket #" << endl << endl;
                                    cout << "                        ~~ Tambah Data Minuman ~~" << endl;
                                    cout << "                             ~~ Data ke-" << vctMnm.size() + 1 << " ~~" << endl;
                                    cout << "\n||  Nama Minuman :\n  => ";
                                    cin.ignore();
                                    getline(cin, nmMnm);
                                    cout << "\n||  Harga Minuman (cth: 25000) :\n  => ";
                                    cin >> hrgMnm;

                                    strctMnm.namaMinuman = nmMnm;
                                    strctMnm.hargaMinuman = hrgMnm;
                                    vctMnm.push_back(strctMnm);

                                    cout << "\nData Minuman '"<< nmMnm <<"' berhasil ditambahkan!" << endl << endl;
                                    do {
                                        cout << "||  Apakah ingin menambahkan kembali? (y/n) : ";
                                        cin >> yesorno;
                                        system("cls");
                                        if (yesorno != 'y' && yesorno != 'Y' && yesorno != 'n' && yesorno != 'N'){
                                            cout << endl << "Input tidak sesuai!" << endl;
                                        }
                                    } while (yesorno != 'y' && yesorno != 'Y' && yesorno != 'n' && yesorno != 'N');
                                } while (yesorno == 'Y' || yesorno == 'y');
                            }
                            backToMknMnmMenu = true;
                            system("cls");
                            break;
                        case 2: // Lihat Data Makanan dan Minuman
                            if (vctMkn.size() == 0 && vctMnm.size() == 0){
                                system("cls");
                                cout << endl;
                                cout << "||  Selamat datang, " << nicknm << endl << endl;
                                cout << ">>>>>>>>>>>>>>>>>>>>>  NGAWI PLAZA PARK - CINEMA XX  <<<<<<<<<<<<<<<<<<<<<" << endl;
                                cout << "                   # Sistem Manajemen Pemesanan Tiket #" << endl << endl;
                                cout << "                   ~~ Lihat Data Makanan dan Minuman ~~" << endl << endl;
                                cout << "||  Belum ada Data Makanan dan Minuman yang ditambahkan." << endl << endl;
                                cout << "Ketik 'exit' untuk kembali ke Menu Makanan dan Minuman : ";
                                do {
                                    do {
                                        cin.ignore();
                                        getline(cin, exit);
                                        if (exit == ""){
                                            system("cls");
                                            cout << endl;
                                            cout << "||  Selamat datang, " << nicknm << endl << endl;
                                            cout << ">>>>>>>>>>>>>>>>>>>>>  NGAWI PLAZA PARK - CINEMA XX  <<<<<<<<<<<<<<<<<<<<<" << endl;
                                            cout << "                   # Sistem Manajemen Pemesanan Tiket #" << endl << endl;
                                            cout << "                   ~~ Lihat Data Makanan dan Minuman ~~" << endl << endl;
                                            cout << "\n||  Belum ada Data Makanan dan Minuman yang ditambahkan." << endl << endl;
                                            cout << "Input tidak boleh kosong!" << endl;
                                            cout << "Ketik 'exit' untuk kembali ke Menu Makanan dan Minuman : ";
                                        }
                                    } while (exit == "");

                                    if (exit != "exit" && exit != "EXIT"){
                                        system("cls");
                                        cout << endl;
                                        cout << "||  Selamat datang, " << nicknm << endl << endl;
                                        cout << ">>>>>>>>>>>>>>>>>>>>>  NGAWI PLAZA PARK - CINEMA XX  <<<<<<<<<<<<<<<<<<<<<" << endl;
                                        cout << "                   # Sistem Manajemen Pemesanan Tiket #" << endl << endl;
                                        cout << "                   ~~ Lihat Data Makanan dan Minuman ~~" << endl << endl;
                                        cout << "\n||  Belum ada Data Makanan dan Minuman yang ditambahkan." << endl << endl;
                                        cout << "Input harus exit/EXIT!" << endl;
                                        cout << "Ketik 'exit' untuk kembali ke Menu Makanan dan Minuman : ";
                                    }
                                } while (exit != "exit" && exit != "EXIT");

                                backToMknMnmMenu = true;
                                system("cls");
                                break;
                            } else if (vctMkn.size() != 0 && vctMnm.size() == 0){
                                system("cls");
                                tampilDataMakanan(vctMkn, nicknm);
                                cout << "Ketik 'exit' untuk kembali ke Menu Makanan dan Minuman : ";
                                do {
                                    do {
                                        cin.ignore();
                                        getline(cin, exit);
                                        if (exit == ""){
                                            system("cls");
                                            tampilDataMakanan(vctMkn, nicknm);
                                            cout << "Input tidak boleh kosong!" << endl;
                                            cout << "Ketik 'exit' untuk kembali ke Menu Makanan dan Minuman : ";
                                        }
                                    } while (exit == "");
                                    if (exit != "exit" && exit != "EXIT"){
                                        system("cls");
                                        tampilDataMakanan(vctMkn, nicknm);
                                        cout << "Input harus exit/EXIT!" << endl;
                                        cout << "Ketik 'exit' untuk kembali ke Menu Makanan dan Minuman : ";
                                    }
                                } while (exit != "exit" && exit != "EXIT");

                                backToMknMnmMenu = true;
                                system("cls");
                                break;
                            } else if (vctMkn.size() == 0 && vctMnm.size() != 0){
                                system("cls");
                                tampilDataMinuman(vctMnm, nicknm);
                                cout << "Ketik 'exit' untuk kembali ke Menu Makanan dan Minuman : ";
                                do {
                                    do {
                                        cin.ignore();
                                        getline(cin, exit);
                                        if (exit == ""){
                                            system("cls");
                                            tampilDataMinuman(vctMnm, nicknm);
                                            cout << "Input tidak boleh kosong!" << endl;
                                            cout << "Ketik 'exit' untuk kembali ke Menu Makanan dan Minuman : ";
                                        }
                                    } while (exit == "");
                                    if (exit != "exit" && exit != "EXIT"){
                                        system("cls");
                                        tampilDataMinuman(vctMnm, nicknm);
                                        cout << "Input harus exit/EXIT!" << endl;
                                        cout << "Ketik 'exit' untuk kembali ke Menu Makanan dan Minuman : ";
                                    }
                                } while (exit != "exit" && exit != "EXIT");
                                backToMknMnmMenu = true;
                                system("cls");
                                break;
                            } else if (vctMkn.size() != 0 && vctMnm.size() != 0){
                                system("cls");
                                tampilDataMakdanMin(vctMkn, vctMnm, nicknm);
                                cout << endl << "Ketik 'exit' untuk kembali ke Menu Makanan dan Minuman : ";
                                do {
                                    do {
                                        cin >> exit;
                                        if (exit == ""){
                                            system("cls");
                                            tampilDataMakdanMin(vctMkn, vctMnm, nicknm);
                                            cout << "Input kosong!" << endl;
                                            cout << "Ketik 'exit' untuk kembali ke Menu Makanan dan Minuman : ";
                                        }
                                    } while (exit == "");
                                    if (exit != "exit" && exit != "EXIT"){
                                        system("cls");
                                        tampilDataMakdanMin(vctMkn, vctMnm, nicknm);
                                        cout << "Input harus 'exit' atau 'EXIT'!" << endl;
                                        cout << "Ketik 'exit' untuk kembali ke Menu Makanan dan Minuman : ";
                                    }
                                } while (exit != "exit" && exit != "EXIT");

                                backToMknMnmMenu = true;
                                system("cls");
                                break;
                            }
                        case 3: // Hapus Data Makanan dan Minuman
                            system("cls");
                            tampilPilihanHpsMakOrMin(nicknm);
                            do {
                                cout << "||  Pilih (0/1/2):\n  => ";
                                cin >> pilihan;
                                if (pilihan < 0 || pilihan > 2) {
                                    system("cls");
                                    tampilPilihanHpsMakOrMin(nicknm);
                                    cout << "Pilihan " << pilihan << " tidak tersedia!\n" << endl;
                                }
                            } while (pilihan < 0 || pilihan > 2);
                            if (pilihan == 0){
                                system("cls");
                                backToMknMnmMenu = true;
                                break;
                            } else if (pilihan == 1){
                                system("cls");
                                cout << endl;
                                cout << "||  Selamat datang, " << nicknm << endl << endl;
                                cout << ">>>>>>>>>>>>>>>>>>>>>  NGAWI PLAZA PARK - CINEMA XX  <<<<<<<<<<<<<<<<<<<<<" << endl;
                                cout << "                   # Sistem Manajemen Pemesanan Tiket #" << endl << endl;
                                cout << "                         ~~ Hapus Data Makanan ~~" << endl << endl;
                                if (vctMkn.size() == 0){
                                    cout << "\n||  Belum ada Data Makanan yang ditambahkan." << endl << endl;
                                    cout << "Ketik 'exit' untuk kembali ke Menu Film : ";
                                    do {
                                        do {
                                            cin >> exit;
                                            if (exit == ""){
                                                system("cls");
                                                cout << endl;
                                                cout << "||  Selamat datang, " << nicknm << endl << endl;
                                                cout << ">>>>>>>>>>>>>>>>>>>>>  NGAWI PLAZA PARK - CINEMA XX  <<<<<<<<<<<<<<<<<<<<<" << endl;
                                                cout << "                   # Sistem Manajemen Pemesanan Tiket #" << endl << endl;
                                                cout << "                         ~~ Hapus Data Makanan ~~" << endl << endl;
                                                cout << "\n||  Belum ada Data Makanan yang ditambahkan." << endl << endl;
                                                cout << "Input kosong!" << endl;
                                                cout << "Ketik 'exit' untuk kembali ke Menu Film : ";
                                            }
                                        } while (exit == "");
                                        if (exit != "exit" && exit != "EXIT"){
                                            system("cls");
                                            cout << endl;
                                            cout << "||  Selamat datang, " << nicknm << endl << endl;
                                            cout << ">>>>>>>>>>>>>>>>>>>>>  NGAWI PLAZA PARK - CINEMA XX  <<<<<<<<<<<<<<<<<<<<<" << endl;
                                            cout << "                   # Sistem Manajemen Pemesanan Tiket #" << endl << endl;
                                            cout << "                         ~~ Hapus Data Makanan ~~" << endl << endl;
                                            cout << "\n||  Belum ada Data Makanan yang ditambahkan." << endl << endl;
                                            cout << "Input harus 'exit' atau 'EXIT'!" << endl;
                                            cout << "Ketik 'exit' untuk kembali ke Menu Film : ";
                                        }
                                    } while (exit != "exit" && exit != "EXIT");
                                    backToMknMnmMenu = true;
                                    system("cls");
                                    break;
                                } else {
                                    do {
                                        system("cls");
                                        cout << endl;
                                        cout << "||  Selamat datang, " << nicknm << endl << endl;
                                        cout << ">>>>>>>>>>>>>>>>>>>>>  NGAWI PLAZA PARK - CINEMA XX  <<<<<<<<<<<<<<<<<<<<<" << endl;
                                        cout << "                   # Sistem Manajemen Pemesanan Tiket #" << endl << endl;
                                        cout << "                         ~~ Hapus Data Makanan ~~" << endl << endl;
                                        for (int i = 0; i < vctMkn.size(); i++){
                                            cout << "   # Makanan ke-" <<i+1 << " #"<< endl;
                                            cout << "   Nama    : " << vctMkn[i].namaMakanan << endl;
                                            cout << "   Harga   : Rp." << vctMkn[i].hargaMakanan << endl << endl;
                                        }
                                        do {
                                            cout << "||  Makanan Ke Berapa Yang Ingin Dihapus? (Ketik Angka)(ketik 0 untuk keluar) : ";
                                            cin >> pilihan;
                                            if (pilihan > vctMkn.size() || pilihan < 0){
                                                system("cls");
                                                cout << endl;
                                                cout << "||  Selamat datang, " << nicknm << endl << endl;
                                                cout << ">>>>>>>>>>>>>>>>>>>>>  NGAWI PLAZA PARK - CINEMA XX  <<<<<<<<<<<<<<<<<<<<<" << endl;
                                                cout << "                   # Sistem Manajemen Pemesanan Tiket #" << endl << endl;
                                                cout << "                         ~~ Hapus Data Makanan ~~" << endl << endl;
                                                for (int i = 0; i < vctMkn.size(); i++){
                                                    cout << "   # Makanan ke-" <<i+1 << " #"<< endl;
                                                    cout << "   Nama    : " << vctMkn[i].namaMakanan << endl;
                                                    cout << "   Harga   : Rp." << vctMkn[i].hargaMakanan << endl << endl;
                                                }
                                                cout << "    Makanan ke-"<< pilihan << " tidak ada!" << endl;
                                            }
                                        } while (pilihan > vctMkn.size() || pilihan < 0);

                                        if (pilihan == 0){
                                            system("cls");
                                            backToMknMnmMenu = true;
                                            break;
                                        } else {
                                            session = vctMkn[pilihan - 1].namaMakanan;
                                            vctMkn.erase(vctMkn.begin() + pilihan - 1);
                                        }
                                        cout << "\n    Makanan ke-"<<pilihan<<" '" << session << "' Telah Dihapus" << endl << endl;

                                        do {
                                            cout << "||  Apakah ingin menghapus Makanan kembali? (y/n) : ";
                                            cin >> yesorno;
                                            if (yesorno != 'y' && yesorno != 'Y' && yesorno != 'n' && yesorno != 'N'){
                                                cout << endl << "Input tidak sesuai!" << endl;
                                            }
                                        } while (yesorno != 'y' && yesorno != 'Y' && yesorno != 'n' && yesorno != 'N');
                                    } while (yesorno == 'Y' || yesorno == 'y');
                                    backToMknMnmMenu = true;
                                    system("cls");
                                    break;
                                }
                            } else if (pilihan == 2){
                                system("cls");
                                cout << endl;
                                cout << "||  Selamat datang, " << nicknm << endl << endl;
                                cout << ">>>>>>>>>>>>>>>>>>>>>  NGAWI PLAZA PARK - CINEMA XX  <<<<<<<<<<<<<<<<<<<<<" << endl;
                                cout << "                   # Sistem Manajemen Pemesanan Tiket #" << endl << endl;
                                cout << "                         ~~ Hapus Data Minuman ~~" << endl << endl;
                                if (vctMnm.size() == 0){
                                    cout << "\n||  Belum ada Data Minuman yang ditambahkan." << endl << endl;
                                    cout << "Ketik 'exit' untuk kembali ke Menu Makanan dan Minuman : ";
                                    do {
                                        do {
                                            cin >> exit;
                                            if (exit == ""){
                                                system("cls");
                                                cout << endl;
                                                cout << "||  Selamat datang, " << nicknm << endl << endl;
                                                cout << ">>>>>>>>>>>>>>>>>>>>>  NGAWI PLAZA PARK - CINEMA XX  <<<<<<<<<<<<<<<<<<<<<" << endl;
                                                cout << "                   # Sistem Manajemen Pemesanan Tiket #" << endl << endl;
                                                cout << "                         ~~ Hapus Data Minuman ~~" << endl << endl;
                                                cout << "\n||  Belum ada Data Minuman yang ditambahkan." << endl << endl;
                                                cout << "Input kosong!" << endl;
                                                cout << "Ketik 'exit' untuk kembali ke Menu Makanan dan Minuman : ";
                                            }
                                        } while (exit == "");

                                        if (exit != "exit" && exit != "EXIT"){
                                            system("cls");
                                            cout << endl;
                                            cout << "||  Selamat datang, " << nicknm << endl << endl;
                                            cout << ">>>>>>>>>>>>>>>>>>>>>  NGAWI PLAZA PARK - CINEMA XX  <<<<<<<<<<<<<<<<<<<<<" << endl;
                                            cout << "                   # Sistem Manajemen Pemesanan Tiket #" << endl << endl;
                                            cout << "                         ~~ Hapus Data Minuman ~~" << endl << endl;
                                            cout << "\n||  Belum ada Data Minuman yang ditambahkan." << endl << endl;
                                            cout << "Input harus 'exit' atau 'EXIT'!" << endl;
                                            cout << "Ketik 'exit' untuk kembali ke Menu Makanan dan Minuman : ";
                                        }
                                    } while (exit != "exit" && exit != "EXIT");

                                    backToMknMnmMenu = true;
                                    system("cls");
                                    break;
                                } else {
                                    do {
                                        system("cls");
                                        cout << endl;
                                        cout << "||  Selamat datang, " << nicknm << endl << endl;
                                        cout << ">>>>>>>>>>>>>>>>>>>>>  NGAWI PLAZA PARK - CINEMA XX  <<<<<<<<<<<<<<<<<<<<<" << endl;
                                        cout << "                   # Sistem Manajemen Pemesanan Tiket #" << endl << endl;
                                        cout << "                         ~~ Hapus Data Minuman ~~" << endl << endl;
                                        for (int i = 0; i < vctMnm.size(); i++){
                                            cout << "   # Minuman ke-" <<i+1 << " #"<< endl;
                                            cout << "   Nama    : " << vctMnm[i].namaMinuman << endl;
                                            cout << "   Harga   : Rp." << vctMnm[i].hargaMinuman << endl << endl;
                                        }
                                        do {
                                            cout << "||  Minuman Ke Berapa Yang Ingin Dihapus? (Ketik Angka)(0 untuk keluar) : ";
                                            cin >> pilihan;

                                            if (pilihan > vctMnm.size() || pilihan < 0){
                                                system("cls");
                                                cout << endl;
                                                cout << "||  Selamat datang, " << nicknm << endl << endl;
                                                cout << ">>>>>>>>>>>>>>>>>>>>>  NGAWI PLAZA PARK - CINEMA XX  <<<<<<<<<<<<<<<<<<<<<" << endl;
                                                cout << "                   # Sistem Manajemen Pemesanan Tiket #" << endl << endl;
                                                cout << "                         ~~ Hapus Data Minuman ~~" << endl << endl;
                                                for (int i = 0; i < vctMnm.size(); i++){
                                                    cout << "   # Minuman ke-" <<i+1 << " #"<< endl;
                                                    cout << "   Nama    : " << vctMnm[i].namaMinuman << endl;
                                                    cout << "   Harga   : Rp." << vctMnm[i].hargaMinuman << endl << endl;
                                                }
                                                cout << "    Minuman ke-"<< pilihan << " tidak ada!" << endl;
                                            }
                                        } while (pilihan > vctMnm.size() || pilihan < 0);

                                        if (pilihan == 0){
                                            system("cls");
                                            backToMknMnmMenu = true;
                                            break;
                                        } else {
                                            session = vctMnm[pilihan-1].namaMinuman;
                                            vctMnm.erase(vctMnm.begin() + pilihan - 1);
                                        }

                                        cout << "\n    Minuman ke-"<<pilihan<<" '" << session << "' Telah Dihapus" << endl << endl;
                                        do {
                                            cout << "||  Apakah ingin menghapus Minuman kembali? (y/n) : ";
                                            cin >> yesorno;
                                            if (yesorno != 'y' && yesorno != 'Y' && yesorno != 'n' && yesorno != 'N'){
                                                cout << endl << "Input tidak sesuai!" << endl;
                                            }
                                        } while (yesorno != 'y' && yesorno != 'Y' && yesorno != 'n' && yesorno != 'N');
                                    } while (yesorno == 'Y' || yesorno == 'y');
                                    backToMknMnmMenu = true;
                                    system("cls");
                                    break;
                                }
                            }
                            break;
                         case 4:
                            backToMainMenu = true;
                            backToMknMnmMenu = false;
                            system("cls");
                            break;
                    }
                    // penutup pilihan 1 - 5 Data Makanan dan Minuman
                } while (backToMknMnmMenu == true);
                break;

            case 4:
                system("cls");
                backToMainMenu = false;
                break;
        }
    } while (backToMainMenu == true);
    // MENU UTAMA
    cout << endl;
    cout << "||  Keluar dari program. "<< endl;
    cout << "||  Terima kasih banyak, " << nicknm << endl;
    cout << "||  Selamat Istirahat. " << endl << endl;

    return 0;
}
