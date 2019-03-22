#include <iostream>
#include <cmath>

int main(){
	
	float bohr_Radius= 5.29E-11;
	float r= bohr_Radius*2;
	int Z,S,Zf;
	double answer;
	std::cout<<"non-valence electrons:";
	std::cin>>S;
	std::cout<<std::endl;	std::cout<<"atomic no.:";
	std::cin>>Z;
	std::cout<<std::endl;
	Zf=Z-S;
	/*solution divided into 3 p1,p2 & p3
	p1 is 1/root6, p2 is p*Z^3/2 and p3 is e^-p/2
	*/
	
	double p1= 1/(sqrt(6)*2);
	double rho= Zf*r;
	double p2=rho*(pow(Zf,(3/2)));
	double p3=exp(-rho/2);
	
	answer=p1*p2*p3;
	std::cout<<"answer:"<<answer<<std::endl;
	
	return 0;
	
}
