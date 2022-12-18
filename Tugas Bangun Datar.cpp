#include<iostream>
#include<stdio.h>
using namespace std;
//Menghitung Bangun Datar

//Persegi, Persegi Panjang, Segitiga, Jajar Genjang, Belah Ketupat, Lingkaran, Trapesium

int main()
{
    //utama

    float alas, tinggi, luas, panjang, lebar, sisi, phi, keliling, a, b, jari;
    char pilihan1, pilihan2, pilihan3;
    phi = 3.14;

    cout<<"Pilih Bangun Datar yang ingin dihitung\n";
    cout<<"1. Persegi/Persegi Panjang\n";
    cout<<"2. Segitiga\n";
    cout<<"3. Jajar Genjang\n";
    cout<<"4. Belah Ketupat/Layang-Layang\n";
    cout<<"5. Lingkaran\n";
    cout<<"6. Trapesium\n";
    cout<<"Pilihan: ";
    cin>>pilihan1;

    if(pilihan1=='1')//Persegi/Persegi Panjang
    {
        cout<<"=== Pilihan Persegi/Persegi Panjang ===\n";
        cout<<"Pilih Persegi = \n";
        cout<<"1. Persegi\n";
        cout<<"2. Persegi Panjang\n";
        cout<<"Pilihan: ";
        cin>>pilihan2;
        if (pilihan2=='1')//Persegi
        {
            cout<<"=== Pilihan Menghitung Persegi ===\n";
            cout<<"Pilih nilai yang ingin dicari = \n";
            cout<<"1. Luas\n";
            cout<<"2. Keliling\n";
            cout<<"Pilihan: ";
            cin>>pilihan3;
            if (pilihan3=='1')
            {
                cout<<"=== Mencari Luas Persegi ===\n";
                cout<<"Masukkan nilai sisi = ";
                cin>>sisi;

                luas = sisi*sisi;
                cout<<"Luas persegi adalah "<<luas;
            }
            if (pilihan3=='2')
            {
                cout<<"=== Mencari Keliling Persegi ===\n";
                cout<<"Masukkan nilai sisi = ";
                cin>>sisi;

                keliling = 4*sisi;
                cout<<"Keliling persegi adalah "<<keliling;
            }
        }
        if (pilihan2=='2')//Persegi Panjang
        {
            cout<<"=== Pilihan Menghitung Persegi Panjang ===\n";
            cout<<"Pilih nilai yang ingin dicari = \n";
            cout<<"1. Luas\n";
            cout<<"2. Keliling\n";
            cout<<"Pilihan: ";
            cin>>pilihan3;
            if (pilihan3=='1'){
                cout<<"Masukkan nilai Panjang = ";
                cin>>panjang;
                cout<<"Masukkan nilai Lebar = ";
                cin>>lebar;
                luas = panjang*lebar;
                cout<<"Luas Persegi Panjang adalah "<<luas;
            }
             if (pilihan3=='2'){
                cout<<"Masukkan nilai Panjang";
                cin>>panjang;
                cout<<"Masukkan nilai Lebar";
                cin>>lebar;
                keliling = 2*(panjang/lebar);
                cout<<"Keliling Persegi Panjang adalah "<<luas;
            }
        }
    }
    if (pilihan1=='2')//Segitiga
    {
        cout<<"=== Mencari Luas Segitiga ===\n";
        cout<<"Masukkan nilai alas = ";
        cin>>alas;
        cout<<"Masukkan nilai tinggi = ";
        cin>>tinggi;

        luas = 0.5*alas*tinggi;
        cout<<"Luas segitiga adalah "<<luas;
    }
    if (pilihan1=='3')//Jajar Genjang
    {
        cout<<"=== Mencari Luas Jajar Genjang ===\n";
        cout<<"Masukkan nilai alas = ";
        cin>>alas;
        cout<<"Masukkan nilai tinggi = ";
        cin>>tinggi;

        luas = alas*tinggi;
        cout<<"Luas Jajar Genjang adalah "<<luas;
    }
    if (pilihan1=='4')//Belah Ketupat/Layang-layang
    {
        cout<<"=== Pilihan Belah Ketupat/Layang-layang ===\n";
        cout<<"Pilih Belah Ketupat/Layang-layang = \n";
        cout<<"1. Belah Ketupat\n";
        cout<<"2. Layang-layang\n";
        cout<<"Pilihan: ";
        cin>>pilihan2;
        if (pilihan2=='1')//Belah Ketupat
        {
            cout<<"=== Pilihan Menghitung Belah Ketupat ===\n";
            cout<<"Pilih nilai yang ingin dicari = \n";
            cout<<"1. Luas\n";
            cout<<"2. Keliling\n";
            cout<<"Pilihan: ";
            cin>>pilihan3;
            if (pilihan3=='1')
            {
                cout<<"=== Mencari Luas Belah Ketupat ===\n";
                cout<<"Masukkan nilai diagonal A = ";
                cin>>a;
                cout<<"Masukkan nilai diagonal B = ";
                cin>>b;
                luas = 0.5*a*b;
                cout<<"Luas Belah Ketupat adalah "<<luas;
            }
            if (pilihan3=='2')
            {
                cout<<"=== Mencari Keliling Belah Ketupat ===\n";
                cout<<"Masukkan nilai sisi = ";
                cin>>sisi;
                keliling = 4*sisi;
                cout<<"Keliling Belah Ketupat adalah "<<keliling;
            }
        }
        if (pilihan2=='2')//Layang-layang
        {
            cout<<"=== Mencari Luas Layang-layang ===\n";
            cout<<"Masukkan nilai diagonal A = ";
            cin>>a;
            cout<<"Masukkan nilai diagonal B = ";
            cin>>b;
            luas = 0.5*a*b;
            cout<<"Luas Layang-layang adalah "<<luas;
        }
    }
    if (pilihan1=='5')//Luas Lingkaran
    {
        cout<<"=== Pilihan Menghitung Lingkaran ===\n";
        cout<<"Pilih nilai yang ingin dicari = \n";
        cout<<"1. Luas\n";
        cout<<"2. Keliling\n";
        cout<<"Pilihan: ";
        cin>>pilihan2;
        if (pilihan2=='1')
        {
            cout<<"=== Mencari Luas Lingkaran ===\n";
            cout<<"Masukkan nilai Jari jari = ";
            cin>>jari;
            luas = phi*jari*jari;
            cout<<"Luas Lingkaran adalah "<<luas;
        }
        if (pilihan2=='2')
        {
            cout<<"=== Mencari Keliling Lingkaran ===\n";
            cout<<"Masukkan nilai Jari jari = ";
            cin>>jari;
            keliling = 2*phi*jari;
            cout<<"Keliling Lingkaran adalah "<<keliling;
        }
    }
    if (pilihan1=='6')//Trapesium
    {
        cout<<"=== Mencari Luas Trapesium ===\n";
        cout<<"Masukkan nilai sisi A = ";
        cin>>a;
        cout<<"Masukkan nilai sisi B = ";
        cin>>b;
        cout<<"Masukkan nilai tinggi = ";
        cin>>tinggi;

        luas = 0.5*(a+b)*tinggi;
        cout<<"Luas Trapesium adalah "<<luas;
    }

    return 0;
}
