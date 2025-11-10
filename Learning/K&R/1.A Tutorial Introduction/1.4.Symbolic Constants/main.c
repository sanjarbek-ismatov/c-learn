#include <stdio.h>
#define raqam int
#define chiqar printf
#define qaytar return
#define kambagallar_uchun_raqam unsigned short int
#define matn char *
#define asosiy main

raqam asosiy()
{
    kambagallar_uchun_raqam yosh = 19;
    matn ism = "Sanjarbek";
    chiqar("Salom %s! Siz %d yoshdasiz\n", ism, yosh);
    qaytar 0;
}