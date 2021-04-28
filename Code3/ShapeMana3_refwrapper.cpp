#include<iostream>
#include<vector>
#include<conio.h>
#include<math.h>
#include<algorithm>

#include<functional>
#include<set>
#include<string.h>
// #include<map>
// dùng hẳn 1 lớp khác để kết nối giữa các lớp với nhau (sử dụng hàm bạn để kết nối trực tiếp)
// set sử dụng trong shape
// khi tạo các edge cần dùng new để cấp phát bộ nhớ, và giải phóng nó bằng delete

using namespace std;
struct point
{
    float x;
    float y;
    /*public:
        point(float x1, float y1)    ?????
        {
            this->x = x1;
            this->y = y1;
        }*/
};
float point_distance(point &A, point &B)
{
    return (sqrt( pow((A.x-B.x),2.0) + pow((A.y-B.y),2.0) ));
}
bool operator==(point &A, point &B)
{
    return ((A.x==B.x)&&(A.y==B.y));
}
////////////////////////////////////////////////////////////////////////////////////////////////
class Edge;
class shape
{
    private:
        int color;  // 0->15
        int thickness; //1->3 
	protected: 
	    point O;    // goc toa do (vi tri tam)
    public:
        shape()
        {
            O.x = 0.0;
            O.y = 0.0;
            color = 0;
            thickness = 1;
        }
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
        virtual void put_i2()
        {
            cout << "\nMau cua hinh: ";cin >> color;
            cout << "\nDo day mong cua hinh: ";cin >> thickness;
        }
        virtual void get_i()
        {
            cout << "\nToa do tam cua hinh la: "<< " x= "<< O.x << " y= " << O.y ;
            cout << "\nMau cua hinh:  " << this->color;
            cout << "\nDo day mong cua hinh: " << this->thickness;
        }
        ~shape();
        virtual float get_x()
        {
            return O.x;
        }
        virtual float get_y()
        {
            return O.y;
        }
        virtual float area() =0;
        virtual string get_name() =0;
        bool compare_cpoint(point &a)
        {
            return (O==a);
        }
    public:
        static std::set<reference_wrapper<Edge> > edge_set;
};

class Edge 
{
    private:
        int E_color;  // 0->15
        int E_thickness; //1->3
        reference_wrapper<shape> shape_ref1;
        reference_wrapper<shape> shape_ref2;
        float E_distance;
    public:
        // Edge()
        // {
        //     E_color = 0;
        //     E_thickness = 1;
        //     E_distance = 0.0;
        //     this->shape_ref1 = new shape ;
        //     this->shape_ref2 = new shape ;
        // }
        void reload_E(reference_wrapper<shape> ref1, reference_wrapper<shape> ref2)
        {
            this->shape_ref1 = ref1;
            this->shape_ref2 = ref2;
            cout << "\n^^^^^^^^^^^^^^^^^^^^^^+^=======^+^^^^^^^^^^^^^^^^^^^^" <<endl;
            cout << "\nNhap vao duong noi tam cua hinh: " ; this->shape_ref1.get().get_i();
            cout << "\nVa cua hinh: " ; this->shape_ref2.get().get_i();
            cout << "\nMau cua duong noi tam: "; cin >> E_color;
            cout << "\nDo day mong cua duong noi tam: "; cin >> E_thickness;
            float x1 = ref1.get().get_x();                       // tai sao ko dung dc kieu float& ??
            float y1 = ref1.get().get_y();
            float x2 = ref2.get().get_x();
            float y2 = ref2.get().get_y();
            this->E_distance = sqrt( pow(x1-x2,2.0) + pow(y1-y2,2.0) );
        }
        void get_E_i()
        {
            cout << "\n\n\t\t\tDuong noi tam cua hai hinh: ";
            shape_ref1.get().get_i();
            cout << "\nVa cua hinh: " ; shape_ref2.get().get_i();
            cout << "\nMau cua duong noi tam: " <<  this->E_color;
            cout << "\nDo day mong cua duong noi tam: " <<  this->E_thickness;
            cout << "\nDo dai cua duong noi tam la: " << this->E_distance;
            cout << "\n\t\t\t\t\t ***" << endl;
        }
        ~Edge() { } ; 
};

////////////////////////////////////////////////////////////////////////////////////////////
//dung trong menu
void reload_set(vector<reference_wrapper<shape> > vec)
        {
            vector<reference_wrapper<shape> >::iterator it,jt;
            for (it = vec.begin(); it != vec.end() ; ++it )
            {
                for(jt = it +1 ; jt != vec.end() ; ++jt )
                {
                    reference_wrapper<shape> shape_temp_1;
                    reference_wrapper<shape> shape_temp_2;
                    reference_wrapper<Edge> Edge_temp;
                    Edge_temp.get().reload_E( shape_temp_1, shape_temp_2 );
                    shape::edge_set.insert(Edge_temp);
                }
            }
            // sau khi nhap xong tat ca cac hinh vao menu, goi ham nay ra
            // dung trong menu
        };
