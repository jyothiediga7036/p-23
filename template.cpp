#include<iostream>
using namespace std;
// function template
/*template<typename T>
void fun(T x, T y)
{
	T r=x+y;
	cout<<"result : "<<r<<endl;
}
int main()
{
	fun(12, 56);
	fun('A','1');
}*/

// class template
/*template<typename T>
class person
{
	T *p;
	public:
	person()
	{
		p=new T[5];
	}
	void set()
	{
		for(int i=0;i<5;i++)
		{
			cin>>p[i];
		}
	}
	void get()
	{
		for(int i=0;i<5;i++)
		{
			cout<<p[i];
		}
		cout<<endl;
	}
};
int main()
{
	person<int>p;
	p.set();
	p.get();
	person<char>p1;
	p1.set();
	p1.get();
}*/

// template specialization
/*template<typename T>
void fun(T x ,T y)
{
	cout<<x<<" "<<y<<endl;
}
template<>
void fun<char>(char x, char y)
{
	cout<<"special function"<<endl;
	cout<<x<<" "<<y<<endl;
}
int main()
{
	fun(1,3);
	fun('A','1');
}*/

// variadic expresions

/*template<typename T>
void fun(T a)
{
	cout<<a<<" ";
}
template<typename T,typename...arg>
void fun(T x, arg...a)
{
	cout<<x<<" ";
	fun(a...);
}
int main()
{
	fun(1,'a', "ahti",23.56);
}*/

// fold expression
	
/*template<typename...arg>
auto  fun(arg...a)
{
	return (a+...);
}
int main()
{
	cout<<fun(10,23,55,66);
}			
*/
// template metaprogramming
template<int T>
constexpr int factorial()
{
	return T*factorial<T-1>();
}
template<>
constexpr int factorial<0>()
{
	return 1;
}
int main()
{
	constexpr int y=5;
	cout<<factorial<y>()<<endl;			
}	
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
