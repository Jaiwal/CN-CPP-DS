float f = 10.5;
float p = 2.5;
float* ptr = &f;
(*ptr)++;
*ptr = p;
cout << *ptr << � � << f << � � << p;



2.5 2.5 2.5