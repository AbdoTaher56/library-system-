#include<iostream>
#include<string>
#include<fstream>
using namespace std;
void displaycategoryadd() {
	arrcat[0].caty = { "math" };
	arrcat[1].caty = { "chemistry" };
	arrcat[2].caty = { "geography" };
	arrcat[3].caty = { "biology" };
	arrcat[4].caty = { "physics" };
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << ") " << arrcat[i].caty << endl;
	}
}
void addbook() {

	cout << " Enter the category of the book you want to add it in " << endl;
	displaycategoryadd();
	cin >> num;
	cout << " Enter the book name " << endl;
	cin >> arr[num].arrbook[(line / 5) + 1].name;
	cout << " Enter the book ID " << endl;
	cin >> arr[num].arrbook[line / 5) + 1].id;
	cout << " Enter the book Eddition " << endl;
	cin >> arr[num].arrbook[line / 5) + 1].edition;
	cout << " Enter the book writer " << endl;
	cin >> arr[num].arrbook[line / 5) + 1].writer;
}