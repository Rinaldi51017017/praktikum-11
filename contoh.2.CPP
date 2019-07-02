#include <iostream.h>
#include <conio.h>
void main ()
{
struct data_tanggal
{
int tanggal;
int bulan;
int tahun;
};
data_tanggal tg11, tg12;
tg11.tanggal = 1;
tg11.bulan = 9;
tg11.tahun = 1979;
tg12 = tg11;
// atau
tg12.tanggal = tg11.tanggal;
tg12.bulan = tg11.bulan;
tg12.tahun = tg12.tahun;
cout << tg11.tanggal << " << tg11.bulan << " << tg11.tahun << endl;
cout << tg12.tanggal << " << tg12.bulan << " << tg12.tahun << endl;
}
typedef struct
{
char kode[5];
char nama [20];
int jml;
float harga;
getch();
} psd;
// pendefenisian nama variabel baru psd persediaan_barang;
