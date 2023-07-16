#include <stdio.h>
#include <time.h>


int main() {

    int    gun,ay,yil,yas;

    printf("Dogum tarihinizi giriniz (GG AA YYYY): ");
    scanf("%d %d %d",&gun,&ay,&yil);

    time_t simdikiZaman = time(NULL);
    struct tm *simdikiTarih = localtime(&simdikiZaman);

    int    simdikiAy = simdikiTarih->tm_mon + 1;
    int    simdikiGun = simdikiTarih->tm_mday;
    int    simdikiYil = simdikiTarih->tm_year+1900;

    yas=simdikiYil-yil;

    if(ay>simdikiAy)
    {
        yas--;
    }
    else if(ay == simdikiAy && gun >simdikiGun)
    {
        yas--;
    }

    printf("Yasiniz: %d\n",yas);


    return 0;
}
