//Headder for ATS Plugin
//Written by Tetsu Otter
#include <windows.h>

//DLL import��Z�k
#define DE extern "C" __declspec(dllexport)
//���̂��߂��Y�ꂽ���Ǔ���Ƃ�
#define SC __stdcall

#define PI_VERSION 0x00020000

struct Spec{
	int B = 0;	//�u���[�L�i��
	int P = 0;	//�m�b�`�i��
	int A = 0;	//ATS�m�F�i��
	int J = 0;	//��p�ő�i��
	int C = 0;	//�Ґ��ԗ���
};
struct State{
	double Z = 0;	//��Ԉʒu[m]
	float V = 0;	//��ԑ��x[km/h]
	int T = 0;		//0������̌o�ߎ���[ms]
	float BC = 0;	//BC����[kPa]
	float MR = 0;	//MR����[kPa]
	float ER = 0;	//ER����[kPa]
	float BP = 0;	//BP����[kPa]
	float SAP = 0;	//SAP����[kPa]
	float I = 0;	//�d��[A]
};
struct Hand{
	int B = 0;	//�u���[�L�n���h���ʒu
	int P = 0;	//�m�b�`�n���h���ʒu
	int R = 0;	//���o�[�T�[�n���h���ʒu
	int C = 0;	//�葬������
};
struct Beacon{
	int Num = 0;	//Beacon�̔ԍ�
	int Sig = 0;	//�Ή�����ǂ̌����ԍ�
	float X = 0;	//�Ή�����ǂ܂ł̋���[m]
	int Data = 0;	//Beacon�̑�O�����̒l
};
Hand handle;

DE void SC Load(void);
DE void SC Dispose(void);
DE int SC GetPluginVersion(void);
DE void SC SetVehicleSpec(Spec);
DE void SC Initialize(int);
DE Hand SC Elapse(State, int *, int *);
DE void SC SetPower(int);
DE void SC SetBrake(int);
DE void SC SetReverser(int);
DE void SC KeyDown(int);
DE void SC KeyUp(int);
DE void SC HornBlow(int);
DE void SC DoorOpen(void);
DE void SC DoorClose(void);
DE void SC SetSignal(int);
DE void SC SetBeaconData(Beacon);