#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Ogrenci {
    int numara;
    char ad[50];
    float ortalama;
};

#define DOSYA_ADI "ogrenci_kayitlari.dat"

void menu_goster();
void kayit_ekle();
void kayit_listele();

int main() {
    int secim;

    while (1) {
        menu_goster();
        printf("Seçiminizi girin: ");
        if (scanf("%d", &secim) != 1) {
       
            while (getchar() != '\n');
            secim = 0;
        }

        switch (secim) {
            case 1:
                kayit_ekle();
                break;
            case 2:
                kayit_listele();
                break;
            case 3:
                printf("Programdan çıkılıyor. Güle güle!\n");
                return 0; 
            default:
                printf("Geçersiz seçim. Lütfen 1, 2 veya 3 girin.\n");
                break;
        }
        printf("\n--- Devam etmek için Enter'a basın ---\n");
  
        while (getchar() != '\n'); 
        getchar(); 
    }

    return 0;
}

void menu_goster() {
    printf("\n==== Öğrenci Kayıt Sistemi ====\n");
    printf("1. Yeni Kayıt Ekle\n");
    printf("2. Tüm Kayıtları Listele\n");
    printf("3. Çıkış\n");
    printf("===============================\n");
}

void kayit_ekle() {
    FILE *dosya;
    struct Ogrenci yeni_ogrenci;

    dosya = fopen(DOSYA_ADI, "ab");

    if (dosya == NULL) {
        perror("Dosya açma hatası");
        return;
    }

    printf("\n--- Yeni Öğrenci Ekle ---\n");
    printf("Öğrenci Numarası: ");
    scanf("%d", &yeni_ogrenci.numara);
    
    while (getchar() != '\n'); 

    printf("Adı ve Soyadı: ");
 
    fgets(yeni_ogrenci.ad, 50, stdin);

    yeni_ogrenci.ad[strcspn(yeni_ogrenci.ad, "\n")] = 0; 
    
    printf("Ortalama Notu: ");
    scanf("%f", &yeni_ogrenci.ortalama);

    fwrite(&yeni_ogrenci, sizeof(struct Ogrenci), 1, dosya);

    printf("Kayıt başarıyla eklendi.\n");

    fclose(dosya);
}

void kayit_listele() {
    FILE *dosya;
    struct Ogrenci ogrenci;
    int sayac = 0;

    dosya = fopen(DOSYA_ADI, "rb");

    if (dosya == NULL) {
        printf("\nHata: Kayıt dosyası bulunamadı veya boş.\n");
        return;
    }

    printf("\n--- Tüm Öğrenci Kayıtları ---\n");
    printf("No      | Ad Soyad                             | Ortalama\n");
    printf("----------------------------------------------------------\n");

    while (fread(&ogrenci, sizeof(struct Ogrenci), 1, dosya) == 1) {
        printf("%-7d | %-36s | %.2f\n", 
               ogrenci.numara, ogrenci.ad, ogrenci.ortalama);
        sayac++;
    }
    
    printf("----------------------------------------------------------\n");
    printf("Toplam kayıt sayısı: %d\n", sayac);

    fclose(dosya);
}
