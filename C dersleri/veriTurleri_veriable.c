#include <stdio.h>
#include <stdlib.h>

 int main() {
    int myNumber=5;
    float myNumber2=6.88;
    double myNumber3=220.113;
    char myLetter='A';

    printf("%d\n",myNumber);
    printf("%f\n",myNumber2);
    printf("%lf\n",myNumber3);
    printf("%c\n",myLetter); 

    return 0;
}
/*
 %d tamsayıları yazdırmak için kullanılır
 %f ondalıklı sayıları yazdırmak için kullanılır
 %lf double değerleri yazdırmak için kullanılır
 %c karakterleri yazdırmak için kullanılır
 %ld long tamsayıları yazdırmak için kullanılır
 %u unsigned tamsayıları yazdırmak için kullanılır
 %s stringleri yazdırmak için kullanılır
*/




// Toplama işemleri 

 int main() { 

    int num1,num2,num3,num4,sum;
    num1=5;
    num2=6;
    num3=7;
    num4=8;
    sum=num1+num2+num3+num4;
    printf("sum: %d\n",sum);
    return 0;
}


// Çıkarma işlemleri

 int main() {
    
    int num1,num2,num3,num4,sub;
    num1=20;
    num2=8;
    num3=5;
    num4=1;
    sub=num1-num2-num3-num4;
    printf("sub: %d\n",sub);
    return 0;
}


// Çarpma işlemleri

int main() {
    
    int num1,num2,num3,num4,mul;
    num1=2;
    num2=10;
    num3=5;
    num4=3;
    mul=num1*num2*num3*num4;
    printf("mul: %d\n",mul);
    return 0;
}


// Bölme işlemleri

 int main() {
    
    float num1,num2,div;
    num1=64;
    num2=6;
    div=num1/num2;
    printf("div: %f\n",div);
    return 0;
}


int main() {

    double num1,num2,num3,num4,div;
    num1=250;
    num2=16;
    num3=5;
    num4=2;
    div=num1/num2/num3/num4;
    printf("div: %lf\n", div);
    return 0;

}

// istenilen kodun çalışması için geriye kalan tüm main fonksiyonları yorum satırı haline getirilmelidir.