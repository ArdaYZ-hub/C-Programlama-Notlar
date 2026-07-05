#include <stdio.h>
#include <stdlib.h>
/*
int main() {
    float mol,sabit,sicaklik,hacim,basinc;
    sabit=0.082;
    printf("mol sayisini giriniz...");
    scanf("%f", &mol);
    printf("sicakligi giriniz...");
    scanf("%f", &sicaklik);
    printf("hacimi giriniz...");
    scanf("%f", &hacim);
    basinc=(mol*sabit*sicaklik)/hacim;
    printf("basinc:%f", basinc );
    return 0;
}



int main() {
    int sayi,birlerBasamagi,onlarBasamagi;
    printf("bir sayi giriniz...");
    scanf("%d", &sayi);
    birlerBasamagi=sayi%10;
    printf("birler basamagi: %d\n", birlerBasamagi);
    onlarBasamagi=(sayi%100)/10;
    printf("onlar basamagi : %d", onlarBasamagi);
    return 0;
}



int main() {
    int num1,num2,num3,num4,num5,ortalama;
    printf("istediginiz sayilari giriniz...");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
    ortalama=(num1+num2+num3+num4+num5)/5;
    printf("girdiginiz sayilarin ortalamasi: %d", ortalama);
    return 0 ;
}
   
*/

int main() {
    float fatura,enflasyon,eskiAbonelikUcreti,yeniAbonelikUcreti,eskiBirimFiyat,yeniBirimFiyat,eskiHarcanan,yeniHarcanan,harcanan;
    printf("enflasyon degerini giriniz...");
    scanf("%f", &enflasyon);
    printf("eski abonelik ucretini giriniz...");
    scanf("%f", &eskiAbonelikUcreti);
    printf("eski birim fiyati giriniz...");
    scanf("%f", &eskiBirimFiyat);
    printf("eski harcanan degeri giriniz...");
    scanf("%f", &eskiHarcanan);
    printf("yeni harcanan degeri giriniz...");
    scanf("%f", &yeniHarcanan);
    yeniAbonelikUcreti=eskiAbonelikUcreti*(1+enflasyon/100);
    yeniBirimFiyat=eskiBirimFiyat*(1+enflasyon/100);
    harcanan=yeniHarcanan-eskiHarcanan;
    fatura=harcanan*yeniBirimFiyat+yeniAbonelikUcreti;
    printf("fatura ucretiniz %f", fatura);
    return 0;
}