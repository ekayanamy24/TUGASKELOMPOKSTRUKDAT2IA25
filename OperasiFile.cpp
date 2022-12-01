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
void readFile(){ // void readfile disini untuk membaca file
	char nama[30], npm[30]; // ini berfungsi untuk setiap character nama atau npm memiliki nilai 30 dan NPM memiliki nilai 8
	int i = 1; // disini interger dari i sama dengan memiliki nilai 1
	string namaF, namaFile; //  disini terdapat data yang bernama F atau formatted string literals serta menginputkan nama dari file tersebut
	char charNama[20]; // disini char dari character nama memiliki nilai 20 atau dapat diinputkan 20 kata
	FILE *fileTemp; // ini berfungsi untuk membuat tipe data sementara
	
	printf("\nMasukan Nama File Untuk dibaca : "); // disni akan mengeluarkan output serta akan membuat baris baru dengan tulisan "Masukkan nama file untuk dibaca"
	fflush(stdin); // ini adalah area memori yang digunakan untuk penyimpanan sementara ketika data dipindahkan dari satu tempat ke tempat lainnya
	getline(cin, namaF); // fungsi getline sendiri adalah untuk membaca string atau garis dari aliran input dan cin sendiri untuk mengambil input dari keyboard serta memasukan nama
	namaFile = namaF +".txt"; // disini membentuk nama file yang akan keluar dioutput serta akan lari ke file yang bersifat text editor
	strcpy(charNama, namaFile.c_str()); // strcpy untuk menyalin source termasuk null dan lokasi yang ditentukan serta meng-copy dari sebuah variabel ke variabel lainnya dan juga termasuk dari nama character, namafile
	
	fileTemp = fopen(charNama, "r"); // disni file bersifat sementara yang dimana nantinya akan membuka file dari character nama serta menambkan kata "r" dijudul file tersebut
	printf("+=======================================================+ \n"); // ini untuk menampilkan output dengan membuat baris baru lagi
	printf("+ 	No	|      Nama		|        NPM	| \n"); // ini sama dengan line sebelumnya akan menampilkan output serta akan membuat garis baru lagi
	printf("+=======================================================+ \n"); // masih sama disini akan menampilkan output dengan membuat garis baru
	
	while((fgets(nama,30,fileTemp)&&(fgets(npm,30,fileTemp))!=NULL)){ // disini terdapat hal yang baru dimana while disini berfungsi untuk membuat statement berulang selama kondisi yang diberikan bersifat benar serta akan membaca string dari nama serta NPM yang sudah diinputkan sebelumnya
		printf("+	%d	|", i); // disini akan menampikan output dengan menambahkan nilai angka atau bilangan desimal serta intger dari i tadi
		printf("\t %s					|", nama); // akan menampilkan output serta akan membuat tabulasi atau Tab pada keyboard dan akan membuat tampilan string serta akan menginputkan nilai dari nama tadi
		printf("\t %s							|", npm ); // akan menampilkan output serta akan membuat tabulasi atau Tab pada keyboard dan akan membuat tampilan string serta akan menginputkan nilai dari NPM tadi   
		printf("\n"); // akan menampilkan output dengan menambahkan baris baru 
		printf("+=======================================================+ \n"); // menampilkan output seperti apa yang sudah diinputkan tadi dan akan membuat baris baru
		i++; // ini adalah pre-increment yang dimana fungsinya akan menambahkan nilai variable sesudah dari int i
	}
	fclose(fileTemp); // fclose disini berfungsi untuk membuat file yang sudah terbuka tadi kembali tertutup dan juga file tadi masih bersifat sementara
	
	
	printf("\n\nData berhasil dibaca"); // ini akan menampilkan output dan akan membuat double garis baru
}

void deleteFile(){ // void disini untuk mengembalikan fungsi serta akan menghapus atau mendelete file tadi
	int status; // disini akan membuat tipe data bertipekan interger status yang dimana int sendiri berfungsi untuk membulatkan angka ke bawah dan juga kebilangan terdekat
    char fileName[20]; // yang dimana tipe character dari nama file tadi bernilai dengan jumlah 20
	cout<<"Masukan Nama File: "; // hampir sama dengan printf disini cout berfungsi juga untuk menampilkan teks ke layar atau ke outputnya
    cin>>fileName; // sedangkan cin untuk mengambil input dari keyboard yang dimana tadi sudah memasukan nama file yang akan dibentuk tadi
    status = remove(fileName); // sedangkan status disini akan menghapus dari nama file tadi
    if(status==0) // disini terdapat input yang dimana dapat menentukan pilihan dari suatu kondisi itu sendiri yang dimana status tadi bernilai 0 maka
        cout<<"\nFile Berhasil Dihapus!"; // maka akan menampilkan output seperti ini dan membuat garis baru atau juga perbandingan 1
    else // else disini berfungsi sama seperti if tadi yang dimana akan menentukan pilihan dari suatu kondisi atau ini sama dengan perbandingan ke 2
        cout<<"\nError!";// maka akan keluar output dengan baris baru seperti ini
    cout<<endl; // yang dimana akan membuat baris baru dengan menutup line 
}
