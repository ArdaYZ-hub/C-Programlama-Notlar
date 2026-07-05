#include <stdio.h>
#include <stdlib.h>
/*
int main() {
    int num1,num2;
    num1=0;
    num2=0;
    printf("2 Tane Sayi Giriniz...");
    scanf("%d %d", &num1, &num2);
    if (num1>num2){
        printf("ilk numara buyuktur ikinci numaradan");
    }else if (num2>num1){
        printf("ikinci numara buyuktur birinci numaradan");
    }else {
        printf("2 Sayi Birbirine Esittir");
    }
    return 0;
}
*/


int main() {
    int kitabinFiyati,siparis;
    float indirimOrani,indirimliFiyat,indirimsizFiyat,toplam;
    kitabinFiyati=50;
    siparis=0;
    printf("Kac Tane Siparis Vermek Istiyorsunuz Giriniz...");
    scanf("%d", &siparis);
    if (siparis>=60){
        indirimOrani=0.30;
    }else if(siparis>=30){
        indirimOrani=0.20;
    }else if(siparis>=10){
        indirimOrani=0.12;
    }else {
        indirimOrani=0.01;
    }
    indirimsizFiyat=kitabinFiyati*siparis;
    printf("Indirimsiz Fiyatiniz: %f\n", indirimsizFiyat);
    indirimliFiyat=kitabinFiyati*siparis*indirimOrani;
    printf("Indirimli Fiyatiniz: %f\n", indirimliFiyat);
    toplam=indirimsizFiyat-indirimliFiyat;
    printf("Toplam Fiyatiniz: %f", toplam);
    return 0;
}