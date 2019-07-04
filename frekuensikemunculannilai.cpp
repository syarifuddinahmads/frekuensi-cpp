#include <iostream>
using namespace std;

int main()
{

    int menu, jumlahDataNilai, dataNilai[] = {},numberTemp = 0,numTemp = 0,numCount = 0;
    do
    {
        cout<<"Menu Program : "<<endl;
        cout<<"1. Input Nilai"<<endl;
        cout<<"2. Tampilkan Nilai"<<endl;
        cout<<"3.Exit"<<endl;
        cout<<"Pilih menu : ";
        cin>>menu;
        switch(menu)
        {
        case 1:
            cout<<"Masukkan Jumlah Data Nilai : ";
            cin>>jumlahDataNilai;
            for (int i = 0; i < jumlahDataNilai; i++)
            {
                cout<<"Nilai ke - "<<i+1<<" : ";
                cin>>dataNilai[i];
            }
            break;
        case 2:
            cout <<"Data Nilai Sebelum Disorting = [ ";
            for (int i = 0; i < jumlahDataNilai; i++)
            {
                cout<<dataNilai[i]<<" , ";
            }
            cout<<" ]"<<endl;
            for (int i = 0; i < jumlahDataNilai; i++)
            {
                for (int j = 1; j < jumlahDataNilai; j++)
                {
                    if (dataNilai[j - 1] >= dataNilai[j])
                    {
                        numberTemp = dataNilai[j - 1];
                        dataNilai[j - 1] = dataNilai[j];
                        dataNilai[j] = numberTemp;
                    }
                }
            }
            cout <<"Data Nilai Setelah Disorting = [ ";
            for (int i = 0; i < jumlahDataNilai; i++)
            {
                cout<<dataNilai[i]<<" , ";
            }
            cout<<" ]"<<endl;
            cout<<"Banyak Peluang Kemunculan Nilai : "<<endl;
            for (int i = 0; i < jumlahDataNilai; i++)
            {
                if (dataNilai[i] != numTemp)
                {
                    if (numCount > 0)
                    {
                        cout<<"Nilai : "<< numTemp <<" Muncul " << numCount << " Kali"<<endl;
                    }
                    numTemp = dataNilai[i];
                    numCount = 1;
                }
                else
                {
                    numCount++;
                }
            }
            if (numCount > 0)
            {
                cout<<"Nilai : "<< numTemp <<" Muncul " << numCount << " Kali"<<endl;
            }
            break;
        case 3:
            return 0;
            break;
        default:
            cout<<"Menu tidak valid !"<<endl;
            break;
        }

    }
    while(true);

}
