#include<iostream>
#include<conio.h>
#include"shape_lib.h"
using namespace std;

void menu()
{
        cout <<"\n************************///MENU///***************************";
        cout <<"\nAn 0 de thoat chuong trinh";
        cout <<"\nAn 1 de them 1 hinh tron: ";
        cout <<"\nAn 2 de them 1 hinh oval: ";
        cout <<"\nAn 3 de them 1 hinh chu nhat: ";
        cout <<"\nAn 4 de them 1 hinh vuong: ";
        cout <<"\nAn 5 de them 1 duong thang: ";
        cout <<"\nAn 6 de them 1 hinh tam giac: ";
        cout <<"\nAn 7 de in ra man hinh ";
        cout <<"\n*************************************************************";
}
int main()
{
    shape* list[10];
    int k=0, choose;
    while(1)
    {
        menu();
        cout <<"\nBan chon so: "; cin >> choose;
        while (choose < 0 || choose >7 )
        {
            cout <<"\nBan chon so sai, chon lai: ";
            cin >> choose;
        }
        switch (choose)
        {
            case 0: break; // ?
            case 1: 
            {
                list[k] = new circle;
                list[k]->put_i();
                k++;
                continue;
            };
            case 2:
            {
                list[k] = new oval;
                list[k]->put_i();
                k++;
                continue;
            };
            case 3:
            {
                list[k] = new rectangle;
                list[k]->put_i();
                k++;
                continue;
            };
            case 4: 
            {
                list[k] = new square;
                list[k]->put_i();
                k++;
                continue;
            };
            case 5: 
            {
                list[k] = new straight_line;
                list[k]->put_i();
                k++;
                continue;
            };
            case 6: 
            {
                list[k] = new triangle;
                list[k]->put_i();
                k++;
                continue;
            };
            case 7: 
            {
                for (int ii=0;ii < k;ii++)
                {
                    cout << "\nHinh so " << ii+1 << " la: " ;
                    list[ii]->get_i();
                }
                continue;
            };
        }
        if (choose == 0) break;
        cout <<"\n"<< k;
    }
    getch();
}