#include <stdio.h>

struct mahasiswa {
 char nim[25];
 char nama[25];
 int usia;
};

typedef struct {
 char namamk[25];
 int semester;
 int sks;
}mataKuliah;

int main(){
 struct mahasiswa mhs1 = {"5170411198", "Rizal Nayoan",19};
 mataKuliah mk1 = {"Struktur Data", 3, 1};

 //tampilkan data Mahasiswa
 printf("NIM : %s\n",mhs1.nim);
 printf("Nama : %s\n",mhs1.nama);
 printf("Usia : %d\n",mhs1.usia);

 //tampilkan data Mata Kuliah
 printf("Mata Kuliah : %s\n",mk1.namamk);
 printf("Semester : %d\n",mk1.semester);
 printf("SKS : %d\n",mk1.sks);
}
