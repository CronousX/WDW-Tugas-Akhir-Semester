#include <stdio.h>
#include <string.h>

struct Nilai {
    int tugas, UTS, UAS, akhir;
    char grade;
};

struct Mahasiswa {
    char name[35];
    struct Nilai nilaiMhs;
};

struct Mahasiswa data_Mhs[10];

void cekGrade(int i);

int main() {
    int jumlahMahasiswa;
    char grade;
    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &jumlahMahasiswa);
    
    
    for (int i = 1; i <= jumlahMahasiswa; i++) {
        printf("Mahasiswa ke-%d\n", i);
        printf("Nama\t\t: ");
        fflush(stdin);
        fgets(data_Mhs[i].name, sizeof(data_Mhs[i].name), stdin);
        data_Mhs[i].name[strcspn(data_Mhs[i].name, "\n")] = 0;
        printf("Nilai Tugas\t: ");
        scanf("%d", &data_Mhs[i].nilaiMhs.tugas);
        printf("Nilai UTS\t :");
        scanf("%d", &data_Mhs[i].nilaiMhs.UTS);
        printf("Nilai UAS\t :");
        scanf("%d", &data_Mhs[i].nilaiMhs.UAS);
        data_Mhs[i].nilaiMhs.akhir = data_Mhs[i].nilaiMhs.tugas*0.2 + data_Mhs[i].nilaiMhs.UTS*0.4 + data_Mhs[i].nilaiMhs.UAS*0.4;
        cekGrade(i);
    }


    printf("Daftar Nilai\n");
    printf("Mata Kuliah Algoritma dan Struktur Data\n");
    printf("=======================================\n");
    printf("No\tNama\t\t\tNilai\t\t\tGrade\n");
    printf("\tMahasiswa\tTugas\tUTS\tUAS\tAkhir\n");
    printf("=======================================\n");
    for (int i = 1; i <= jumlahMahasiswa; i++) {
        printf("%d\t%s\t\t%d\t%d\t%d\t%d\t%c\n", i, data_Mhs[i].name, data_Mhs[i].nilaiMhs.tugas, data_Mhs[i].nilaiMhs.UTS, data_Mhs[i].nilaiMhs.UAS, data_Mhs[i].nilaiMhs.akhir, data_Mhs[i].nilaiMhs.grade);
    }
}

void cekGrade(int i){
    int nilai = data_Mhs[i].nilaiMhs.akhir;

    if (nilai >= 80) {
        data_Mhs[i].nilaiMhs.grade = 'A';
    }
    else if (nilai >= 70){
        data_Mhs[i].nilaiMhs.grade = 'B';
    }
    else if (nilai >= 60) {
        data_Mhs[i].nilaiMhs.grade = 'C';
    }
    else if (nilai >= 50){
        data_Mhs[i].nilaiMhs.grade = 'D';
    }
    else if (nilai < 50){
        data_Mhs[i].nilaiMhs.grade = 'E';
    }
}