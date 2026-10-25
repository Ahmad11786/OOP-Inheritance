#include<iostream>
using namespace std;
class Order{
	protected:
		int ID;
		int subTotal;
	public:
		Order(int id,int total){
			ID=id;
			subTotal=total;
		}
};
class DiscountedOrder : public Order {
protected:
    float Discount;

public:
    DiscountedOrder(float dis, int i, int t) : Order(i, t) {
        Discount = dis;
    }
};
class expressOrder:public DiscountedOrder{
	private:
		double deliveryFee;
		public:
			expressOrder(int i,int t,float d,double delivery):
			DiscountedOrder(d,i,t){
				deliveryFee=delivery;
			}
			
		void ExpressOrder(){
			double discount=Discount*subTotal /100.0;
			double payable = subTotal - discount + deliveryFee;
			
			cout<<"\n---------- Order Information ----------";
			cout<<"\nID : "<<ID;
			cout<<"\nSubTotal : "<<subTotal;
			cout<<"\nDiscount Amount : "<<discount;
			cout<<"\nDelivery Fee : "<<deliveryFee;
			cout<<"\nFinal Payable Amount : "<<payable;
		}
};
int main(){
	expressOrder O1(301,2000,10,150);
	
	O1.ExpressOrder();
	return 0;
}