void get_set_i(set<reference_wrapper<Edge> > Edge_ref_set) 
        {
            cout << "\n======================================================" <<endl;
            cout << "\nDanh sach cac duong noi tam la: ";
            cout << "\n======================================================\n\n\n" <<endl;
            set<reference_wrapper<Edge> >::iterator it;
            for (it = Edge_ref_set.begin(); it != Edge_ref_set.end() ; ++it )
            {
                it->get().get_E_i();
            }
        };
////////////////////////////////////////////////////////////////////////////////////////////
class circle : public shape
{
    private:
        float radius;
    public:
        string get_name()
        {
            return ("circle");
        }
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
        float area()
        {
            return (pow(this->radius,2.0)*3.14) ;
        }
        ~circle();
};
class rectangle : public shape
{
    private:
        float length_size;
        float width_size;
    public:
        string get_name()
        {
            return ("rectangle");
        }
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
        float area()
        {
            return this->length_size * this->width_size ;
        }
        ~rectangle();
        
};
class square : public shape
{
    private:
        float edge;
    public:
        string get_name()
        {
            return ("square");
        }
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
        float area()
        {
            return ((this->edge) * (this->edge)) ;
        }
        ~square();
        
};
class straight_line : public shape //#strange: xa la
{
    private:
        point dp; //directing point
    public:
        string get_name()
        {
            return ("straight_line");
        }
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
        float area()
        {
            return 0.0 ;
        }
        ~straight_line();
        
};

class oval : public shape
{
    private:
        int goc_dau; 
        int goc_cuoi;
        float xr; //ban truc ngang
        float yr; //ban truc dung
    public:
        string get_name()
        {
            return ("oval");
        }
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
        float area()
        {
            return ((this->xr)*(this->yr)*3.14) ;
        }
        ~oval();
};
class triangle : public shape 
{
    private:
        point A;
        point B;
        point C;
    public:
        string get_name()
        {
            return ("triangle");
        }
        triangle(float x1=0.0, float y1=0.0,int c1 =0,int t1 = 1,float x2=0.0, float y2=0.0,float x3=0.0, float y3=0.0,float x4=0.0, float y4 =0.0):shape(x1,y1,c1,t1)
        {
            A.x = x2;
            A.y = y2;
            B.x = x3;
            B.y = y3;
            C.x = x4;
            C.y = y4;
        }
        void put_i() 
        {
            cout <<"\nNhap thong so cua hinh tam giac: ";
            shape::put_i2();
            cout << "\nNhap toa do Diem A cua tam giac: " ;
            cout << "\nx= ";cin >> A.x;
            cout << "\ny= ";cin >> A.y;
            cout << "\nNhap toa do Diem B cua tam giac: " ;
            cout << "\nx= ";cin >> B.x;
            cout << "\ny= ";cin >> B.y;
            cout << "\nNhap toa do Diem C cua tam giac: " ;
            cout << "\nx= ";cin >> C.x;     
            cout << "\ny= ";cin >> C.y;
        }
        void get_i()
        {
            O.x=(A.x+B.x+C.x)/3;
            O.y=(A.y+B.y+C.y)/3;
            cout << "\n########################---Tam giac---####################### ";
            cout << "\nNhap toa do Diem A cua tam giac: " ;
            cout << "\nx= " << A.x;
            cout << "\ny= " << A.y;
            cout << "\nNhap toa do Diem B cua tam giac: " ;
            cout << "\nx= " << B.x;
            cout << "\ny= " << B.y;
            cout << "\nNhap toa do Diem C cua tam giac: " ;
            cout << "\nx= " << C.x;
            cout << "\ny= " << C.y;      
            shape::get_i();
            cout << "\n--------------------------------------------------------";
        }
        
        float area()
        {
            float a = point_distance(O,A);
            float b = point_distance(O,B);
            float c = point_distance(A,B);
            float p = (a+b+c) / 2.0;
            return ( sqrt( p*(p-a)*(p-b)*(p-c) ) ) ;
        }
        ~triangle();
};
void menu()
{
        cout <<"\n*******************-------===MENU===-------********************";
        cout <<"\nAn 0 de thoat chuong trinh";
        cout <<"\nAn 1 de them 1 hinh tron: ";
        cout <<"\nAn 2 de them 1 hinh oval: ";
        cout <<"\nAn 3 de them 1 hinh chu nhat: ";
        cout <<"\nAn 4 de them 1 hinh vuong: ";
        cout <<"\nAn 5 de them 1 duong thang: ";
        cout <<"\nAn 6 de them 1 hinh tam giac: ";
        cout <<"\nAn 7 de in ra man hinh theo thu tu dien tich tang dan ";
        cout <<"\nAn 8 de in ra man hinh theo thu tu dien tich giam dan ";
        cout <<"\nAn 9 de tim kiem hinh: ";
        cout <<"\nAn 10 de in ra toan bo cac canh noi tam: ";
        cout <<"\n***************************************************************";
}
// nang cao: dung thu function pointer
bool compare_increase(shape& a, shape& b){
        return(a.area() < b.area());}
bool compare_decrease(shape& a, shape& b){
        return(a.area() > b.area());
}

