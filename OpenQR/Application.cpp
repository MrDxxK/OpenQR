#include<iostream>
#include<vector>
#include <complex>
#include <cmath>
#include"core.h"
#include "SupFunction.h"
using namespace std;
using namespace openqr;

int main()
{
    

   complex<double>a[4];
    vector<complex<double>>b,c;
    for(int i=0;i<5;++i)
        a[i]=i+1;
    b=FastFourierTransform(a,5,fourier_transform_direction::ftdSpectrumToFunction);
    for(int i=0;i<b.size();++i)
        cout<<"b["<<i<<"]  :"<<b[i]<<endl;
    cout<<endl;
    c=FastFourierTransform(&b[0],b.size(),fourier_transform_direction::ftdFunctionToSpectrum);
    for(int i=0;i<c.size();++i)
        cout<<"c["<<i<<"]  :"<<c[i]<<endl;

//	QRCode qr;
//	ImageIO io;
//    Matrix<int>temp=qr.BitConvertToGray();
//	io.ImageSave("func.bmp", temp);
//	DataEncoder da;
//	string encodeWith2_QStandard = da.Encode2_Q("HEllo worLD");
//	const int MessageLength = 22;
//	char EncodeCoeff[22];
//	for (int i = 0; i < 22; ++i)
//	{
//		string temp = encodeWith2_QStandard.substr(8 * i, 8);
//		bitset<8>tempBit(temp);
//		cout << temp << "  " << tempBit.to_ulong() << endl;
//		EncodeCoeff[i] = tempBit.to_ulong();
//	}
//	const int EccLength = 22;
//	char* encoded = new char[EccLength + MessageLength];
//	RS::ReedSolomon<MessageLength, EccLength> rsencoder;
//	rsencoder.Encode(EncodeCoeff, encoded);
//
//	int standardEncoded[44];
//	for (int i = 0; i < 44; ++i)
//	{
//		standardEncoded[i] = (encoded[i] + 256) % 256;
//	}
//
//	for (int i = 0; i < 44; ++i)
//	{
//		cout << standardEncoded[i] << endl;
//	}
//	delete[] encoded;
	return 0;
}