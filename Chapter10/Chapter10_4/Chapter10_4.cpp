// Chapter10_4.cpp : 제휴 관계 (Association)
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Doctor; //전방 선언, 컴파일러는 Patient클래스에서 Doctor클래스를 모름.

class Patient
{
private:
	string m_name;
	vector<Doctor*> m_doctors; //어떤 의사들을 만나는지 기록

public:
	Patient(string name_in)
		: m_name(name_in)
	{}

	// 환자는 어떤 의사가 있는지 알아야 하므로
	void addDoctor(Doctor* new_doctor)
	{
		m_doctors.push_back(new_doctor);
	}

	// 만나야할 의사들 출력 
	void meetDoctors();


	friend class Doctor;
};

class Doctor
{
private:
	string m_name;
	vector<Patient*> m_patients; //진료 환자 목록

public:
	Doctor(string name_in)
		: m_name(name_in)
	{}

	//의사는 어떤 환자가 있는지 알아야 하므로
	void addPatient(Patient* new_patient)
	{
		m_patients.push_back(new_patient);
	}

	void meetPatients()
	{
		for (auto& ele : m_patients)
		{
			cout << "Meet patient : " << ele->m_name << endl;
			//friend 클래스라서 ->m_name으로 접근이 가능해진다
		}
	}

	friend class Patient; // patient에서 doctor의 멤버를 직접접근이 가능해짐 
};

// 만나야할 의사들 출력 
void Patient::meetDoctors() 
{
	for (auto& ele : m_doctors)
	{
		cout << "Meet doctor : " << ele->m_name << endl;
		//friend 클래스라서 ->m_name으로 접근이 가능해진다
	}
}

int main()
{
	Patient* p1 = new Patient("Jan Jan");
	Patient* p2 = new Patient("Dash");
	Patient* p3 = new Patient("Violet");

	Doctor* d1 = new Doctor("Doctor K");
	Doctor* d2 = new Doctor("Doctor L");

	p1->addDoctor(d1);
	d1->addPatient(p1);

	p2->addDoctor(d2);
	d2->addPatient(p2);

	p2->addDoctor(d1);
	d1->addPatient(p2);

	//patients meet doctors
	p1->meetDoctors(); // p1이 어떤 의사들 만나는지

	//doctors meet patients
	d1->meetPatients();

	//deletes
	delete p1;
	delete p2;
	delete p3;

	delete d1;
	delete d2;

	return 0;

}