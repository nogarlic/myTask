#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <algorithm>
using namespace std;

struct fight{   //untuk menyimpan data permainan
    string nama;
    int score;
};

void start() { //untuk menampilkan menu start atau menu awal
    cout << "\t\t\t                 _                              _       _           _     _           \n"
         << "\t\t\t                | |                            | |     | |         | |   | |          \n"
         << "\t\t\t ___ _ __   __ _| | _____        __ _ _ __   __| |     | | __ _  __| | __| | ___ _ __ \n"
         << "\t\t\t/ __| '_ \\ / _` | |/ / _ \\      / _` | '_ \\ / _` |     | |/ _` |/ _` |/ _` |/ _ \\ '__|\n"
         << "\t\t\t\\__ \\ | | | (_| |   <  __/     | (_| | | | | (_| |     | | (_| | (_| | (_| |  __/ |   \n"
         << "\t\t\t|___/_| |_|\\__,_|_|\\_\\___|      \\__,_|_| |_|\\__,_|     |_|\\__,_|\\__,_|\\__,_|\\___|_|   \n\n"
         << "\t\t\t                     _                   .-=-.          .-==-.\n"
         << "\t\t\t                    { }      __        .' O o '.       /  -<' )\n"
         << "\t\t\t                    { }    .' O'.     / o .-. O \\     /  .--v`\n"
         << "\t\t\t                    { }   / .-. o\\   /O  /   \\  o\\   /O /\n"
         << "\t\t\t                     \\ `-` /   \\ O`-'o  /     \\  O`-`o /\n"
         << "\t\t\t                      `-.-`     '.____.'       `.____.'\n\n"
         << "\t\t\t\t\t\t\t     ---------\n"
         << "\t\t\t\t\t\t\t    | 1. PLAY |\n"
         << "\t\t\t\t\t\t\t     ---------\n"
         << "\t\t\t\t\t\t\t    | 2. HELP |\n"
         << "\t\t\t\t\t\t\t     ---------\n"
         << "\t\t\t\t\t\t\t    | 3. QUIT |\n"
         << "\t\t\t\t\t\t\t     ---------\n\n";
}

void dice(int n){ //untuk menampilkan gambar dadu yang sudah diperoleh secara random untuk setiap pemain
    switch(n){
        case 1 :
        cout << "  _______\n"
             << " |       |\n"
             << " |   o   |\n"
             << " |       |\n"
             << " '-------'\n"; break;
        case 2 :
        cout << "  _______\n"
             << " | o     |\n"
             << " |       |\n"
             << " |     o |\n"
             << " '-------'\n"; break;
        case 3 :
        cout << "  _______\n"
             << " | o     |\n"
             << " |   o   |\n"
             << " |     o |\n"
             << " '-------'\n"; break;
        case 4 :
        cout << "  _______\n"
             << " | o   o |\n"
             << " |       |\n"
             << " | o   o |\n"
             << " '-------'\n"; break;
        case 5 :
        cout << "  _______\n"
             << " | o   o |\n"
             << " |   o   |\n"
             << " | o   o |\n"
             << " '-------'\n"; break;
        case 6 :
        cout << "  _______\n"
             << " | o   o |\n"
             << " | o   o |\n"
             << " | o   o |\n"
             << " '-------'\n"; break;
    }
}

