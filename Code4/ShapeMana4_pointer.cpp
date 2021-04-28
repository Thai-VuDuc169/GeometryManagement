#include<iostream>
#include<vector>
// #include<conio.h>
#include<math.h>
#include<algorithm>

#include<memory> // attempt unique_ptr
//#include<functional> // attempt reference_wrapper
#include<set>
#include<string.h>
// #include<map>
using namespace std;
struct point
{
    float x;
    float y;
};
float point_distance(point &A, point &B)
{
    return (sqrt( pow((A.x-B.x),2.0) + pow((A.y-B.y),2.0) ));
}
bool operator==(const point &A, const point &B)
{
    return ((A.x==B.x)&&(A.y==B.y));
}
////////////////////////////////////////////////////////////////////////////////////////////////
class Edge;
class shape
{
	protected: 
        int color;  // 0->15
        int thickness; //1->3 
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
        ~shape() {};
    public:
        virtual std::istream& put_i(std::istream& is)
        {
            cout << "\nNhap toa do tam cua hinh: \n";
            cout << "x = "; is >> O.x;
            cout << "\ny = "; is >> O.y;
            cout << "\nMau cua hinh: "; is >> color;
            cout << "\nDo day mong cua hinh: "; is >> thickness;
            return is;
        } 
        virtual std::ostream& get_i(std::ostream& os) const
        {
            os << "\nToa do tam cua hinh la: "<< " x= "<< O.x << " y= " << O.y ;
            os << "\nMau cua hinh:  " << this->color;
            os << "\nDo day mong cua hinh: " << this->thickness;
            return os;
        }
        virtual std::istream& put_i_triangle(std::istream& is)
        {
            cout << "\nMau cua hinh: ";is >> color;
            cout << "\nDo day mong cua hinh: ";is >> thickness;
            return is;
        }
        virtual bool compare_shape(const shape& s)
        {
            return ( (this->O == s.O) && (this->color == s.color) && (this->thickness == s.thickness));
        }
    public:
        friend std::istream& operator>>(std::istream& is, shape& temp_shape)
        {
            return temp_shape.put_i(is);
        }
        friend std::ostream& operator<<(std::ostream& os, shape& temp_shape)
        {
            return temp_shape.get_i(os);
        }
        virtual bool operator== (const shape& s)
        {
            return (*this == s);
        }
    public:
        virtual float get_Ox()
        {
            return O.x;
        }
        virtual float get_Oy()
        {
            return O.y;
        }
        virtual float area() =0;
        virtual string get_name() =0;
        bool compare_cpoint(point &a)
        {
            return (O==a);
        }
        //////////////SET///////////// 
    private:
        set<Edge*> edge_set;
    public:
        std::set<Edge*> get_SetEdge()
        {
            return this->edge_set;
        }
        void put_SetEdge(Edge* temp)
        {
            this->edge_set.insert(temp);
        }
        bool CheckSet_empty()
        {
            return (this->edge_set.empty());
        }
        // const vector<shape*> FindSet_element(vector<shape*> vec_shapes)
        // {
        //     for (vector<shape*>::iterator it = vec_shapes.begin() ; it != vec_shapes.end() ; ++it)
        //     {
        //         shape* temp = *it ; 

