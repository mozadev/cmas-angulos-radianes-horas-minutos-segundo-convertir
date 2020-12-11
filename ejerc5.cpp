#include<iostream>
#include<conio.h>

using namespace std;

int main()
{


	int horas;
	int minutos;
	int segundos;
	float tiempo;
	float horasreal;
	int horasentero;
	float minutosreal;
	int minutosentero;
	double segundosreal;
	int segundosentero;
	
	
    cout << "ingrese angulo en radianes: ";
	cin >> horas;
	cout << "ingrese angulo en radianes: ";
	cin >> minutos;
	cout << "ingrese angulo en radianes: ";
	cin >> segundos;

	tiempo = horas*3600+minutos*60+segundos+1;

	horasreal = tiempo / 3600;
	horasentero = horasreal;
	minutosreal = (horasreal - horasentero)*60;
	minutosentero = minutosreal;
	segundosreal = (minutosreal - minutosentero) * 60;
	segundosentero = segundosreal;

	

	cout << "tiempo: " << tiempo << endl;
	cout << "horas: " << horasentero << endl;
	cout << "minutos: " << minutosentero << endl;
	cout << "segundos : " << segundosreal << endl;




	_getch();











}