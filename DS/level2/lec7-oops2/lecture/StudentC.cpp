
class StudentC
{
public:
    int age;
   // const int rollNo=101; //nhi kr skte as sbme hi ek hi value chli jani hai
    const int rollNo;

    int &x;
    StudentC(int r,int age):rollNo(r),age(age),x(this->age)
    {

      //  rollNo=r; //int nhi likh rhe to usme already garbage hai
    }
};