void board(fight player[], int number[]){ //menampilkan papan ular tangga sesuai dengan skor pemain

    string nb[101]={"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28",
    "29", "30", "31", "32", "33", "34", "35","36", "37", "38", "39", "40", "41", "42", "43","44", "45", "46", "47", "48", "49", "50", "51", "52","53", "54", "55", "56", "57", "58",
    "59", "60", "61", "62", "63", "64", "65", "66", "67", "68", "69", "70", "71", "72", "73", "74", "75", "76", "77", "78", "79", "80", "81", "82", "83", "84", "85", "86", "87",
    "88", "89", "90", "91", "92", "93", "94", "95", "96", "97", "98", "99", "WIN"};

    string player1="🐹", player2="🐯", player3="🦁", player4="🦄";

    for (int i=0; i<=100; i++) {
        nb[4]="4"; nb[14]="14";nb[2]="2";
        if(player[0].score==number[i] && player[0].score!=0) nb[i]=player1;
        else if(player[1].score==number[i] && player[0].score!=0) nb[i]=player2; 
        else if(player[2].score==number[i] && player[0].score!=0) nb[i]=player3; 
        else if(player[3].score==number[i] && player[0].score!=0) nb[i]=player4; 
    }

    SetConsoleOutputCP(65001); 
    cout << " ------ ------ ------ ------ ------ ------ ------ ------ ------ ------ \n"
         << "|  "<<nb[91]<<"  |  "<<nb[92]<<"  |  "<<nb[93]<<"  |  "<<nb[94]<<"  |  "<<nb[95]<<"  |  "<<nb[96]<<"  |  "<<nb[97]<<"  |  "<<nb[98]<<"  |  "<<nb[99]<<"  |  "<<nb[100]<<" \n"
         << " --🟦-- ------ -🔴--- ------ ------ ---🔴- ------ ------ ------ ------ \n"
         << "|  "<<nb[90]<<"  |  "<<nb[89]<<"  |🔴"<<nb[88]<<"  |  "<<nb[87]<<"  |  "<<nb[86]<<"  | "<<nb[85]<<"  🔴  "<<nb[84]<<"  |  "<<nb[83]<<"  |  "<<nb[82]<<"  |  "<<nb[81]<<"  | \n"
         << " --🟦-- -----🔴 ----- ------ ------ ----🔴 ------ --🔴-- ------ ------ \n"
         << "|  "<<nb[71]<<"  |  "<<nb[72]<<"  🔴 "<<nb[73]<<"  |  "<<nb[74]<<"  |  "<<nb[75]<<"  |  "<<nb[76]<<" 🔴  "<<nb[77]<<"  |  "<<nb[78]<<"  |  "<<nb[79]<<"  |  "<<nb[80]<<"  | \n"
         << " ------ -----🔴----- -🟦--- ------ -----🔴 ------ ------ --🟦-- ------ \n"
         << "|  "<<nb[70]<<"  |  "<<nb[69]<<"  🔴 "<<nb[68]<<"  🟦"<<nb[67]<<"  |  "<<nb[66]<<"  |  "<<nb[65]<<"🔴|  "<<nb[64]<<"  |  "<<nb[63]<<"  |  "<<nb[62]<<"  |  "<<nb[61]<<"  | \n"
         << " ------ -----🔴-----🟦 ----- ------ ---🔴- 🟦---- ------ ------ 🔴----\n"
         << "|  "<<nb[51]<<"  |  "<<nb[52]<<"🔴   "<<nb[53]<<"🟦  "<<nb[54]<<"  |  "<<nb[55]<<"  |  "<<nb[56]<<"  |🟦"<<nb[57]<<" |  "<<nb[58]<<"  |  "<<nb[59]<<"🔴|  "<<nb[60]<<"  | \n"
         << " ------ ------ ---🟦  ------ ------ ------ -🟦--- ------ --🔴-- ------ \n"
         << "|  "<<nb[50]<<"  |  "<<nb[49]<<"  |  "<<nb[48]<<"  |  "<<nb[47]<<"  |  "<<nb[46]<<"  |  "<<nb[45]<<"  |  "<<nb[44]<<"  |  "<<nb[43]<<"  |🔴"<<nb[42]<<"  |  "<<nb[41]<<"  | \n"
         << " ------ ----🔴 ------ ------ ------ ------ ------ ------ 🔴-🟦-- ------\n"
         << "|  "<<nb[31]<<"  |  "<<nb[32]<<"  🔴 "<<nb[33]<<"  |  "<<nb[34]<<"  |  "<<nb[35]<<"  |  "<<nb[36]<<"  |  "<<nb[37]<<"  |  "<<nb[38]<<"  |🔴"<<nb[39]<<"🟦| "<<nb[40]<<"  | \n"
         << " ------ ------ -🔴--- ------ ------ ------ ------ ------ -🔴--🟦------ \n"
         << "|  "<<nb[30]<<"  |  "<<nb[29]<<"  |  "<<nb[28]<<"  |  "<<nb[27]<<"  |  "<<nb[26]<<"  |  "<<nb[25]<<"  |  "<<nb[24]<<"  |  "<<nb[23]<<"  |  "<<nb[22]<<"  🟦"<<nb[21]<<"  | \n"
         << " ------ ------ ------ ------ 🟦---- ------ --🔴-- ------ ------ 🟦---- \n"
         << "|  "<<nb[11]<<"  |  "<<nb[12]<<"  |  "<<nb[13]<<"  |  "<<nb[14]<<"  |🟦"<<nb[15]<<" |  "<<nb[16]<<"  |  "<<nb[17]<<"🔴|  "<<nb[18]<<"  |  "<<nb[19]<<"  |  "<<nb[20]<<"  | \n"
         << " ------ --🟦-- ---🔴🔴------ 🟦---- ------ -----🔴 ----- ------ ------\n"
         << "|  "<<nb[10]<<"  |  "<<nb[9]<<"   |  "<<nb[8]<<"   |🔴"<<nb[7]<<"   |  "<<nb[6]<<"   |  "<<nb[5]<<"   |  "<<nb[4]<<"   |🔴"<<nb[3]<<"   |  "<<nb[2]<<"   |  "<<nb[1]<<"  \n"
         << " ------ ------ ------ ------ ------ ------ ------ ------ ------ ------ \n";
}

