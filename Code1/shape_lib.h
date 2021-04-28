#include<iostream>
namespace std
{
    
struct point
{
    float x;
    float y;
};
class shape // abstract class 
{
    private:
        point O;  // goc toa do (vi tri tam)
        int color;  // 0->15
        int thickness; //1->3     
    public:
        shape(float x1=0.0, float y1=0.0,int c1 =0,int t1 = 1)
        {
            O.x =x1;
            O.y = y1;
            color = c1;
            thickness = t1;
        }
        virtual void put_i()
        {
            cout << "\nNhap toa do tam cua hinh: \n";
            cout << "x = "; cin >> O.x;
            cout << "\ny = "; cin >> O.y;
            cout << "\nMau cua hinh: "; cin >> color;
            cout << "\nDo day mong cua hinh: "; cin >> thickness;
        } 
        virtual void get_i()
        {
            cout << "\nToa do tam cua hinh la: "<< " x= "<< O.x << " y= " << O.y ;
            cout << "\nMau cua hinh:  " << this->color;
            cout << "\nDo day mong cua hinh: " << this->thickness;
        }
        ~shape()
        {
            O.x = 0.0;
            O.y = 0.0;
            color = 0;
            thickness = 0;
        }
};

class circle : public shape // subclass
{
    private:
        float radius;
    public:
        circle(float x1=0.0, float y1=0.0,int c1 =0,int t1 = 1,float r1 = 0.0):shape(x1,y1,c1,t1)
        {
            radius = r1;
        }
        void put_i() 
        {
            cout <<"\nNhap thong so cua hinh tron: ";
            shape::put_i();
            cout << "\nNhap vao ban kinh cua hinh tron: "; cin >> this->radius;
        }
        void get_i()
        {
            cout << "\n########################---Hinh tron---####################### ";
            shape::get_i();
            cout << "\nBan kinh cua hinh tron la: " << this->radius;
            cout << "\n--------------------------------------------------------";
        }
        ~circle()
        {
            radius = 0.0;
        }
};
class rectangle : public shape // subclass
{
    private:
        float length_size;
        float width_size;
    public:
        rectangle(float x1=0.0, float y1=0.0,int c1 =0,int t1 = 1,float l1 = 0.0,float w1 = 0.0):shape(x1,y1,c1,t1)
        {
            this->length_size =l1;
            this->width_size = w1;
        }
        void put_i() 
        {
            cout <<"\nNhap thong so cua hinh chu nhat: ";
            shape::put_i();
            cout << "\nNhap vao chieu dai cua hinh chu nhat: "; cin >> this->length_size;
            cout << "\nNhap vao chieu rong cua hinh chu nhat: "; cin >> this->width_size;
        }
        void get_i()
        {
            cout << "\n########################---Hinh chu nhat---####################### ";
            shape::get_i();
            cout << "\nChieu dai cua hinh chu nhat la: " << this->length_size;
            cout << "\nChieu rong cua hinh chu nhat la: " << this->width_size;
            cout << "\n--------------------------------------------------------";
        }
        ~rectangle()
        {
            this->length_size = 0.0;
            this->width_size = 0.0;
        }
};

class square : public shape //// subclass
{
    private:
        float edge; // canh hinh vuong
    public:
        square(float x1=0.0, float y1=0.0,int c1 =0,int t1 = 1,float e1 = 0.0):shape(x1,y1,c1,t1)
        {
            this->edge = e1;
        }
        void put_i() 
        {
            cout <<"\nNhap thong so cua hinh vuong: ";
            shape::put_i();
            cout << "\nNhap vao canh cua hinh vuong: "; cin >> this->edge;
        }
        void get_i()
        {
            cout << "\n########################---Hinh vuong---####################### ";
            shape::get_i();
            cout << "\nCanh cua hinh vuong la: " << this->edge;
            cout << "\n--------------------------------------------------------";
        }
        ~square()
        {
            edge = 0.0;
        }
};

class straight_line : public shape //#strange: xa la // subclass
{
    private:
        point dp; //directing point
    public:
        straight_line(float x1=0.0, float y1=0.0,int c1 =0,int t1 = 1,float x2=0.0, float y2=0.0):shape(x1,y1,c1,t1)
        {
            dp.x = x2;
            dp.y = y2;
        }
        void put_i() 
        {
            cout <<"\nNhap thong so cua duong thang: ";
            shape::put_i();
            cout << "\nNhap toa do vector cua duong thang: \n";
            cout << "\nx = "; cin >> dp.x;
            cout << "\ny = "; cin >> dp.y;
        }
        void get_i()
        {
            cout << "\n########################---Duong thang---####################### ";
            shape::get_i();
            cout << "\ntoa do vector cua duong thang la: " <<" x= "<<dp.x<<" y= "<<dp.y;
            cout << "\n--------------------------------------------------------";
        }
        ~straight_line()
        {
            dp.x = 0.0;
            dp.y = 0.0;
        }
};

class oval : public shape // ellipse
{
    private:
        int goc_dau; // góc đầu
        int goc_cuoi; // góc cuối
        int xr; //ban truc ngang
        int yr; //ban truc dung
    public:
        oval(float x1=0.0, float y1=0.0,int c1 =0,int t1 = 1,int gd=0,int gc= 0,int xr1 =0,int yr1 =0):shape(x1,y1,c1,t1)
        {
            goc_dau = gd;
            goc_cuoi = gc;
            xr =xr1;
            yr = yr1;
        }
        void put_i() 
        {
            cout <<"\nNhap thong so cua hinh oval: ";
            shape::put_i();
            cout << "\nNhap goc dau: ";cin>>goc_dau;
            cout << "\nNhap goc cuoi: ";cin>>goc_cuoi;
            cout << "\nNhap do dai ban truc ngang: ";cin>>xr;
            cout << "\nNhap do dai ban truc dung: ";cin>>yr;
        }
        void get_i()
        {
            cout << "\n########################---Hinh oval---####################### ";
            shape::get_i();
            cout << "\nGoc dau: " << goc_dau;
            cout << "\nGoc cuoi: " << goc_cuoi;
            cout << "\nDo dai ban truc ngang: "<< xr;
            cout << "\nDo dai ban truc dung: "<< yr;
            cout << "\n--------------------------------------------------------";
        }
        ~oval()
        {
             goc_dau = 0;
            goc_cuoi = 0;
            xr =0;
            yr = 0;
        }
};

class triangle : public shape 
{
    private:
        point A;
        point B; 
    public:
        triangle(float x1=0.0, float y1=0.0,int c1 =0,int t1 = 1,float x2=0.0, float y2=0.0,float x3=0.0, float y3=0.0):shape(x1,y1,c1,t1)
        {
            A.x = x2;
            A.y = y2;
            B.x = x3;
            B.y = y3;
        }
        void put_i() 
        {
            cout <<"\nNhap thong so cua hinh tam giac: ";
            shape::put_i();
            cout << "\nNhap toa do Diem A cua tam giac: " ;
            cout << "\nx= ";cin >> A.x;
            cout << "\ny= ";cin >> A.y;
            cout << "\nNhap toa do Diem B cua tam giac: " ;
            cout << "\nx= ";cin >> B.x;
            cout << "\ny= ";cin >> B.y;
        }
        void get_i()
        {
            cout << "\n########################---Tam giac---####################### ";
            shape::get_i();
            cout << "\nNhap toa do Diem A cua tam giac: " ;
            cout << "\nx= " << A.x;
            cout << "\ny= " << A.y;
            cout << "\nNhap toa do Diem B cua tam giac: " ;
            cout << "\nx= " << B.x;
            cout << "\ny= " << B.y;
            cout << "\n--------------------------------------------------------";
        }
        ~triangle()
        {
            A.x = 0.0;
            A.y = 0.0;
            B.x = 0.0;
            B.y = 0.0;
        }
};
}