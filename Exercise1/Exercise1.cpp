#include <iostream>
#include <string>
using namespace std;

bool diterima(int mathscore, int enghscore) {
	float avgscore = (mathscore + enghscore) / 2.0;
	if (avgscore >= 70 || mathscore > 80) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	string candidates[20] = { "Dzar","Zaki","Almaas","Ryan","Arkan","Deni","Udin","Dono","Yogi","Asroni","Joko","Lia","Akame","Eren","Levi","Naruto","Lufy","Boruto","Alice","Huda" };
	int mathscore[20] = {90,80,40,75,80,95,100,20,80,10,90,60,70,40,79,69,89,99,70,100 };
	int enghscore[20] = { 90,70,50,99,100,70,65,80,90,10,55,75,80,89,90,35,70,78,98,10 };

	cout << "Nama\tstastus\n";
	int acceptedCount = 0;
	int rejectedCount = 0;
	for (int i = 0;i < 20;i++) {
		bool accepted = diterima(mathscore[i], enghscore[i]);
		if (accepted) {
			cout << candidates[i] << "\tDiterima\n";
			acceptedCount++;
		}else {
			cout << candidates[i] << "\tDitolak\n";
			rejectedCount++;
		}
	}
	cout << "Total kanditat diterima" << acceptedCount << endl;
	cout << "Total kandidat ditolak" << rejectedCount << endl;

	return 0;
}

