#include "MnistReader.h"

double MnistReader(int & DesiredNumber) {
	if (DesiredNumber == 0) {
		unsigned char temp = 0;
		picture0.read((char*)&temp, sizeof(temp));

		return (double)temp / 256.;
	}
	else if (DesiredNumber == 1) {
		unsigned char temp = 0;
		picture1.read((char*)&temp, sizeof(temp));

		return (double)temp / 256.;
	}
	else if (DesiredNumber == 2) {
		unsigned char temp = 0;
		picture2.read((char*)&temp, sizeof(temp));

		return (double)temp / 256.;
	}
	else if (DesiredNumber == 3) {
		unsigned char temp = 0;
		picture3.read((char*)&temp, sizeof(temp));

		return (double)temp / 256.;
	}
	else if (DesiredNumber == 4) {
		unsigned char temp = 0;
		picture4.read((char*)&temp, sizeof(temp));

		return (double)temp / 256.;
	}
	else if (DesiredNumber == 5) {
		unsigned char temp = 0;
		picture5.read((char*)&temp, sizeof(temp));

		return (double)temp / 256.;
	}
	else if (DesiredNumber == 6) {
		unsigned char temp = 0;
		picture6.read((char*)&temp, sizeof(temp));

		return (double)temp / 256.;
	}
	else if (DesiredNumber == 7) {
		unsigned char temp = 0;
		picture7.read((char*)&temp, sizeof(temp));

		return (double)temp / 256.;
	}
	else if (DesiredNumber == 8) {
		unsigned char temp = 0;
		picture8.read((char*)&temp, sizeof(temp));

		return (double)temp / 256.;
	}
	else if (DesiredNumber == 9) {
		unsigned char temp = 0;
		picture9.read((char*)&temp, sizeof(temp));

		return (double)temp / 256.;
	}

}

void MnistClose() {
	picture0.close();
	picture1.close();
	picture2.close();
	picture3.close();
	picture4.close();
	picture5.close();
	picture6.close();
	picture7.close();
	picture8.close();
	picture9.close();
}