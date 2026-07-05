#include <stdio.h>
#include <stdlib.h>
/*
int main() {
    int number;
    printf("Notunuzu giriniz...");
    scanf("%d", &number);
        
        if (number>=90) {
        printf ("Notunuz A");
        
        }else if (number>=80) {
        printf ("Notunuz B");
        
        }
        else if (number>=70) {
        printf ("Notunuz C");
        
        }else if (number>=60) {
        printf ("Notunuz D");
        
        }else { 
        printf("Notunuz FF");
        }
    return 0;
}


int main () {
    int num;
    printf("bir sayi giriniz...");
    scanf("%d", &num);
    
    if (num>0) {
        printf("Sayi Pozitiftir,Isareti +'dir");
    }else if(num<0){
        printf("Sayi Negatiftir,Isareti -'dir");
    }else {
        printf("Sayi 0");
    }

    return 0;
}
*/

int main() {
    int num;
    printf("Bir Sayi Giriniz...");
    scanf("%d", &num);
    (num>60)?printf("Sinavi Gectiniz."):printf("Sinavi Gecemediniz.");
    return 0;
}
// ?=ise  ,  :=değilse