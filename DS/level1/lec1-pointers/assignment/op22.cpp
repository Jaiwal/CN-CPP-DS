
Figure out the correct output of the following code.
void changeSign(int *p){
  *p = (*p)  *  -1;
}

int main(){
  int a = 10;
  changeSign(&a);
  cout << a << endl;
}




-10
