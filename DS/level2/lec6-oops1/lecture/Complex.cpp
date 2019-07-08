

class Complex
{
private:
    int real;
    int imag;


public:


    Complex(int real,int imag)
    {

       this-> real=real;
        this-> imag=imag;
    }

    void print()
    {


                cout<<real<<" "<<"+"<<" "<<"i"<<imag<<endl;
    }





    void plus(Complex const &C2)
    {
        real=real+C2.real;
        imag=imag+C2.imag;



    }


    void multiply(Complex const &C2)
    {  int realtemp=this->real;
            int imagtemp=this->imag;

           real=real*C2.real-imag*C2.imag;
           imag=real*C2.imag+imag*C2.real;
    }



};
