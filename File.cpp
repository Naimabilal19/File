#include <iostream>
#include<fstream> 
#include <string>
using namespace std;

void SearchNameCompany()
{
	ifstream in; //�������� ��������� ������
	in.open("Directory.txt");  //�������� � ��������� ������
	cout << "Information about company:";
	const int size = 100;
	char Buff[size] = { };
	do
	{
		in.getline(Buff, size);//getline �������� ������� ������ � ��������� �������
		//�� ������� 
		const char search[] = "Company name:";
		if (strstr(Buff, search))
		{
			cout << Buff << endl;
		}

	} while (in); //���� �� �������� ����� �����, ���� ����� �������� 

	in.close();  //�������� ���������� �����
}
void SearchHolder()
{
	ifstream in; //�������� ��������� ������
	in.open("Directory.txt"); //�������� � ��������� ������
	cout << "Info holder: ";
	const int size = 100;
	char Buff[size] = { };
	do
	{
		in.getline(Buff, size);
		const char search[] = "Holder:";
		if (strstr(Buff, search))
		{
			cout << Buff << endl;
		}
	} while (in);//���� �� �������� ����� �����, ���� ����� �������� 

	in.close(); //�������� ���������� �����
}
void SearchNum()
{
	ifstream in;
	in.open("Directory.txt");
	cout << "Info number: ";
	const int size = 100;
	char Buff[size] = { };
	do
	{
		in.getline(Buff, size);
		const char search[] = "Number:";
		if (strstr(Buff, search))
		{
			cout << Buff << endl;
		}


	} while (in);
	in.close();
}
void SearchAddress()
{
	ifstream in;
	in.open("Directory.txt");
	const int size = 100;
	char Buff[size] = { };
	cout << "Info address: ";
	do
	{
		in.getline(Buff, size);
		const char search[] = "Address: ";
		if (strstr(Buff, search))
		{
			cout << Buff << endl;
		}


	} while (in);
	in.close();
}
void Search_Job()
{
	ifstream in;
	in.open("Directory.txt");
	const int size = 100;
	char Buff[size] = { };
	cout << "Info work: ";
	do
	{
		in.getline(Buff, size);
		const char search[] = "Work: ";
		if (strstr(Buff, search))
		{
			cout << Buff << endl;
		}
	} while (in);
	in.close();
}
void PrintFile()
{
	ifstream in;
	in.open("Directory.txt");
	const int size = 500;
	char Buff[size] = { };
	do
	{
		in.getline(Buff, size);
		cout << Buff << endl;
	} while (in);


}

class Directory
{
	string company_name;
	string holder;
	string number;
	string adress;
	string work;
public:
	Directory() = default;
	Directory(string cn, string h, string n, string a, string w)
	{
		company_name = cn;
		holder = h;
		number = n;
		adress = a;
		work = w;
	}
	void Print()
	{
		cout << "Company name: ";
		cin >> company_name;
		cout << "\nHolder: ";
		cin >> holder;
		cout << "\nNumber: ";
		cin >> number;
		cout << "\nAddress: ";
		cin >> adress;
		cout << "\nWork: ";
		cin >> work;
	}
	/*void Input()
	{
		cin >> company_name >> holder >> number >> adress >> work;
	}*/
	void Save()
	{
		ofstream out; //�������� ��������� ������� ������
		out.open("Directory.txt", ios::app); //�������� ��������� ������ � ��������� ������
		//app-�������� ���������� �����
		out << "Company name: " << company_name <<  //���������� ������ � ����
			"\nHolder: " << holder << "\nNumber: " << number <<
			"\nAddress: " << adress << "\nWork: " << work << endl;
		out.close(); //�������� ��������� ������
	}
};


int main()

{
	Directory obj1("Apple", "Naima Bilal", "+380 93 454 98 59", "California", "Developer");

}