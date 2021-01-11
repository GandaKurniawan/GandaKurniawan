#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

//Kelas Dasar Ular (Kelas Abstrak)
class Binatang
{
protected:
    char nama_binatang[20];
    char suara_b[20];

public:
    void informasi()
    {
        cout << "Informasi Binatang" << endl;
    }

    //fungsi virtual murni
    virtual void namaBinatang() = 0;
    virtual void suara() = 0;
};

//kelas Kucing turunan dari kelas Binatang
class Kucing : public Binatang
{
public:
    Kucing(char *nm, char *sr)
    {
        strcpy(nama_binatang, nm);
        strcpy(suara_b, sr);
    }

    void informasi()
    {
        cout << "Informasi Kucing" << endl;
    }

    void namaBinatang()
    {
        cout << "Nama  : " << nama_binatang << endl;
    }
    void suara()
    {
        cout << "Suara : \"" << suara_b << "\"" << endl;
    }
};

//kelas Bebek turunan dari kelas Binatang
class Bebek : public Binatang
{
public:
    Bebek(char *nm, char *sr)
    {
        strcpy(nama_binatang, nm);
        strcpy(suara_b, sr);
    }

    void informasi()
    {
        cout << "Informasi Bebek" << endl;
    }

    void namaBinatang()
    {
        cout << "Nama  : " << nama_binatang << endl;
    }

    void suara()
    {
        cout << "Suara : \"" << suara_b << "\"" << endl;
    }
};
int main()
{
    //deklarasi objek
    Binatang *obj_bnt;
    Kucing kcg("Kucing", "meow meow");
    Bebek bbk("Bebek", "kukuruyuk");

    cout << "POLIMORFISME 2" << endl;
    cout << "--------------" << endl;

    //menunjuk ke objek dari kelas Kucing
    obj_bnt = &kcg;
    obj_bnt->informasi();
    obj_bnt->namaBinatang();
    obj_bnt->suara();

    cout << endl;

    //menunjuk ke objek dari kelas Bebek
    obj_bnt = &bbk;
    obj_bnt->informasi();
    obj_bnt->namaBinatang();
    obj_bnt->suara();

    _getche();
    return 0;
}
