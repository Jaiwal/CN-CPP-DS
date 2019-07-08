#include<string.h>
class StudentB{


int age;


public:
char *name;


    StudentB(int age,char *name)
    {
        this->age=age;
        //shallow copy,sirf ref copy kiya
       // this->name=name;


       //deep copy,pura array copy kiya
       this->name=new char[strlen(name)+1];
       strcpy(this->name,name);


    }

    StudentB(StudentB const &s)
    {
        this->age=s.age;
     //   this->name=s.name;  shallow copy

        //deep copy
        this->name=new char[strlen(s.name)+1];
        strcpy(this->name,s.name);

    }




    void display()
    {
        cout<<name<< " "<<age<<endl;

    }

};

