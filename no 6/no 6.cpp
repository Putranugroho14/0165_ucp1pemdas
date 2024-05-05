#include <iostream>
using namespace std;

struct kota {
	string namakota;
	string status;

    
};

int main() {
	kota kta; 
	int sensor1, sensor2, sensor3, nRerata;
	string status;

	cout << " Nama Kota : ";
	cin >> kta.namakota;

	cout << "Masukan  Sensor 1 : ";
	cin >> sensor1;

	cout << "Masukan Sensor 2 : ";
	cin >> sensor2;

	cout << "Masukan Sensor 3 : ";
	cin >> sensor3;

	nRerata = (sensor1 + sensor2 + sensor3) / 3;

	if (nRerata < 75 || sensor1 < 45 || sensor2 < 45 || sensor3 < 45)  {
		status = "Tidak Sehat";
	}
	
	else {
		status = " Sehat ";
	}
	cout << "Nilai Sensor : " << nRerata << endl;
	cout << "Statusnya adalah " << status << endl;

	
	cout << endl;
	cout << "\n Nama Kota : " << kta.namakota;


return 0;

}


