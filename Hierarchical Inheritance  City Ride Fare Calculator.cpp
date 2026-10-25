#include<iostream>
using namespace std;
class Ride {
	protected:
		float distancekm;
		float baseFare;
	public:
		Ride(float dis,float base) {
			distancekm=dis;
			baseFare=base;
		}
};
class EconomyRide:public Ride {
	public:
		EconomyRide(float dis,float base):Ride(dis,base){
		}
		float calculateFare() {
			return distancekm* 30 + baseFare;
		}
};
class PremiumRide:public Ride {
	public:
		PremiumRide(float dis,float base):Ride(dis,base){
			
		}
		float calculateFare() {
			return distancekm * 50 + baseFare + 200;
		}
};
int main(){
	EconomyRide R1(10,100);
	  float ER=R1.calculateFare();
	  cout<<"\nEconomy Ride : "<<ER;
	
	PremiumRide P1(10,100);
	float PR=P1.calculateFare();
	cout<<"\nPremium Ride : "<<PR;
return 0;
}