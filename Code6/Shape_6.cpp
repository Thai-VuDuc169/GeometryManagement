#include<iostream>
#include<vector>
// #include<conio.h>
#include<math.h>
#include<algorithm>
//#include<memory> // attempt unique_ptr
//#include<functional> // attempt reference_wrapper
//#include<map> 
#include<set>
#include<string>
#include<fstream>
#include<sstream>
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
            cout << "\nEnter the center coordinates of the shape: \n";
            cout << "x = "; is >> O.x;
            cout << "\ny = "; is >> O.y;
            cout << "\nEnter color: "; is >> color;
            cout << "\nEnter thickness: "; is >> thickness;
            return is;
        } 
        virtual std::ostream& get_i(std::ostream& os) const
        {
            os << "\nx_position and y_position: "<< " x= "<< O.x << " y= " << O.y ;
            os << "\nColor:  " << this->color;
            os << "\nThickness: " << this->thickness;
            return os;
        }
        virtual std::istream& put_i_triangle(std::istream& is)
        {
            cout << "\nColor: ";is >> color;
            cout << "\nThickness: ";is >> thickness;
            return is;
        }
      /*  virtual bool compare_shape(const shape& s)
        {
            return ( (this->O == s.O) && (this->color == s.color) && (this->thickness == s.thickness));
        }*/
    public:
        friend std::istream& operator>>(std::istream& is, shape& temp_shape)
        {
            return temp_shape.put_i(is);
        }
        friend std::ostream& operator<<(std::ostream& os, shape& temp_shape)
        {
            return temp_shape.get_i(os);
        }
        /*virtual bool operator== (const shape& s)
        {
            return (*this == s);
        }*/
   public:
        virtual std::ofstream& write_f(std::ofstream& out) const = 0 ;
        friend std::ofstream & operator <<(std::ofstream& out, shape& temp_shape)
            {
                return temp_shape.write_f(out);
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
        //////////////SET///////////// 
};
bool compare_increase(shape * a, shape * b){
        return(a->area() < b->area());}
bool compare_decrease(shape * a, shape *b){
        return(a->area() > b->area());}
