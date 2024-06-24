//menggunakan library iostream
#include <iostream> 
using namespace std; 

int main() 
{ 

//deklarassi nilai awal 
	int count = 0; 
	
	// deklarasi array
	int array1[3][4]; 

//perulangan untuk memasukkan nilai array 
	for (int i = 0; i < 3; i++) { 
		for (int j = 0; j < 4; j++) { 
			array1[i][j] = count; 
			count++; 
		} 
	} 

//menampilkan nilai array 
	for (int i = 0; i < 3; i++) { 
		for (int j = 0; j < 4; j++) { 
			cout << array1[i][j] << " "; 
		} 
		cout << endl; 
	} 

	return 0; 
}