void ClearScreen() //untuk menghapus screen yang telah dilewati
  {
  HANDLE                     hStdOut;
  CONSOLE_SCREEN_BUFFER_INFO csbi;
  DWORD                      count;
  DWORD                      cellCount;
  COORD                      homeCoords = { 0, 0 };

  hStdOut = GetStdHandle( STD_OUTPUT_HANDLE );
  if (hStdOut == INVALID_HANDLE_VALUE) return;

  /* Get the number of cells in the current buffer */
  if (!GetConsoleScreenBufferInfo( hStdOut, &csbi )) return;
  cellCount = csbi.dwSize.X *csbi.dwSize.Y;

  /* Fill the entire buffer with spaces */
  if (!FillConsoleOutputCharacter(
    hStdOut,
    (TCHAR) ' ',
    cellCount,
    homeCoords,
    &count
    )) return;

  /* Fill the entire buffer with the current colors and attributes */
  if (!FillConsoleOutputAttribute(
    hStdOut,
    csbi.wAttributes,
    cellCount,
    homeCoords,
    &count
    )) return;

  /* Move the cursor home */
  SetConsoleCursorPosition( hStdOut, homeCoords );
  }

bool compare(fight a, fight b) { //sebagai salah satu parameter fungsi sorting 
    if (a.score>b.score) return 1;
    else return 0;
}

