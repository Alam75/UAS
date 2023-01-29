#include <iostream>
#include <string>
#include <fstream>

using namespace std;

string lanjut;

struct Quiz{
    int nomor_pertanyaan;
    string pertanyaan;
    string pilihan1;
    string pilihan2;
    string pilihan3;
    string pilihan4;
    char jawaban_benar;
};

void new_game(){
    Quiz k1 = {1, "Perintah untuk menginput suatu nilai dari keyboard untuk di proses di dalam program adalah?", "cout", "cin", "getch", "input", 'B'};
    Quiz k2 = {2, "Suatu tempat yang berfungsi untuk menampung data atau nilai yang dapat berubah ubah selama program berjalan disebut?", "konstanta", "variabel", "define", "function", 'B'};
    Quiz k3 = {3, "Tipe data apa yang digunakan untuk menyimpan variabel dengan nilai teks?", "string", "String", "txt", "TXT", 'A'};
    Quiz k4 = {4, "Tipe data yang digunakan untuk bilangan pecahan adalah?", "Char", "String", "interger", "Double", 'D'};
    Quiz k5 = {5, "Tipe data yang digunakan unutk bilangan bulat adalah?", "Char", "String", "int", "Double", 'C'};
    Quiz k6 = {6, "Di bawah ini merupakan tipe data numerik, kecuali", "interger", "float", "double", "char", 'D'};
    Quiz k7 = {7, "Berikut ini jenis perulangan di C++, Kecuali?", "For", "While", "Do While", "Switch", 'D'};
    Quiz k8 = {8, "Berikut adalaah pernyataan yang digunakan untuk menghentikan perulangan?", "stop", "break", "exit", "return", 'B'};
    Quiz k9 = {9, "Berikut adalah struktur percabangan di C++, Kecuali", "if", "if else", "switch", "for", 'D'};
    Quiz k10 = {10, "Fungsi dari perintah cls adalah?", "Menampilkan output", "Membersihkan layar", "Menahan tampilan output", "Menampilkan karakter tertentu", 'B'};
    Quiz pertanyaan[10] = {k1, k2, k3, k4, k5, k6, k7, k8, k9, k10};

    int score = 0;
    char jawaban;
    for(int i=0; i < 10; i++){
            Quiz pertanyaan_saat_ini = pertanyaan[i];
            cout << "Pertanyaan" << pertanyaan_saat_ini.nomor_pertanyaan << ": " << pertanyaan_saat_ini.pertanyaan << endl;
            cout << "A. " << pertanyaan_saat_ini.pilihan1 << endl;
            cout << "B. " << pertanyaan_saat_ini.pilihan2 << endl;
            cout << "C. " << pertanyaan_saat_ini.pilihan3 << endl;
            cout << "D. " << pertanyaan_saat_ini.pilihan4 << endl;
            cout << "Silahkan masukan jawaban(A/B/C/D): ";
            cin >> jawaban;
            switch(jawaban){
            case 'A':
                if(pertanyaan_saat_ini.jawaban_benar == 'A'){
                    cout << "Jawaban anda benar!" << endl;
                    score++;
                }else{
                    cout << "Jawaban anda salah" << endl;
                }
                break;
            case 'B':
                if(pertanyaan_saat_ini.jawaban_benar == 'B'){
                    cout << "Jawaban anda benar" << endl;
                    score++;
                }else{
                    cout << "Jawaban anda salah" << endl;
                }
                break;
            case 'C':
                if(pertanyaan_saat_ini.jawaban_benar == 'C'){
                    cout << "Jawaban anda benar" << endl;
                    score++;
                }else{
                    cout << "Jawaban anda salah" << endl;
                }
                break;
            case 'D':
                if(pertanyaan_saat_ini.jawaban_benar == 'D'){
                    cout << "Jawaban anda benar" << endl;
                    score++;
                }else{
                    cout << "Jawaban anda salah" << endl;
                }
                break;
            default:
                cout << "jawaban anda tidak valid." << endl;
                break;
    }
    }
    cout << " score akhir anda adalah " << score << " dari 10 pertanyaan." << endl;

    ofstream outfile;
    outfile.open("score.txt", ios::app);
    outfile << "New game score: " << score << endl;
    outfile.close();
}


void load_game(){
    ifstream infile;
    infile.open("score load.txt");
    string line;
    if(infile.is_open()){
        while(getline(infile, line)){
            cout << line << endl;
       }
        infile.close();
       }else{
           cout << "Tidak1 dapat membuka file." << endl;
       }
}

void tampilkan_peraturan(){
    cout << "\t\t\t\tPeraturan Permainana:" << endl;
    cout << "\t\t\t\t1. Anda akan di beri 10 pertanyaan." << endl;
    cout << "\t\t\t\t2. Anda harus menjawab dengan pilihan yang tersedia A, B, C, atau D." << endl;
    cout << "\t\t\t\t3. Skor anda akan di tampilkan di akhir permainan." << endl;
    cout << "\t\t\t\tSelamat Bermain!" << endl;
}

int main(){
   int pilihan;
   do{
   system("cls");
   cout << "\n\n\n\n\n";
   cout << "\t\t\t||            ||  ||=====   ||        ====      ====     ||\\  //||  ||======"<<endl;
   cout << "\t\t\t ||          ||   ||        ||      ==        ==    ==   || \\// ||  ||      "<<endl;
   cout << "\t\t\t  ||   ||   ||    ||====    ||      ==       ==      ==  ||     ||  ||======  "<<endl;
   cout << "\t\t\t   || |||| ||     ||        ||      ==        ==    ==   ||     ||  ||      "<<endl;
   cout << "\t\t\t    ||    ||      ||======  ||====    ====     =====     ||     ||  ||======"<<endl;
   cout << "\t\t\t\t************************************************************" << endl;
   cout << "\t\t\t\t************************************************************" << endl;
   cout << "\t\t\t\t**                                                        **" << endl;
   cout << "\t\t\t\t**                                                        **" << endl;
   cout << "\t\t\t\t**                                                        **" << endl;
   cout << "\t\t\t\t**                                                        **" << endl;
   cout << "\t\t\t\t**              Selamat Datang Di Quiz Game               **" << endl;
   cout << "\t\t\t\t**                      1.New Game                        **" << endl;
   cout << "\t\t\t\t**                      2 Load Game                       **" << endl;
   cout << "\t\t\t\t**                                                        **" << endl;
   cout << "\t\t\t\t**                                                        **" << endl;
   cout << "\t\t\t\t**                                                        **" << endl;
   cout << "\t\t\t\t**                                                        **" << endl;
   cout << "\t\t\t\t************************************************************" << endl;
   cout << "\t\t\t\t************************************************************" << endl;
   tampilkan_peraturan();
   cout << "\t\t\t\tSilahkan masukan pilihan anda: ";
   cin >> pilihan;
   switch(pilihan){
   case 1:
    system("cls");
    new_game();
    break;
   case 2:
       system("cls");
    load_game();
    break;
   case 3:
    system("cls");
    cout <<"Pilihan anda tidak valid." << endl;
    break;
    }

    cout <<"kembali ke menu <Y/N>";
    cin >> lanjut;
    system("cls");

}while(lanjut == "Y");
    cout <<"program selesai" << endl;
    return 0;
}

