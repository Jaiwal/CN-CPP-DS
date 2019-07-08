
class Fraction
{
private:
    int numerator;
    int denominator;


public:
    //to restrict having garbage value in the created object we make our own constructor
    //paramaterised const

    Fraction(int numerator,int denominator)
    {

       this-> numerator=numerator;
        this-> denominator=denominator;
    }

    void print()
    {

       // cout<< this-> numerator<<"/"<<  this-> denominator;
        //but since jis object se call krte ,function k pass uska add this me hta to this na bhi likhe to mylb vhi hai jo call hua uska Nr and Dr


                cout<<  numerator<<"/"<<this-> denominator<<endl;
    }
    void simplify()
    {
        int gcd=1;
        int j=min(this->numerator,this->denominator);
        for(int i=1;i<=j;i++)
        {
            if(this->numerator%i==0&&this->denominator%i==0){
                gcd=i;}

        }
        this->denominator=this->denominator/gcd;
        this->numerator=this->numerator/gcd;
    }





    void add(Fraction const &f2)
    {
        int lcm=denominator*f2.denominator;
        int x=lcm/denominator;
        int y=lcm/f2.denominator;

        int num=x*numerator+(y*f2.numerator);

        numerator=num;
        denominator=lcm;

        simplify(); //this k upr chala hai

    }


    void multiply(Fraction const &f2)
    {
        numerator=numerator*f2.numerator;
        denominator=denominator*f2.denominator;

        simplify();
    }



};
