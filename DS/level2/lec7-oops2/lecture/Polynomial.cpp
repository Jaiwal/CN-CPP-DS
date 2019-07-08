class Polynomial
{
 int *degCoeff;
 int capacity;

 public:
     //def const
     Polynomial()
     {
         degCoeff=new int[5];
         capacity=5;
         for(int i=0;i<capacity;i++)
            degCoeff[i]=0;
     }


     //copy const

     Polynomial(Polynomial const & p)
     {
          this->degCoeff=new int[p.capacity];
   for(int i=0;i<p.capacity;i++){
     this->degCoeff[i]=p.degCoeff[i];
   }

        this->capacity=p.capacity;

     }

     //copy assigment
 Polynomial operator=(Polynomial const & p)
     {
          this->degCoeff=new int[p.capacity];
   for(int i=0;i<p.capacity;i++){
     this->degCoeff[i]=p.degCoeff[i];
   }

        this->capacity=p.capacity;

     }

     //print

     void print() const
    {
        for(int i=0;i<capacity;i++)
            if(degCoeff[i]==0)
            continue;
        else
            cout<<degCoeff[i]<<"x"<<" ";


    }


     //setcoeff

         void setCoefficeint(int deg,int coeff)
    {
        if(d<capacity)
            degCoeff[deg]=coeff;
        else if(d>capacity){
            int *newDegcoeff=new int[2*capacity];

             for(int i=0;i<2*capacity;i++)
            {
                 newdegCoeff[i]=0;
            }
             for(int i=0;i<capacity;i++)
            {
                 newdegCoeff[i]=degCoeff[i];
            }
             capacity*=2;
          newDegcoeff=degCoeff;
           newDegcoeff[deg]=coeff;

        }
        else
            return ;
    }


     //+
 Polynomial operator+(Polynomial const &p) const
    {
        int lcm=denominator*f2.denominator;
        int x=lcm/denominator;
        int y=lcm/f2.denominator;

        int num=x*numerator+(y*f2.numerator);



       Fraction fnew(num,lcm);
       fnew.simplify(); //this k upr chala hai
        return fnew;
    }



     //-



     //*

};
