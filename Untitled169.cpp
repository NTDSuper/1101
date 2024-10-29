#include <bits/stdc++.h> 
using namespace std; 
class SinhVien { 
	private: 
		string ma = "B20DCCN001"; 
		string name, clas, date; 
		float gpa; 
	public: 
		friend istream& operator>>(istream& in, SinhVien& p); 
		friend ostream& operator<<(ostream& out, const SinhVien& p); 
		}; 
istream& operator >> (istream& in, SinhVien& p) { 
	getline(in, p.name); 
	in >> p.clas >> p.date >> p.gpa; 
	if (p.date[1] == '/') p.date = '0' + p.date; 
	if (p.date[4] == '/') p.date.insert(3, "0"); return in; 
	} 
	ostream& operator << (ostream& out, const SinhVien& p) { 
	out << p.ma << " " << p.name << " " << p.clas << " " << p.date << " "; out << fixed << setprecision(2) << p.gpa; 
	return out; } 
	int main() { 
	SinhVien a; 
	cin >> a; 
	cout << a; 
	return 0; }