int main () { //program utama
    int pilihan_start, n_pemain, skor, help; //variabel-variabel yang digunakan
    string winner;
    char roll; 
    string emoji[4]={"🐹", "🐯", "🦁", "🦄"}; //variabel untuk identitas pemain

    int number[101];
    for (int i=1; i<101; i++) {
        number[i]=i;
    }

    startmenu :
    start(); //menampilkan menustar
    cout << "Masukkan angka pilihanmu : ";
    cin >> pilihan_start;
    getch(); ClearScreen();

    switch(pilihan_start){ //kondisi switchcase untuk pilihan 1.play 2.help 3. quit
        case 1 : {
            cout << "SELAMAT DATANG DI PERMAINAN ULAR TANGGA\n\nMasukkan banyak pemain (2-4) : ";
            cin >> n_pemain;
            fight player[n_pemain]; //deklarasi tipe data player[]
            for (int i=0; i<4; i++){
                player[i].score=0;
            }
            SetConsoleOutputCP(65001);
            for (int i=0; i<n_pemain; i++) {
                cout << "Masukkan nama pemain urutan " << i+1 << " : "; cin >> player[i].nama; //untuk memasukkan nama pemain
            } getch(); ClearScreen();
            board(player, number); //menampilkan papan
            while(player[0].score<100 && player[1].score<100 && player[2].score<100 && player[3].score<100) {
                //selama tidak ada pemain yang memiliki skor 100 perulangan akan dilanjutkan
                for (int i=0; i<n_pemain; i++) {
                    cout << "player " << i+1 << " : " << player[i].nama << " " << emoji[i] << "\nKetik r untuk mengocok dadu --- "; cin >> roll;
                    if (roll=='r') {
                        srand(time(0)); cout << endl;
                        skor=rand()%6+1;
                        dice(skor);
                        player[i].score+=skor;
                        switch(player[i].score){
                            case 13 : player[i].score=7; break;
                            case 24 : player[i].score=3; break;
                            case 61 : player[i].score=22; break;
                            case 49 : player[i].score=28; break;
                            case 93 : player[i].score=52; break;
                            case 96 : player[i].score=56; break;
                            case 83 : player[i].score=78; break;
                            case 9 : player[i].score=12; break;
                            case 6 : player[i].score=26; break;
                            case 20 : player[i].score=42; break;
                            case 44 : player[i].score=65; break;
                            case 48 : player[i].score=74; break;
                            case 71 : player[i].score=91; break;
                            case 62 : player[i].score=79; break;
                        }
                        if (player[i].score>100) player[i].score=100-(player[i].score-100);
                        else if (player[i].score==100) {
                            winner=player[i].nama;
                            getch(); ClearScreen(); 
                            cout << "skor player " << i+1 << " : " << player[i].score << endl;
                            board(player, number); 
                            getch(); ClearScreen(); 
                            break;
                        }
                        getch(); ClearScreen();
                        for (int i=0; i<n_pemain; i++) {
                            cout << "skor player " << i+1 << " : " << player[i].score << endl;
                        }
                        board(player, number);
                    }
                } 
            }
            getch();
            cout << "\t\t\t\t\t\t  __ _  __ _ _ __ ___   ___  _____   _____ _ __ \n"
                << "\t\t\t\t\t\t / _` |/ _` | '_ ` _ \\ / _ \\/ _ \\ \\ / / _ \\ '__|\n"
                << "\t\t\t\t\t\t| (_| | (_| | | | | | |  __/ (_) \\ V /  __/ |\n"   
                << "\t\t\t\t\t\t \\__, |\\__,_|_| |_| |_|\\___|\\___/ \\_/ \\___|_| \n"  
                << "\t\t\t\t\t\t  __/ | \n"                                       
                << "\t\t\t\t\t\t |___/ \n";
            getch(); ClearScreen();
            cout << "\t\t\t\t\t\t  ___________\n"
                << "\t\t\t\t\t\t '._==_==_=_.'\n"
                << "\t\t\t\t\t\t .-\\:      /-.\n"
                << "\t\t\t\t\t\t| (|:.     |) |\n"
                << "\t\t\t\t\t\t '-|:.     |-'\t\t WINNER : "<<winner<<"\tCONGRATULATIONS\n"
                << "\t\t\t\t\t\t   \\::.    /\n"
                << "\t\t\t\t\t\t    '::. .'\n"
                << "\t\t\t\t\t\t      ) (\n"
                << "\t\t\t\t\t\t    _.' '._\n"
                << "\t\t\t\t\t\t   `=======`\n";

            getch(); ClearScreen();
            sort(player, player+n_pemain, compare);
            cout << "Statistik Permainan\n----------------------------------------------------\n"
                << "\tRANK\t\tNAME\t\tSCORE\n"
                << "----------------------------------------------------\n";
            for (int i=0; i<n_pemain; i++){
                cout << "\t  " << i+1 << "\t\t" << player[i].nama << "\t\t" << player[i].score << endl;
            }
        } break;

        case 2 :
        helpmenu :
        cout << "Cara Bermain Ular Tangga\n\n"
             << "1. Pengertian Ular tangga\n"
             << "2. Peralatan\n"
             << "3. Gameplay\n"
             << "4. Ular dan Tangga\n"
             << "5. Memenangkan Permainan\n"
             << "6. Variasi Bounce Back\n"
             << "7. Kembali ke menu awal\n"
             << "\nApa yang ingin anda ketahui? "; cin >> help;
             switch(help) {
                 case 1 : cout << "Sebuah permainan papan klasik di seluruh dunia! Arahkan pionmu dari awal hingga akhir,"
                               << "hindari ular, dan ambil jalan pintas untuk menaiki tangga.\nAsal-usul permainan ini "
                               << "ditemukan di India kuno yang dikenal sebagai 'Moksha-Patamu.' Seorang pemain yang "
                               << "naik ke papan mewakili perjalanan spiritual kehidupan,\nyang diperumit oleh kebajikan (tangga),"
                               << "dan sifat buruk - ular.\n"; break;
                case 2 : cout << "1. Papan Ular Tangga\n2. Pion (berbentuk emoji)\n3. Dadu\n"; break;
                case 3 : cout << "Para pemain akan memindahkan pion mereka dari kiri ke kanan, mulai dari 1, mengikuti angka di papan,"
                              << " lalu baris berikutnya dari kanan ke kiri dan ulangi.\nJika seorang pemain melempar 4, maka pemain "
                              << "akan memindahkan bidaknya empat tempat.\n"; break;
                case 4 : cout << "Ketika seorang pemain mendarat di ular, skornya akan turun ke bagian bawah ular.\n"
                              << "Ketika seorang pemain mendarat di dasar tangga, skornya akan naik ke puncak tangga.\n"; break;
                case 5 : cout << "Pemain pertama yang mencapai angka 100, memenangkan permainan.\nUntuk memenangkan pemain harus "
                              << "mengocok dadu yang tepat.\n"; break;
                case 6 : cout << "Pemain pertama yang mencapai angka 100, memenangkan permainan. Namun ketika skor melebihi 100, "
                              << "pion pemain akan memantul dari posisi terakhir dan mundur.\nMisalnya, jika seorang pemain memiliki " 
                              << "empat angka lagi untuk mencapai 100 namun dadu menunjukkan angka 6, pion akan berpindah empat posisi menjadi 100," 
                              << "\nlalu memantulkan kembali dua posisi menjadi 98.\n"; break;
                case 7 : getch(); ClearScreen(); goto startmenu;
                default : cout << "masukkan input sesuai."; getch(); ClearScreen(); goto helpmenu;
             }
             getch(); ClearScreen(); goto helpmenu;
        break;

        case 3 : return 0;

        default :
        cout << "input tidak sesuai, masukkan lagi\n";
        goto startmenu;
    }
    getch();
    ClearScreen();
    goto startmenu; 
}