class Edge 
{
    friend class shape;
    private:
        int E_color;  // 0->15
        int E_thickness; //1->3
        shape *shape_ref1;
        shape *shape_ref2;
        float E_distance;
        int IndexShape1 ,IndexShape2 ;
    public:
        // Edge()
        // {
        //     E_color = 0;
        //     E_thickness = 1;
        //     E_distance = 0.0;
        //     this->shape_ref1 = NULL ;
        //     this->shape_ref2 = NULL ;
        //     int ind1 ,ind2 ;
        // }
        Edge(int i1 ,shape *ref1  ,int i2  ,shape *ref2 , int c , int t, float d )
        {
            E_color = c;
            E_thickness = t;
            E_distance = d;
            this->shape_ref1 = ref1;
            this->shape_ref2 = ref2;
            IndexShape1 = i1; 
            IndexShape2 = i2;
        }
        Edge(int index1,shape* ref1, int index2, shape* ref2)
        { 
            this->shape_ref1 = ref1;
            this->shape_ref2 = ref2;
            this->IndexShape1 = index1;
            this->IndexShape2 = index2; 
            cout << "\nEdge's color: ";
            cin >> E_color;
            cout << "\nEdge's thickness: "; 
            cin >> E_thickness;
            float x1 = ref1->get_Ox();     // tai sao ko dung dc kieu float& ??
            float y1 = ref1->get_Oy();
            float x2 = ref2->get_Ox();
            float y2 = ref2->get_Oy();
            this->E_distance = sqrt( pow(x1-x2,2.0) + pow(y1-y2,2.0) );
        }
        friend ostream& operator<< (ostream &out, const Edge & temp)
        {
            out <<"\nShape 1: "; 
            out << *temp.shape_ref1 ;
            out <<"\nand Shape 2: ";
            out << *temp.shape_ref2 ;
            out <<"\nEdge's info: ";
            out <<"\nEdge'color (int): ";
            out << temp.E_color;
            out <<"\nEdge's thickness (int): ";
            out << temp.E_thickness;
            out <<"\nDistance (float): ";
            out << temp.E_distance;
            return out;
        }
        friend ofstream& operator<< (ofstream &out, const Edge &temp)
        {
            out << "edge{"<< temp.IndexShape1 << "," << temp.IndexShape2
                << "," << temp.E_color<<","<<temp.E_thickness<<","<<temp.E_distance<<"}\n";
            return out;
        }
        ~Edge()
        {
            delete this->shape_ref1 ;
            delete this->shape_ref2 ;
        };
};
               
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
            cout <<"\nEnter the parameters : ";
            shape::put_i(is);
            cout << "\nEnter the radius: "; is >> this->radius;
            return is;
        }
    public:
        std::ofstream& write_f(std::ofstream& out) const
        {
            out <<"shape{";
            out << "circle";
            out << ",";
            out << O.x;
            out << ",";
            out << O.y;
            out << ",";
            out << this->radius;
            out << ",";
            out << this->color;
            out << ",";
            out << this ->thickness;
            out << "}";
            out << "\n";
            return  out ;
        }
        std::ostream& get_i(std::ostream& os) const
        {
            os << "\n########################---Circle---####################### ";
            shape::get_i(os);
            os << "\nThe radius: " << this->radius;
            os << "\n--------------------------------------------------------";
            return os;
        }
        /*bool operator== (const circle& c) 
        {
            return ((*this == c) && (this->radius == c.radius));
        }*/

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
            cout <<"\nEnter the parameters : ";
            shape::put_i(is);
            cout << "\nEnter the length: "; is >> this->length_size;
            cout << "\nEnter the width: "; is >> this->width_size;
            return is;
        }
        std::ofstream& write_f(std::ofstream& out) const
        {
            out <<"shape{";
            out << "rectangle";
            out << ",";
            out << O.x;
            out << ",";
            out << O.y;
            out << ",";
            out << this->width_size;
            out << ",";
            out << this->length_size;
            out << ",";
            out <<this->color;
            out << ",";
            out << this ->thickness;
            out << "}";
            out << "\n";
            return  out ;
        }
        std::ostream& get_i(std::ostream& os) const
        {
            os << "\n########################---Rectangle---####################### ";
            shape::get_i(os);
            os << "\nThe Length: " << this->length_size;
            os << "\nThe width: " << this->width_size;
            os << "\n--------------------------------------------------------";
            return os;
        }
       /* bool operator== (const rectangle& r) 
        {
            return ((*this == r) && (this->width_size == r.width_size && (this->length_size == r.length_size)));
        }*/
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
            cout <<"\nEnter the parameters : ";
            shape::put_i(is);
            cout << "\nEnter the edge: "; is >> this->edge;
            return is;
        }
        std::ofstream& write_f(std::ofstream& out) const
        {
            out <<"shape{";
            out <<"square";
            out << ",";
            out << O.x;
            out << ",";
            out << O.y;
            out << ",";
            out << this->edge;
            out << ",";
            out << this->color;
            out << ",";
            out << this ->thickness;
            out << "}";
            out << "\n";
            return out ;
        }
        std::ostream& get_i(std::ostream& os) const
        {
            os << "\n########################---Square---####################### ";
            shape::get_i(os);
            os << "\nThe edge: " << this->edge;
            os << "\n--------------------------------------------------------";
            return os;
        }
        /*bool operator== (const square& s) 
        {
            return ((*this == s) && (this->edge == s.edge));
        }*/
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
            cout <<"\nEnter the parameters : ";
            shape::put_i(is);
            cout << "\nEnter the vector position: \n";
            cout << "\nx = "; is >> dp.x;
            cout << "\ny = "; is >> dp.y;
            return is;
        }
        std::ofstream& write_f(std::ofstream& out) const
        {
            out <<"shape{";
            out << "straight_line";
            out << ",";
            out << O.x;
            out << ",";
            out << O.y;
            out << ",";
            out << dp.x;
            out << ",";
            out << dp.y;
            out << ",";
            out <<this->color;
            out << ",";
            out << this ->thickness;
            out << "}";
            out << "\n";
            return out ;
        }
        std::ostream& get_i(std::ostream& os) const
        {
            os << "\n########################---Straight_line---####################### ";
            shape::get_i(os);
            os << "\nVector position: " <<" x= "<<dp.x<<" y= "<<dp.y;
            os << "\n--------------------------------------------------------";
            return os;
        }
       /* bool operator== (const straight_line& sl) 
        {
            return ((*this == sl) && (this->dp == sl.dp));
        }*/
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
            cout <<"\nEnter the parameters : ";
            shape::put_i(is);
            cout << "\nEnter the top corner: ";is>>goc_dau;
            cout << "\nEnter the bot corner: ";is>>goc_cuoi;
            cout << "\nEnter the length of the horizontal axis: ";is>>xr;
            cout << "\nEnter the length of the vertical axis: ";is>>yr;
            return is;
        }
        std::ofstream& write_f(std::ofstream& out) const
        {
            out <<"shape{";
            out <<"oval";
            out << ",";
            out << O.x;
            out << ",";
            out << O.y;
            out << ",";
            out << goc_dau;
            out << ",";
            out << goc_cuoi;
            out << ",";
            out << xr;
            out << ",";
            out << yr;
            out << ",";
            out << this->color;
            out << ",";
            out << this ->thickness;
            out << "}";
            out << "\n";
            return out ;
        }
         void wf_shape(ofstream & out){
            out << "shape"<<"{"<<"oval"<<","<<O.x <<"," << O.y << ","<<goc_dau<<","<<goc_cuoi<<","<<xr<<","<<yr<<","<<this->color<<","<<this->thickness<<"}\n";
        }
        std::ostream& get_i(std::ostream& os) const
        {
            os << "\n########################---Oval---####################### ";
            shape::get_i(os);
            os << "\nTop corner: " << goc_dau;
            os << "\nBot corner: " << goc_cuoi;
            os << "\nThe length of the horizontal axis: "<< xr;
            os << "\nThe length of the vertical axis: "<< yr;
            os << "\n--------------------------------------------------------";
            return os;
        }
        /*bool operator== (const oval& o) 
        {
            return ((*this == o) && (this->goc_cuoi == o.goc_cuoi)&&(goc_dau==o.goc_dau)&&(xr==o.xr)&&(yr==o.yr));
        }*/
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
            O.x=(A.x+B.x+C.x)/3;
            O.y=(A.y+B.y+C.y)/3;
        }
        std::istream& put_i(std::istream& is) 
        {
            cout <<"\nEnter the parameters: ";
            shape::put_i_triangle(is);
            cout << "\nEnter the coordinates of point A: " ;
            cout << "\nx= "; is >> A.x;
            cout << "\ny= "; is >> A.y;
            cout << "\nEnter the coordinates of point B: " ;
            cout << "\nx= "; is >> B.x;
            cout << "\ny= "; is >> B.y;
            cout << "\nEnter the coordinates of point C: " ;
            cout << "\nx= "; is >> C.x;     
            cout << "\ny= "; is >> C.y;
            O.x=(A.x+B.x+C.x)/3;
            O.y=(A.y+B.y+C.y)/3;
            return is;
        }
        std::ofstream& write_f(std::ofstream& out) const
        {
            out <<"shape{";
            out <<"triangle";
            out << ",";
            out << A.x;
            out << ",";
            out << A.y;
            out << ",";
            out << B.x;
            out << ",";
            out << B.y;
            out << ",";
            out << C.x;
            out << ",";
            out << C.y;
            out << ",";
            out << this->color;
            out << ",";
            out << this->thickness;
            out << "}";
            out << "\n";
            return out ;
        }
        std::ostream& get_i(std::ostream& os) const
        {
            os << "\n########################---Triangle---####################### ";
            os << "\nThe coordinates of point A: " ;
            os << "\nx= " << A.x;
            os << "\ny= " << A.y;
            os << "\nThe coordinates of point B: " ;
            os << "\nx= " << B.x;
            os << "\ny= " << B.y;
            os << "\nThe coordinates of point C: " ;
            os << "\nx= " << C.x;
            os << "\ny= " << C.y;      
            shape::get_i(os);
            cout << "\n--------------------------------------------------------";
            return os;
        }
       /* bool operator== (const triangle& t) 
        {
            return ((*this == t) && (A == t.A)&&(B==t.B)&&(C==t.C));
        }*/
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

