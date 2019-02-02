//Program to solve the magic table
#include <iostream>
using namespace std;

int main(){
	int a1, a2, a3, a4, a5, a6, a7, a8, a9, i;
	i=0;
	cout<<"Hello! My name is Orouba and those are the possible solutions\n";
	cout<<"*****************\n";
	a1=1;
	while (a1<=9){
		a2=1;
		if(a2!=a1)	
			while(a2<=9){
				a3=1;
				if(a3!=a2 && a3!=a1)
					while(a3<=9){
						a4=1;
						if(a4!=a3 && a4!=a2 && a4!=a1)
							while(a4<=9){
							a5=1;
								if(a5!=a4 && a5!=a3 && a5!=a2 && a5!=a1)
									while(a5<=9){
										a6=1;
										if(a6!=a5 && a6!=a4 && a6!=a3 && a6!=a2 && a6!=a1)	
											while(a6<=9){
												a7=1;
												if(a7!=a6 && a7!=a5 && a7!=a4 && a7!=a3 && a7!=a2 && a7!=a1)
													while(a7<=9){
														a8=1;
														if(a8!= a7 && a8!=a6 && a8!=a5 && a8!=a4 && a8!=a3 && a8!=a2 && a8!=a1)	
															while(a8<=9){
															a9=1;
															if(a9!= a8 && a9!=a7 && a9!=a6 && a9!=a5 && a9!=a4 && a9!=a3 && a9!=a2 && a9!=a1)
																while(a9<=9){
												//if(a9!= a8 && a9!=a7 && a9!=a6 && a9!=a5 && a9!=a4 && a9!=a3 && a9!=a2 && a9!=a1)
												//	if(a8!= a7 && a8!=a6 && a8!=a5 && a8!=a4 && a8!=a3 && a8!=a2 && a8!=a1)	
													//	if(a7!=a6 && a7!=a5 && a7!=a4 && a7!=a3 && a7!=a2 && a7!=a1)	
														//	if(a6!=a5 && a6!=a4 && a6!=a3 && a6!=a2 && a6!=a1)	
															//	if(a5!=a4 && a5!=a3 && a5!=a2 && a5!=a1)
																	//if(a4!=a3 && a4!=a2 && a4!=a1)
																	//	if(a3!=a2 && a3!=a1)
																			//if(a2!=a1)											
																				if(a1+a2+a3==15 && a4+a5+a6==15 && a7+a8+a9==15 && a1+a4+a7==15 && a2+a5+a8==15 && a3+a6+a9==15 && a1+a5+a9==15 && a3+a5+a7==15 ){
																					cout<<a1<<"\t"<<a2<<"\t"<<a3<<endl;
																					cout<<a4<<"\t"<<a5<<"\t"<<a6<<endl;
																					cout<<a7<<"\t"<<a8<<"\t"<<a9<<endl;
																					cout<<"*****************"<<endl;
																					i++;
													}
												a9++;
												
												}	
										a8++;
										}				
									a7++;
										}
								a6++;
										
							}
							a5++;					
						}
						a4++;	
					}
					a3++;
				}
				a2++;

				}
		a1++;
	}
	cout<<"Thank you!\n";
	cout<<i;
	
	return 0;
	
}
