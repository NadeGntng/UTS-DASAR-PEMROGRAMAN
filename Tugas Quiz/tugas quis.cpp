#include <iostream>
using namespace std;
int main()
{
    cout << " =======================================\n";
    cout << " Nama     : Nade Tama Sundara           \n";
    cout << " NIM      : A2.1900124                  \n";
    cout << " Kelas    : Teknik Informatika - B      \n";
    cout << " =======================================\n";
    cout << "               TUGAS QUIS               \n";
    cout << "****************************************\n\n";
    char tampilkan[1];
    char nama[50], jk[50], tl[50], no[50], pekerjaan[50], email[50], alamat[50];
    cout << " =======================================\n";
    cout << "                BIODATA                 \n";
    cout << " =======================================\n";
    cout << " Nama          : Nade Tama Sundara";
    cin.getline(nama,50);
    cout << " Alamat        : Citamiang";
    cin.getline(alamat,50);
    cout << " Tanggal Lahir : 18/01/2001";
    cin.getline(tl,50);
    cout << " Jenis Kelamin : Laki Laki";
    cin.getline(jk,50);
    cout << " No.Tlp/Hp     : 08892728207";
    cin.getline(no,50);
    cout << " Pekerjaan     : Free Lancer";
    cin.getline(pekerjaan,50);
    cout << " Email         : nadetamasundara18@gmail.com";
    cin.getline(email,50);
    cout << " Jurusan Teknik Informatika STMIK Sumedang";
    cin.getline(tampilkan,1);

    return 0;
}