/////////////////////////////////Factory & Graph////////////////////////////////////////////////
class ShapeFactory
{
    private:
        enum ShapeType { ST_Circle, ST_Oval, ST_Rectangle, ST_Square, ST_Straight_line, ST_Triangle , Exit};
    public:
        static shape* CreateShape(int & x)
        {
            ShapeType Type;
            if (x == 1) Type =  ST_Circle; 
            if (x == 2) Type =  ST_Rectangle;
            if (x == 3) Type =  ST_Square;
            if (x == 4) Type =  ST_Straight_line;
            if (x == 5) Type =  ST_Oval;
            if (x == 6) Type =  ST_Triangle;
            if (x == 7) Type =  Exit;
            switch (Type)
            {
                case ST_Circle:
                {
                    return  new circle;
                    break;
                }
                case ST_Rectangle:
                {
                    
                    return new rectangle;
                    break;
                }
                case ST_Square:
                {
                    return  new circle;
                    break;
                }
                case ST_Straight_line:
                {
                    
                    return new straight_line;
                    break;
                }
                case ST_Oval:
                {
                 
                    return  new oval;
                    break;
                }
                case ST_Triangle:
                {
                    return  new triangle;
                    break;
                }
                case Exit : break; 
                
            }
        }
};
void menu(){
        cout << "\n--------------Options You can select-------------\n";
        cout << "1.Add shapes\n";
        cout << "2.Add edges\n";
        cout << "3.Sort shapes base on increasing area\n";
        cout << "4.Sort shapes base on decreasing area\n";
        cout << "5.Find a shape base on center point\n";
        cout << "6.Print all the shapes and all the edges ingraph\n";
        cout << "7.Delete all the shapes and all the edges in graph\n";
        cout << "8.Update new state\n";
        }
