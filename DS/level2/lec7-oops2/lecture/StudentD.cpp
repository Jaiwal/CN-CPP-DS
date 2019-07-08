class StudentD
{
private:
    static int totalStudents;
public:
    int rollNo;
    int age;

  //  static int totalStudents;//total no of student present

  StudentD()
  {
     totalStudents++;
  }

  int getRollNo()
  {
      return rollNo;
  }

 static int getTotalstudents()
  {
      return totalStudents;
  }
};


int StudentD::totalStudents=0;//initialization of static data member
