#include "Personnage.h"


int main() {
	Personnage p1;
	Personnage p2;
	p1.setNom("Jean");
	p1.setAttack(50);
	p1.setDefense(20);
	p1.setPercentCrit(0.2);
	cout << "	personnage 1  "<<endl;
	p1.showInfos();
	cout << endl;
	cout << "	personnage 2  " << endl;
	p2.showInfos();
	return 0;
}