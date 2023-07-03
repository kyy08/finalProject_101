#include <iostream>
using namespace std;

class MataKuliah {
private:
	float presensi;
	float activity;
	float exercise;
	float tugasAkhir;
public:
	MataKuliah() {
		presensi = 0;
		activity = 0;
		exercise = 0;
		tugasAkhir = 0;
	}

	virtual float hitungNilaiAkhir() { return 0; }
	virtual void cekKelulusan() { return; }
	virtual void input() { return; }
	void setPresensi(float nilai) {
		this->presensi = nilai;
	}
	float getPresensi() {
		return presensi;
	}
	//isi disini
	void setActivity(float nilai) {
		this->activity = nilai;
	}
	float getActivity() {
		return activity;
	}
	void setExercise(float nilai) {
		this->exercise = nilai;
	}
	float getExercise() {
		return exercise;
	}
	void setTugasAkhir(float nilai) {
		this->tugasAkhir = nilai;
	}
	float getTugasakhir(float nilai) {
		return tugasAkhir;
	}
};
class Pemrograman : public MataKuliah { //isi disini
	string p;
	string a;
	string e;
	string ua;
	void input() {
		int presensi;
		int activity;
		int exercise;
		int tugasakhir;
		cout << "Masukan nilai presensi: ";
		cin >> p;
		setPresensi(presensi);
		cout << "Masukan nilai Activity: ";
		cin >> a;
		setActivity(activity);
		cout << "Masukan nilai Exercise: ";
		cin >> e;
		setExercise(exercise);
		cout << "Masukan nilai UjianAkhir: ";
		cin >> ua;
		setTugasAkhir(tugasakhir);
	};
	void cekKelulusan() {

	}
	void cekinput() {
	
	};

	int main() { //isi disini
		cout << "Apakah anda ingin mengulang program ? Y / N ";
		return 0;
	}
};