        //     }
        // }
        //////////////////////////////
};
class Edge 
{
    friend class shape;
    private:
        int E_color;  // 0->15
        int E_thickness; //1->3
        shape *shape_ref1;
        shape *shape_ref2;
        float E_distance;
    public:
        Edge()
        {
            E_color = 0;
            E_thickness = 1;
            E_distance = 0.0;
            this->shape_ref1 = NULL ;
            this->shape_ref2 = NULL ;
        }
        Edge(shape* ref1, shape* ref2)
        {
            this->shape_ref1 = ref1;
            this->shape_ref2 = ref2;
            cout << "\nMau cua duong noi tam: ";
            cin >> E_color;
            cout << "\nDo day mong cua duong noi tam: "; 
            cin >> E_thickness;
            float x1 = ref1->get_Ox();     // tai sao ko dung dc kieu float& ??
            float y1 = ref1->get_Oy();
            float x2 = ref2->get_Ox();
            float y2 = ref2->get_Oy();
            this->E_distance = sqrt( pow(x1-x2,2.0) + pow(y1-y2,2.0) );
            cout << "\nTest 2";
        }
        friend ostream& operator<< (ostream &out, Edge temp)
        {
            out <<"\nHinh: "; 
            out << *temp.shape_ref1 ;
            out <<"\nVa hinh: ";
            out << *temp.shape_ref2 ;
            out <<"\nThong so cua duong noi tam la: ";
            out <<"\nMau cua duong noi tam(int): ";
            out << temp.E_color;
            out <<"\nDo day mong cua duong noi tam(int): ";
            out << temp.E_thickness;
            out <<"\nKhoang cach cua duong noi tam(float): ";
            out << temp.E_distance;
            return out;
        }
        bool operator== (shape& s)
        {
            return ( *(this->shape_ref1)  == s || *(this->shape_ref2) == s );
        }
        ~Edge()
        {
            delete this->shape_ref1 ;
            delete this->shape_ref2 ;
        };
};
class connecting_shape
{
    friend class Edge;
    friend class shape;
    private:
        static connecting_shape *instance ;
    public: 
        connecting_shape() {};
        static connecting_shape* get_instance()
        {
            if (!instance)
            {
                instance = new connecting_shape;
            }
            return instance;   
        }
    public:
        vector<Edge*> vec_Edge;
    // public:
    //     vector<Edge*> get_VecEdge()
    //     {
    //         return (this->vec_Edge);
    //     }
    //     void put_VecEdge(Edge* e)
    //     {
    //         this->vec_Edge.push_back(e);
    //     }
    //     bool CheckVec_empty()
    //     {
    //         return (this->vec_Edge.empty());
    //     }
    public:
        bool put_EachEdgeToSet(vector<shape*> vec) 
        {
            if (vec.empty())
            {
                return 1;
            }
            int s1,s2;
            cout << "\nChon hai hinh ban muon noi tam: ";
            cout << "\nHinh so 1(int): "; cin >> s1;
            cout << "\nHinh so 2(int): "; cin >> s2;
            cout << "\nHai hinh do la: ";
            cout << *(vec.at(s1-1));
            cout << "\nVa cua hinh: ";
            cout << *(vec.at(s2-1));
            Edge* temp_Edge = new Edge( vec[s1-1] , vec[s2-1] );
            cout << "\nTest 3";
            vec[s1-1]->put_SetEdge(temp_Edge);
            cout << "\nTest 4";
            vec[s2-1]->put_SetEdge(temp_Edge);
            cout << "\nTest 5";
            this->vec_Edge.push_back(temp_Edge);
            cout << "\nTest 1";
            return 0;                      
        }
        //void put_AllEdgeToSet();
        // bool print_EachEdgeFromSet(vector<shape*> vec )
        // {
        //     if ( vec.empty() )
        //     {
        //         return 1;
        //     }
        //     int index;
        //     cout << "\nNhap vao hinh ban muon xem cac duong noi tam: ";
        //     cout << "\nHinh do la hinh so may(int): "; cin >> index;
        //     if (vec.at(index-1)->CheckSet_empty() )
        //     {
        //         cout <<"\nKhong co duong noi tam nao cua hinh ";
        //         return 1;
        //     }
        //     cout <<"\nCac duong noi tam cua hinh " << index << " la: ";
        //     set<Edge*> temp_set = vec.at(index-1)->get_SetEdge();
        //     set<Edge*>::iterator it = temp_set.begin();
        //     for ( ; it != temp_set.end() ; ++it)
        //     {
                