class Graph;
class Graph_State{
   public :
    virtual Graph_State* on_state(Graph &g)=0;

};   
class hollow :public Graph_State{
public:
     virtual Graph_State* on_state(Graph &g) override;
};
class only_shape: public Graph_State{
public:
    virtual Graph_State* on_state(Graph &g) override;
};
class shape_edge:public Graph_State{
public:
    virtual Graph_State* on_state(Graph &g) override;
};    
class Graph
{
    private:
        vector<shape*> Vec_ShapeGraph;
        vector<Edge*> Vec_EdgeGraph;
    
    public:
      friend class hollow;
	  friend class only_shape;
	  friend class shape_edge;
        Graph() {} ;
        ~Graph()
        {
            for( int i = 0 ; Vec_EdgeGraph.size() ; i++)
            { delete Vec_EdgeGraph[i]; }
            for ( int j =0 ; Vec_ShapeGraph.size() ; j++)
            { delete Vec_ShapeGraph[j]; }
        }
        void Add_Shape(){
          shape* s;
          int x ;
          cout << "\n-------------Shapes can creat-------------\n";
          cout << "\n1.Circle\n2.Rectangle\n3.Square\n4.Straight_line\n5.Oval\n6.Triangle\n";
          cout << "\nPlease creat\n";
          cin >> x;
          s = ShapeFactory :: CreateShape(x);
          cin >> *s ;
          Vec_ShapeGraph.push_back(s);
        }

        void Add_Edge()
        {
          Edge* temp_Edge;
          int s1,s2;
          int length = Vec_ShapeGraph.size();

          cout <<"\n------------------Edge---------------\n";
          if (length >=2){
            cout << "\nEnter First Shape 1(int): "; cin >> s1;
            cout << "\nEnter Second Shape 2(int): "; cin >> s2;
            if((s1 >= 1) && (s1 <= length) && (s2 >= 1) && (s2 <= length))
             { cout << "\n The first shape : ";
              cout << *(Vec_ShapeGraph.at(s1-1));
              cout << "\n And the second shape: ";
              cout << *(Vec_ShapeGraph.at(s2-1));
              int c,t;
              Edge* temp_Edge = new Edge(s1,Vec_ShapeGraph[s1-1],s2,Vec_ShapeGraph[s2-1]);
              Vec_ShapeGraph[s1-1]->put_SetEdge(temp_Edge);
              Vec_ShapeGraph[s2-1]->put_SetEdge(temp_Edge);
              Vec_EdgeGraph.push_back(temp_Edge);
             }
            }
            else
              cout << "\nCreat a edge unsuccessfully";
           }
        void Show_all(){
               cout << "\n---Print all the shapes and all the edges ingraph---\n";
                if ((Vec_ShapeGraph).empty())
			    cout << "\n---------Vec_shape is empty!------------\n";
                else{
                 for (vector<shape*> ::iterator it = Vec_ShapeGraph.begin(); it != Vec_ShapeGraph.end(); ++it)
                  { shape * temp = *it;
                    cout << *temp;  }
                }
                if ((Vec_EdgeGraph).empty())
				cout << "\n---------Vec_edge is empty!--------------\n";
                else{
                 for (vector<Edge*> ::iterator it = Vec_EdgeGraph.begin(); it != Vec_EdgeGraph.end(); ++it)
                   {Edge * temp = *it;
                    cout << *temp;}
                  }
        }

