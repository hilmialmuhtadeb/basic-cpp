#include <cstdio>

int main() {
    int usia;
    scanf("%d\n", &usia);

    char kota[100];
    scanf("%s\n", &kota);

    char nama[100];
    scanf("%[^\n]", &nama);

    printf("nama saya %s, saya berusia %d tahun asal %s", nama, usia, kota);
}