        //         Edge* temp_Edge = *it;
        //         // temp_Edge = *it;
        //         cout << *temp_Edge;
        //     }
        //     return 0;
        // }
        bool print_AllEdgeFromSet()
        {
            if ( vec_Edge.empty() )
            {
                return 1;
            }
            cout <<"\n\n\n\n\n\t\t\t\t\t\t\t";
            cout <<"\n\t\t\t\tTat ca cac duong noi tam da nhap vao: ";
            // void (*ptr_VecEdge)(vector<Edge*> ) = get_VecEdge;
            // vector<Edge*> vec = this->get_VecEdge();
            for (int i = 0 ; i< vec_Edge.size() ; ++i )
            {
                cout << *vec_Edge[i];
            }
            
            // set<Edge*> ptr = vec.at(0)->get_SetEdge();
            // for (set<Edge*>::iterator it = ptr.begin(); it!= ptr.end(); ++it)
            // {
            //     Edge *temp_Edge = *it;
            //     cout << *temp_Edge;
            // }
            return 0;
        }
};
connecting_shape *connecting_shape::instance = 0;
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
        std::istream& put_i(std::istream& is) 
        {
            cout <<"\nNhap thong so cua hinh tron: ";
            shape::put_i(is);
            cout << "\nNhap vao ban kinh cua hinh tron: "; is >> this->radius;
            return is;
        }
        std::ostream& get_i(std::ostream& os) const
        {
            os << "\n########################---Hinh tron---####################### ";
            shape::get_i(os);
            os << "\nBan kinh cua hinh tron la: " << this->radius;
            os << "\n--------------------------------------------------------";
            return os;
        }
        bool operator== (const circle& c) 
        {
            return ((*this == c) && (this->radius == c.radius));
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
        std::istream& put_i(std::istream& is) 
        {
            cout <<"\nNhap thong so cua hinh chu nhat: ";
            shape::put_i(is);
            cout << "\nNhap vao chieu dai cua hinh chu nhat: "; is >> this->length_size;
            cout << "\nNhap vao chieu rong cua hinh chu nhat: "; is >> this->width_size;
            return is;
        }
        std::ostream& get_i(std::ostream& os) const
        {
            os << "\n########################---Hinh chu nhat---####################### ";
            shape::get_i(os);
            os << "\nChieu dai cua hinh chu nhat la: " << this->length_size;
            os << "\nChieu rong cua hinh chu nhat la: " << this->width_size;
            os << "\n--------------------------------------------------------";
            return os;
        }
        bool operator== (const rectangle& r) 
        {
            return ((*this == r) && (this->width_size == r.width_size && (this->length_size == r.length_size)));
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
        std::istream& put_i(std::istream& is) 
        {
            cout <<"\nNhap thong so cua hinh vuong: ";
            shape::put_i(is);
            cout << "\nNhap vao canh cua hinh vuong: "; is >> this->edge;
            return is;
        }
        std::ostream& get_i(std::ostream& os) const
        {
            os << "\n########################---Hinh vuong---####################### ";
            shape::get_i(os);
            os << "\nCanh cua hinh vuong la: " << this->edge;
            os << "\n--------------------------------------------------------";
            return os;
        }
        bool operator== (const square& s) 
        {
            return ((*this == s) && (this->edge == s.edge));
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
        std::istream& put_i(std::istream& is) 
        {
            cout <<"\nNhap thong so cua duong thang: ";
            shape::put_i(is);
            cout << "\nNhap toa do vector cua duong thang: \n";
            cout << "\nx = "; is >> dp.x;
            cout << "\ny = "; is >> dp.y;
            return is;
        }
        std::ostream& get_i(std::ostream& os) const
        {
            os << "\n########################---Duong thang---####################### ";
            shape::get_i(os);
            os << "\ntoa do vector cua duong thang la: " <<" x= "<<dp.x<<" y= "<<dp.y;
            os << "\n--------------------------------------------------------";
            return os;
        }
        bool operator== (const straight_line& sl) 
        {
            return ((*this == sl) && (this->dp == sl.dp));
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
        std::istream& put_i(std::istream& is) 
        {
            cout <<"\nNhap thong so cua hinh oval: ";
            shape::put_i(is);
            cout << "\nNhap goc dau: ";is>>goc_dau;
            cout << "\nNhap goc cuoi: ";is>>goc_cuoi;
            cout << "\nNhap do dai ban truc ngang: ";is>>xr;
            cout << "\nNhap do dai ban truc dung: ";is>>yr;
            return is;
        }
        std::ostream& get_i(std::ostream& os) const
        {
            os << "\n########################---Hinh oval---####################### ";
            shape::get_i(os);
            os << "\nGoc dau: " << goc_dau;
            os << "\nGoc cuoi: " << goc_cuoi;
            os << "\nDo dai ban truc ngang: "<< xr;
            os << "\nDo dai ban truc dung: "<< yr;
            os << "\n--------------------------------------------------------";
            return os;
        }
        bool operator== (const oval& o) 
        {
            return ((*this == o) && (this->goc_cuoi == o.goc_cuoi)&&(goc_dau==o.goc_dau)&&(xr==o.xr)&&(yr==o.yr));
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
        triangle(float x1=0.0, float y1=0.0,int c1 =0,int t1 = 1,float x2=0.0, float y2=0.0,float x3=0.0, float y3=0.0, float x4=0.0, float y4 =0.0):shape(x1,y1,c1,t1)
        {
            A.x = x2;
            A.y = y2;
            B.x = x3;
            B.y = y3;
            C.x = x4;
            C.y = y4;
        }
        std::istream& put_i(std::istream& is) 
        {
            cout <<"\nNhap thong so cua hinh tam giac: ";
            shape::put_i_triangle(is);
            cout << "\nNhap toa do Diem A cua tam giac: " ;
            cout << "\nx= "; is >> A.x;
            cout << "\ny= "; is >> A.y;
            cout << "\nNhap toa do Diem B cua tam giac: " ;
            cout << "\nx= "; is >> B.x;
            cout << "\ny= "; is >> B.y;
            cout << "\nNhap toa do Diem C cua tam giac: " ;
            cout << "\nx= "; is >> C.x;     
            cout << "\ny= "; is >> C.y;
            O.x=(A.x+B.x+C.x)/3;
            O.y=(A.y+B.y+C.y)/3;
            return is;
        }
        std::ostream& get_i(std::ostream& os) const
        {
            os << "\n########################---Tam giac---####################### ";
            os << "\nNhap toa do Diem A cua tam giac: " ;
            os << "\nx= " << A.x;
            os << "\ny= " << A.y;
            os << "\nNhap toa do Diem B cua tam giac: " ;
            os << "\nx= " << B.x;
            os << "\ny= " << B.y;
            os << "\nNhap toa do Diem C cua tam giac: " ;
            os << "\nx= " << C.x;
            os << "\ny= " << C.y;      
            shape::get_i(os);
            cout << "\n--------------------------------------------------------";
            return os;
        }
        bool operator== (const triangle& t) 
        {
            return ((*this == t) && (A == t.A)&&(B==t.B)&&(C==t.C));
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
        cout <<"\n---------------------------------------------------------------";
        cout <<"\nAn 7 de in ra man hinh theo thu tu: ";
        cout <<"\n---------------------------------------------------------------";
        cout <<"\nAn 8 de tim kiem hinh: ";
        cout <<"\n---------------------------------------------------------------";
        cout <<"\nAn 9 de them cac hinh muon noi tam: ";
        cout <<"\nAn 10 de in ra toan bo cac canh noi tam: ";
        cout <<"\nAn 11 de in ra canh noi tam cua cac phan tu : ";
        cout <<"\n***************************************************************";
}
bool compare_increase(shape * a, shape * b){
        return(a->area() < b->area());}
bool compare_decrease(shape * a, shape *b){
        return(a->area() > b->area());
}


int main()
{
    vector< shape* > shape_list;
    shape *x; 
    bool (*ptr_comparison[])(shape*,shape*) = {compare_increase,compare_decrease };
    // connecting_shape *dir ;
    int choose;
    do
    {
        menu();
        cout <<"\nBan chon so: "; cin >> choose;
        while (choose < 0 || choose > 11 )
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
                cin >> *x;
                shape_list.push_back(x);
                break;
            };
            case 2:
            {
                x = new oval;
                cout << "\n\n\t\t NHAP THONG TIN HINH OVAL(ELLIPSE)\n";
                cin >> *x;
                shape_list.push_back(x);
                break;
            };
            case 3:
            {
                x = new rectangle;
                cout << "\n\n\t\t NHAP THONG TIN HINH CHU NHAT\n";
                cin >> *x;
                shape_list.push_back(x);
                break;
            };
            case 4: 
            {
                x = new square;
                cout << "\n\n\t\t NHAP THONG TIN HINH VUONG\n";
                cin >> *x;
                shape_list.push_back(x);
                break;
            };
            case 5: 
            {
                x = new straight_line;
                cout << "\n\n\t\t NHAP THONG TIN DUONG THANG\n";
                cin >> *x;
                shape_list.push_back(x);
                break;
            };
            case 6: 
            {
                x = new triangle;
                cout << "\n\n\t\t NHAP THONG TIN HINH TAM GIAC\n";
                cin >> *x;
                shape_list.push_back(x);
                break;
            };
            case 7: 
            {   
                int index;       
                cout << "\nBan muon sap xep theo thu tu nao: ";
                cout << "\nAn 0 tang dan: ";
                cout << "\nAn 1 giam dan: ";
                cout << "\nBan cho so: "; cin >> index;
                while (index > 1 || index < 0)
                {
                cout << "\nChon sai, chon lai: ";
                cin >> index;
                }
                cout << "\n\n\t\t ===== DANH SACH CAC HINH =====\n";
                if (index)
                    cout << "\nTheo thu tu dien tich giam dan: ";
                else
                    cout << "\nTheo thu tu dien tich tang dan: " ;
                sort(shape_list.begin(),shape_list.end(),*ptr_comparison[index]);
                int c = 0;
                for (vector<shape*> ::iterator it = shape_list.begin(); it != shape_list.end(); ++it,++c)
                {
                    cout << "\nHinh so " << c+1 << " la: " ;
                    shape* temp = *it;
                    cout <<*temp;
                    cout << "\nDien Tich "  << " la: " << temp->area() << "\n";
                }  
               break;
            };
            case 8:
            {
                cout << "\n\n\t\t ===== TIM KIEM HINH =====\n";
                cout<<" \n Nhap toa do O de tim hinh:";
                point temp;
                cout<<" \n Nhap hoanh do: ";
                cin>> temp.x;
                cout<<" \n Nhap tung do: ";
                cin>> temp.y;
                vector<shape * >::iterator it = shape_list.begin() ;
                bool check = 0;
                for (it ; it != shape_list.end() ; ++it)
                {   shape* TempShape = *it;
                    if(TempShape->compare_cpoint(temp))
                    {
                    cout << "\nThe Shape is found in the myShape" <<endl;
                    cout << *TempShape;
                    check = 1;
                    }
				}
                if ( check == 0 ) 
                    cout << "\nThe Shape is not found";
                break;
            };
            case 9:
            {
                connecting_shape *dir = dir->get_instance();
                if( dir->put_EachEdgeToSet(shape_list) )
                {
                    cout<< "\nNoi tam hai hinh khong thanh cong";
                }
                break;
            };
            case 10:
            {
                connecting_shape* dir = dir->get_instance();
                if ( dir->print_AllEdgeFromSet())
                {
                    cout << "\nIn hinh noi tam khong thanh cong";
                }  
                break;
            };
            case 11:
            {
                break;
            }
        }
    } while(choose != 0);
            //DEMO MAP
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
