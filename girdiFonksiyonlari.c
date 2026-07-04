#include <stdio.h>
#include <stdlib.h>

/*
int main() {
   int myNumber;
   printf("bir sayi giriniz\n");
   scanf("%d", &myNumber);
   printf("girdiginiz sayi %d", myNumber);
return 0;
} 


int main() {
    int num1,num2,num3;
    printf("3 tane sayi giriniz\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("girdiginiz sayilar:  %d %d %d", num1, num2, num3);
    return 0;
}



int main() {
    int num1,num2,num3,num4,num5;
    printf("5 tane sayi giriniz...");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
    printf("girdiginiz sayilar: %d\n %d\n %d\n %d\n %d\n", num1,num2,num3,num4,num5);
    return 0;
}


//dairenin alanını ve çevresini hesaplayan program
int main() {
    float r,pi,alan,cevre;
    const float pi=3.14;
    printf("yaricapi giriniz...");
    scanf("%f", &r);
    alan=pi*r*r;
    cevre=2*pi*r;
    printf("dairenin alan:%f\n", alan);
    printf("dairenin cevresi:%f", cevre);
    return 0;
}


//dikdörtgenin alanını ve çevresini hesaplayan program
int main() {
    float uzunKenar,kisaKenar,alan,cevre;
    printf("dikdörtgenin uzun kenarini giriniz...");
    scanf("%f", &uzunKenar);
    printf("dikdörtgenin kisa kenarini giriniz...");
        scanf("%f", &kisaKenar);
        if (uzunKenar<=0 || kisaKenar<=0 || uzunKenar<kisaKenar) {
            printf("geçersiz kenar uzunluğu girdiniz");
            return 0;
        }
        alan=kisaKenar* uzunKenar;
        cevre=2*(uzunKenar+kisaKenar);
        printf("dikdörtgenin alani: %f\n", alan);
        printf("dikdörtgenin çevresi:%f", cevre);
        return 0;
    }
        
        
        //dikdörtgenin hacmini hesaplama 
        int main() {
           float uzunKenar,kisaKenar,yukseklik,hacim;
           printf("dikdörgenin uzun kenarini giriniz...\n");
           scanf("%f", &uzunKenar);
           printf("dikdörtgenin kisa kenarini giriniz...\n");
           scanf("%f", &kisaKenar);
           printf("dikdörtgenin yüksekliğini giriniz..."); 
           scanf("%f", &yukseklik);
           if (uzunKenar<=0 || kisaKenar<=0 || yukseklik<=0 || uzunKenar<kisaKenar) {
            printf("geçersiz kenar uzunluğu girdiniz");
            return 1;
         }
           hacim=uzunKenar*kisaKenar*yukseklik;
           printf("dikdörtgenin hacmi: %f", hacim);
         return 0;
        } 
        

        //girilen sayıların karesini ve küpünü hesaplayan program
        int main() {
            int sayi1,sayi2,sayi3,kare1,kare2,kare3,kup1,kup2,kup3;
            printf("3 tane sayi giriniz...");
            scanf("%d %d %d", &sayi1, &sayi2, &sayi3);
            kare1=sayi1*sayi1;
            kare2=sayi2*sayi2;
            kare3=sayi3*sayi3;
            kup1=sayi1*sayi1*sayi1;
            kup2=sayi2*sayi2*sayi2;
            kup3=sayi3*sayi3*sayi3;
            printf("girdiginiz sayilarin kareleri: %d %d %d\n", kare1, kare2, kare3);
            printf("girdiginiz sayilarin küpleri: %d %d %d", kup1, kup2, kup3);
            return 0;
        }
        */
        
        // girilen sayıların ortalamasını hesaplayan program
        int main() {
            float sayi1,sayi2,sayi3,ortalama;
            printf("3 tane sayi giriniz...");
            scanf("%f %f %f", &sayi1, &sayi2, &sayi3);
            ortalama=(sayi1+sayi2+sayi3)/3;
            printf("girdiginiz sayilarin ortalamasi: %f", ortalama);
            return 0;
        }