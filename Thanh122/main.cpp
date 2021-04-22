#include <iostream>

using namespace std;
struct Congnhan
{
    string tencongnhan;
    int sosanpham[1000];
    int sanphamtrungbinh;
};

int main()
{
    cout<<"Nhap so cong nhan";
    int n;
    cin>>n;
    cout<<"Nhap so ngay lam";
    int m;
    cin>>m;
    Congnhan cn[n];
    for (int i=0; i<n; i++)
    {
        cout<<"Nhap ten cong nhan :";
        cin>>cn[i].tencongnhan;
        for (int j=0; j<m; j++)
        {
            cout<<"\nNhap san pham trong ngay "<<j+1<<" ";
            cin>>cn[i].sosanpham[j];
        }
    }
    int tong=0;
    for (int i=0; i<n; i++)
    {
        tong=0;
        for (int j=0; j<m; j++)
        {
            tong = tong + cn[i].sosanpham[j];
        }
        cn[i].sanphamtrungbinh=(tong/m);
        cout<<"\nSo san pham trung binh"<<cn[i].tencongnhan<<" : "<<cn[i].sanphamtrungbinh;
    }
    for (int i=0; i<n; i++)
    {
        if (cn[i].sanphamtrungbinh>49)
        {
            cout<<"\n"<<cn[i].tencongnhan<<" Loai A";
        }
        else if (cn[i].sanphamtrungbinh<50 && cn[i].sanphamtrungbinh>39)
        {
            cout<<"\n"<<cn[i].tencongnhan<<" Loai B";
        }
        else if (cn[i].sanphamtrungbinh<40 && cn[i].sanphamtrungbinh>29)
        {
            cout<<"\n"<<cn[i].tencongnhan<<" Loai C";
        }
        else
        {
            cout<<"\n"<<cn[i].tencongnhan<<" Loai D";
        }

    }
    Congnhan temp[1];
    for (int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            if (cn[i].sanphamtrungbinh<=cn[j].sanphamtrungbinh){
                temp[0]=cn[i];
                cn[i]=cn[j];
                cn[j]=temp[0];
            }
        }
    }
    cout<<"\nSap xep ";
    for (int i=0;i<n;i++){
        cout<< " "<<cn[i].sanphamtrungbinh;
    }
    cout<<"\nDanh sach cong nhan:";
    for (int i=0;i<n;i++){
        cout<<"\n"<<i+1<<" "<<cn[i].tencongnhan;
        for (int j=0;j<m;j++){
            cout<<" "<<cn[i].sosanpham[j];
        }
    }

    return 0;

}