/*
bool compare (shape *a,shape *b)
{
    return (a->area() < b->area());
}
*/
int main()
{
    vector< reference_wrapper<shape> > shape_list;
    shape *x; 
    int choose;
    do
    {
        menu();
        cout <<"\nBan chon so: "; cin >> choose;
        while (choose < 0 || choose > 10 )
        {
            cout <<"\nBan chon so sai, chon lai: ";
            cin >> choose;
        }
        switch (choose)
        {
            case 0: break;
            case 1: 
            {
                x = new circle;
                cout << "\n\n\t\t NHAP THONG TIN HINH TRON\n";
                x->put_i();
                shape_list.push_back(*x);
                break;
            };
            case 2:
            {
                x = new oval;
                cout << "\n\n\t\t NHAP THONG TIN HINH ELIP\n";
                x->put_i();
                shape_list.push_back(*x);
                break;
            };
            case 3:
            {
                x = new rectangle;
                cout << "\n\n\t\t NHAP THONG TIN HINH CHU NHAT\n";
                x->put_i();
                shape_list.push_back(*x);
                break;
            };
            case 4: 
            {
                x = new square;
                cout << "\n\n\t\t NHAP THONG TIN HINH VUONG\n";
                x->put_i();
                shape_list.push_back(*x);
                break;
            };
            case 5: 
            {
                x = new straight_line;
                cout << "\n\n\t\t NHAP THONG TIN DUONG THANG\n";
                x->put_i();
                shape_list.push_back(*x);
                break;
            };
            case 6: 
            {
                x = new triangle;
                cout << "\n\n\t\t NHAP THONG TIN HINH TAM GIAC\n";
                x->put_i();
                shape_list.push_back(*x);
                break;
            };
            case 7: 
            {   cout << "\n\n\t\t ===== DANH SACH CAC HINH =====\n";       
                sort(shape_list.begin(),shape_list.end(),compare_increase);         
                // for (int k=0;k< shape_list.size();k++)
                // {
                //     cout << "\nHinh so " << k+1 << " la: " ;
                //     shape_list[k]->get_i();
                //     cout << "\nDien Tich "  << " la: " <<shape_list[k]->area()<< "\n";
                // }
                int c = 0;
                for (vector<reference_wrapper<shape> >::iterator it = shape_list.begin(); it != shape_list.end(); ++it,++c)
                {
                    cout << "\nHinh so " << c+1 << " la: " ;
                    it->get().get_i();
                    cout << "\nDien Tich "  << " la: " << it->get().area() << "\n";
                }  
               break;
            };
            case 8: 
            {   cout << "\n\n\t\t ===== DANH SACH CAC HINH =====\n";       
                sort(shape_list.begin(),shape_list.end(),compare_decrease);
                int c = 0; 
                for (vector<reference_wrapper<shape> >::iterator it = shape_list.begin(); it != shape_list.end(); ++it,++c)
                {
                    cout << "\nHinh so " << c+1 << " la: " ;
                    it->get().get_i();
                    cout << "\nDien Tich "  << " la: " << it->get().area() << "\n";
                }  
                break;
            }; 
            case 9:
            {
                cout << "\n\n\t\t ===== TIM KIEM HINH =====\n";
                cout<<" \n Nhap toa do O de tim hinh:";
                point temp;
                cout<<" \n Nhap hoanh do: ";
                cin>> temp.x;
                cout<<" \n Nhap tung do: ";
                cin>> temp.y;
                vector<reference_wrapper<shape> >::iterator it = shape_list.begin() ;
                bool check = 0;
                for (it ; it != shape_list.end() ; ++it)
                {
                    if(it->get().compare_cpoint(temp))
                    {
                    cout << "\nThe Shape is found in the myShape" <<endl;
                    it->get().get_i();
                    check = 1;
                    }
				}
                if ( check == 0 ) 
                    cout << "\nThe Shape is not found";
                break;
            };
            case 10:
            {
                // reload edge
                reload_set(shape_list);
                get_set_i(shape::edge_set);
                // put edge
                break;
            };
        }
    } while(choose != 0);
            // map<string,shape*> shape_map;
            // vector<shape*>::iterator it;
            // for (it = shape_list.begin() ; it != shape_list.end() ; ++it)
            // {
            //     shape *tems = *it;
            //     string name = tems->get_name();
            //     if (name == "circle")
            //     {
            //         shape_map.insert(pair<string,shape*>("circle",tems));
            //     }
            //     if (name == "rectangle")
            //     {
            //         shape_map.insert(pair<string,shape*>("rectangle",tems));
            //     }
            //     if (name == "square")
            //     {
            //         shape_map.insert(pair<string,shape*>("square",tems));
            //     }
            //     if (name == "straight_line")
            //     {
            //         shape_map.insert(pair<string,shape*>("straight_line",tems));
            //     }
            //     if (name == "oval")
            //     {
            //         shape_map.insert(pair<string,shape*>("oval",tems));
            //     }
            //     if (name == "triangle")
            //     {
            //         shape_map.insert(pair<string,shape*>("triangle",tems));
            //     }
            // }
            // cout << "\nDone";
	return 0;
}
