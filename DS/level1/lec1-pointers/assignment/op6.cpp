int a = 7;
int b = 17;
int *c = &b;
a = *c;
*c = *c + 1;
cout  << a << "  " << b << endl;


17 18
