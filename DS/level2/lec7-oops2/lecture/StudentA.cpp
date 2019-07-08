
class StudentA{


int age;
char *name;


public:


    StudentA(int age,char *name)
    {
        this->age=age;
        //shallow copy,sirf ref copy kiya
       // this->name=name;


       //deep copy,pura array copy kiya
       this->name=new char[strlen(name)+1];
       strcpy(this->name,name);


    }

    void display()
    {
        cout<<name<< " "<<age<<endl;

    }

};
