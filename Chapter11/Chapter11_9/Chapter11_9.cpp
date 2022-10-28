// Chapter11_9.cpp : 다중 상속
#include <iostream>
using namespace std;

class USBDevice
{
private:
	long m_id;

public:
	USBDevice(long id) : m_id(id) {} //초기화

	long getID() { return m_id; }

	void plugAndPlay() {} //usb에 존재할 수 있는 함수
};

class NetworkDevice
{
private:
	long m_id;

public:
	class NetworkDevice(long id) : m_id(id) {}

	long getID() { return m_id; }

	void networking() {}
};

class USBNetworkDevice : public USBDevice, public NetworkDevice
{
public:
	USBNetworkDevice(long usb_id, long net_id)
		:USBDevice(usb_id), NetworkDevice(net_id)
	{}
};

int main()
{
	USBNetworkDevice my_device(3.14, 6.022);

	my_device.networking();
	my_device.plugAndPlay();

	//my_device.getID(); 모호성
	//my_device.USBDevice::getID(); //클래스 표기

	return 0;
}