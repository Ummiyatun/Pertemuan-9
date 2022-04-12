#include <iostream>

using namespace std;

int main(){
	int n;
	int fibo_n;
	int fibo_n1;
	int fibo_n2;
	
	//rumus mencari bilangan fibonacci ke-n
	fibo_n = fibo_n1 + fibo_n2;
	
	//judul program
	cout <<"Program Bilangan Fibonacci\n";
	cout <<"Masukkan nilai ke-n : ";
	cin >> n;
	
	//memanggil nilai fibonacci
	for (int i = 1; i<n; i++){
        fibo_n=fibo_n1 + fibo_n2;
        fibo_n2=fibo_n1;
        fibo_n1=fibo_n;
        
        //pemanggilan fungsi
        cout<<fibo_n<<" ";
    }
	
	return 0;
	
}
