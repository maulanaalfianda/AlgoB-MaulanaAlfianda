#include<iostream>
using namespace::std;

int uts,uas,t,a;
float Nuts,Nuas,Ntugas,Nabsen,jumlah;

void input(){
    cout<<"Nilai UTS :";cin>>uts;
    cout<<"Nilai UAS :";cin>>uas;
    cout<<"Nilai Tugas :";cin>>t;
    cout<<"Nilai absen :";cin>>a;
}

void hitung(){
    Nuts =uts*20/100;
    Nuas =uas*30/100;
    Ntugas =t*35/100;
    Nabsen =a*15/100;
    jumlah=Nuts+Nuas+Ntugas+Nabsen;

}

void tampil(){
    cout<<"\nUts = "<<Nuts;
    cout<<"\nuas = "<<Nuas;
    cout<<"\ntugas = "<<Ntugas;
    cout<<"\nabsen = "<<Nabsen;
    cout<<"\ntotal nilai = "<<jumlah;
}

void akhir(){

    if (jumlah>=81)
        cout<<"\nnilai A";
    else if (jumlah>=61)
        cout<<"\nnilai B";
    else if (jumlah>=41)
        cout<<"\nnilai C";
    else if (jumlah>=21)
        cout<<"\nniali D";
    else
        cout<<"\nnilai E";
}

main(){
    input();
    hitung();
    tampil();
    akhir();
}
