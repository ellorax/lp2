#include <iostream>
#include <string>
using namespace std;


int ejer1(int a,int b)
{
	a = a + b;
	b = a - b;
	a = a - b;
	 cout << b << endl;
 	 cout << a;
}

bool pal (char *str)
{
	int i,j;
	i=j=0;
	while (str[j])j++;
	j--;
	while(i<j)
	{
		if(str[i++] != str[j--])
		{
			return 0;
		}
	}
	return 1;
}


int main()

{

	//ejer1(2,4);
	char *str= "asa";
	if (pal(str))
	{
		cout<<"es pal";
	}

	  return 0;

}

//ejercicio 3

void numenor(lista){
