#include <stdio.h> // ini adalah library dalam bahasa c yang dimana untuk input serta ouptut dan tanpa inipun maka program ini sendiri tidak dapat dibuat
#include <iostream> // ini merupakan singkatan danri input/output stream yang dimana ini digunakan untuk menginput data atau menampilkan data dalam bentuk huruf, angka, simbol dan sebagainya
#include <cstring> // ini merupakan header yang berisi fungsi-fungsi, makro dan tipe yang digunakan untuk pengoprasiaan string dan array
using namespace std; // ini berarti menggunakan semua yang ada didalam namespace yang dimana termasuk dari cin, cout, endl, vector, string, pair, map, queue, deque dan sebagainya

void createFile(){ // ini digunakan untuk membuka file dalam file
	char nama[30], npm[8]; // ini berfungsi untuk setiap character nama atau npm memiliki nilai 30 dan NPM memiliki nilai 8
	string namaF, namaFile; // disini terdapat data yang bernama F atau formatted string literals serta menginputkan nama dari file tersebut
	char charNama[20]; // disini kita dapat membuat character nama dengan data inputan sebanyak 20 kata
	FILE *fileTemp; // ini berfungsi untuk membuat tipe data sementara

	printf("\nMasukan Nama File Untuk dibuat : "); // disni terdapat perintah yang dimana untuk menampilkan output ke layar serta \n digunakan sebagai simbol dimana nantinya akan membuat garis baru 
	fflush(stdin); // ini adalah area memori yang digunakan untuk penyimpanan sementara ketika data dipindahkan dari satu tempat ke tempat lainnya
	getline(cin, namaF); // fungsi getline sendiri adalah untuk membaca string atau garis dari aliran input dan cin sendiri untuk mengambil input dari keyboard serta memasukan nama
	namaFile = namaF +".txt"; // disini membentuk nama file yang akan keluar dioutput serta akan lari ke file yang bersifat text editor
	strcpy(charNama, namaFile.c_str()); // strcpy untuk menyalin source termasuk null dan lokasi yang ditentukan serta meng-copy dari sebuah variabel ke variabel lainnya dan juga termasuk dari nama character, namafile

	fileTemp = fopen(charNama, "w"); // disini file sementara sama dengan file yang akan membuka file lain dengan character nama tersebut serta menambahkan "w"


	for (int i=0; i<3; i++){ // // disini terdapat perulangan yang dapat dikontrol dengan nilai awal 
		printf("\nMasukan Data Ke-%d: ", i+1); // disini terdapat prinft yang dimana nantinya akan keluar didalam layar serta terdapat %d yang dimana untuk menampilkan nilai angka atau bilangan desimal serta \n adalah simbol untuk membuat garis baru 
		printf("\nMasukan Nama	: "); // disini sama untuk menampilkan output serta membuat baris baru namun disini user akan menginputkan namanya
		fflush(stdin); // ini adalah area memori yang digunakan untuk penyimpanan sementara ketika data dipindahkan dari satu tempat ke tempat lainnya
		gets(nama); // disini gets berfungsi untuk mengambil input dalan satu baris yang berupa nama yang sudah diinputkan tadi
		fprintf(fileTemp, "%s\n", nama); // fprintf disini berfungsi untuk mengembalikan jumlah byte yang sudah dituliskan serta menampilkan nilai string dan membuat baris baru dan juga menginputkan nama
		printf("Masukan NPM	: "); // printf untuk menampilkan output dengan tampilan npm
		fflush(stdin); // ini adalah area memori yang digunakan untuk penyimpanan sementara ketika data dipindahkan dari satu tempat ke tempat lainnya
		gets(npm); // disini gets berguna untuk mengambil inputan didalam satu baris yang berupa nilai dari NPM tadi
		fprintf(fileTemp, "%s\n", npm); // fprintf disini berfungsi untuk mengemabalikan byte serta menampilan nilai string dan membuat baris baru dan juga menginputkan NPM
	}
	fclose(fileTemp); // fclose disini berfungsi untuk membuat file yang sudah terbuka tadi kembali tertutup dan juga bersifat file sementara

	printf("\n\nData berhasil dimasukan"); // disini akan keluar output dengan garis baru yang akan mengeluarkan kata-kata tersebut serta akan membuat baris baru dengan double \n
}