        void Find_shape(){
            cout << "\n--------------Find a shape----------\n";
                cout<<" \nEnter center point :";
                point temp;
                cout<<" \n Point.x: ";
                cin>> temp.x;
                cout<<" \n Point.y: ";
                cin>> temp.y;
                vector<shape * >::iterator it = Vec_ShapeGraph.begin() ;
                bool check = 0;
                for (it ; it != Vec_ShapeGraph.end() ; ++it)
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
        }

        void Sort_incre()
        {
                cout << "\n------------Sort base on increasing area\n";
                sort(Vec_ShapeGraph.begin(),Vec_ShapeGraph.end(),compare_increase);
        }
        void Sort_decre()
        {
                cout << "\n------------Sort base on decreasing area\n";
                sort(Vec_ShapeGraph.begin(),Vec_ShapeGraph.end(),compare_decrease); 
        }
        void Delete_Vec()
        {       cout << " \n---Delete all the shapes and all the edges in graph---\n";
                Vec_EdgeGraph.clear();
		        Vec_ShapeGraph.clear();
		        cout << "Succesfully erase data\n";
        }
        

    void set_graph(){
        int select;
        do
        {
        menu();
        cout <<"\nPlease select: "; cin >> select;
        while (select < 1 || select > 9 )
        {
            cout <<"\n You select incorrectly. Please reselect:\n ";
            cin >> select;
        }
        switch (select){
            case 1 :
            { 
                Add_Shape();
                break; 
            }
            case 2 :
            {
                Add_Edge();
                break;
            }
            case 3 :
            {  Sort_incre();
                break;
            }
            case 4 :
            {  Sort_decre();
                break;
            }
            case 5 :
            {  Find_shape();
                break;
            }
            case 6 :
            {   Show_all();
                break;
            }
            case 7 : 
            {
                Delete_Vec();
                break;
            }
            case 8 : break;
          }
        }while(select != 8);
    }

    void cur_state(){
		current_state = current_state->on_state(*this);
	}
	static vector <Graph_State*> states ;
    
    private :
	 Graph_State* current_state=states[0];
        
};


std :: vector<Graph_State*> Graph:: states={new hollow,new only_shape,new shape_edge};
Graph_State* hollow::on_state(Graph &g){
	cout<<"-------------STATE HOLLOW------------";
    g.set_graph();
	if ((g.Vec_ShapeGraph).size()==0 &&((g.Vec_EdgeGraph).size()==0)){
		return g.states[0];
	}
	else if ((g.Vec_ShapeGraph).size()>=1 &&((g.Vec_EdgeGraph).size()==0)){
		return g.states[1];
	}
	else{
		return g.states[2];
	}
 }
 Graph_State* only_shape::on_state(Graph &g){
	cout<<"-------------STATE Have Only Shape------------";
    g.set_graph();
	if ((g.Vec_ShapeGraph).size()==0 &&((g.Vec_EdgeGraph).size()==0)){
		return g.states[0];
	}
	else if ((g.Vec_ShapeGraph).size()>=1 &&((g.Vec_EdgeGraph).size()==0)){
		return g.states[1];
	}
	else{
		return g.states[2];
	}
 }
 Graph_State* shape_edge::on_state(Graph &g){
	cout<<"-------------STATE Have both Shape and Edge------------";
    g.set_graph();
	if ((g.Vec_ShapeGraph).size()==0 &&((g.Vec_EdgeGraph).size()==0)){
		return g.states[0];
	}
	else if ((g.Vec_ShapeGraph).size()>=1 &&((g.Vec_EdgeGraph).size()==0)){
		return g.states[1];
	}
	else{
		return g.states[2];
	}
 }
 
int main()
{ 
  Graph* g = new Graph;
  while(1) { g->cur_state();}
  delete g ;
 return 0;
}