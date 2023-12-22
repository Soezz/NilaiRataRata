#include<iostream>
//coding by m.zanuar f.
//mygit= https://github.com/Soezz?tab=repositories
using namespace std;
int main()
{
	//header
	cout << "##  Program C++ Cari Nilai Rata-rata  ##" << endl;
  cout << "=======================================" << endl;
  
  cout<< endl;
	//tentukan ruang array
	int n=10;
	//inisial array
	float nilai[n];
	
	//input nilai
	cout<<"Input 10 Nilai Mahasiswa(dipisah dengan enter): "  << endl;
    for (int i = 0; i < n; i++) {
        cin >> nilai[i];
    }
    //hitung nilai rata2
    float total=0;
    for (int i =0;i<n;i++){
    	total+=nilai[i];
    }
    float Ratarata=total/n;
    //tampilkan nilai hasil
    cout<<"Nilai Rata-Rata Mahasiswa: " <<Ratarata<<endl;
    return 0;
}
