//NAMA : Putra Nugroho
//NIM : 20230140165


// 1. int,string, dan float 
// 2. prosedur adalah sebuah prosedur perintah yang untuk di jalankan jika fungsi adalah untuk menjalankan prosedur tersebut itu
// untuk prosedur itu menggunakan void contoh nya seperti 
//a. 
//void inputdata() {
//cout << " Masukan Nilai Panjang : ";
//cin >> panjang;
//cout << "Masukan Nilai Lebar : ";
//cin >> lebar;
//
//}
// jika untuk fungsi menggunakan int contohnya seperti
//b. int hitungluas() {
//	return panjang * lebar;
//}

// 3. looping ada tiga yaitu for,while,dan do while
// contoh untuk for 
//for (i = 0; i < n; i++)
//{
//	cout << "<" << (i + 1) << " > ";
//	cin >> arr[i];
//}
// contoh untuk while 
//while (true)
//{
//	cout << "Enter the number of elements in the array: ";
//	cin >> n;
//	if ((n > 0) && (n <= 20))
//		break;
//	else
//		cout << "InArray should have minimum 1 and maximum 20 elements. \n\n";
//
//}
// contoh untuk do while
//do
//{
//
//	//Accept the number to be searched
//	cout << "\nEnter the element you want to search: "; // step 1 
//	cin >> item;
//
//	ctr = 0;
//	i = 0; // step 2
//	while (i < n) // step 3
//	{
//		ctr++;
//		if (arr[i] == item)
//		{
//			cout << "\n" << item << " found at position " << (i + 1) << endl; // step 6
//			break;
//		}
//		i++; // step 4
//	}
//
//	if (i == n) // step 5
//		cout << "\n" << item << " not found in the array\n";
//	cout << "\nNumber of comparisons : " << ctr << endl;
//
//	cout << "InContinue search(y / n) : ";
//	cin >> ch;
//
//} while ((ch == 'y') || (ch == 'Y'));

// 4. conditional statement contoh penjelasan nya itu seperti jika mahasiswa yang mempunyai nilai mtk di atas 60 mka di anggap lulus jika tidak yakni di bawah 60 mka di anggap tidak lulus 
// contoh penggunaan nya seperti di bawah ini
//if (nRerata > 60) {
//	status = "Lulus jalur rata";
//}
//else if (nilaiMatematika > 70) {
//	status = "Lulus jalur mtk ";
//}
//else {
//	status = "Tidak Lulus";
//}
//cout << "Nilai Rerata : " << nRerata << endl;
//cout << "Statusnya adalah " << status << endl;
//
//// 5.struct itu kegunaan nya adalah untuk menyimpan data contoh nya seperti menimpan data mahasiswa yaitu nama,nim,dan nilai.
////contoh nya seperti dibawah ini
//struct Mahasiswa {
//	string nim;
//	string nama;
//	DetailAlamat alamat;
//	int umur;
//};
// untuk no 6 di sebelah