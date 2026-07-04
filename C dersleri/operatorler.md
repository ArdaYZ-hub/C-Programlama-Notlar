#include <stdio.h>
#include <stdlib.h>


// Aritmetik operatörler

/*
+   ekleme operatörü
-   çıkarma operatörü
*   çarpma operatörü
/   bölme operatörü 
%   mod alma operatörü
++  arttırma operatörü
--  azaltma operatörü
*/

int main() {
    int num1,num2,num3,num4,num5;
    num1=7+10;
    num2=num1-5;
    num3=num1*num2;
    num4=num3/51;
    num5=num4%3;
    printf("num1: %d\n", num1);
    printf("num2: %d\n", num2);
    printf("num3: %d\n", num3);
    printf("num4: %d\n", num4);
    printf("num5: %d\n", num5);
    return 0;
}

// ++ ya da -- operatörleri değişkenin önüne konursa önce değişkenin değeri arttırılır ya da azaltılır sonra işlem yapılır. Değişkenin sonuna konursa önce işlem yapılır sonra değişkenin değeri arttırılır ya da azaltılır.



// Atama operatörleri

/*
=    |
+=   |
-=   |----\ bunları 
*=   |----/ biliyorum
/=   |
%=   |

&=
|=
^=
<<=
>>=
*/

int main()
{
    int d1,d2,d3,d4,number,sum;
    printf("Enter a four digit number:");
    scanf("%d",&number);
    d1=number/1000;
    d2=(number/100)%10;
    d3=(number%100)/10;
    d4=number%10;
    sum=d1+d2+d3+d4;
    printf("Your sum is: %d",sum);


    return 0;
}



// Karşılaştırma operatörleri

/*
==
!=
>=
<=
<
>
*/



// Mantıksal operatörler 

/*
&&
||
!    sonucu tersine döndürür, sonuç doğruysa yanlış döndürür.
*/