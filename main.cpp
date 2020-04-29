
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
        ifstream wejscie;
        ofstream wyjscie;
        wejscie.open("wej.txt");
        wyjscie.open("wyj.json");
        int a =0;
        int b [1000];
        
        if (wejscie.good()) {
        	wyjscie<<"[";
        	while  (!wejscie.eof()) {
        		wejscie >> b[a++];
				}
            while (a!=-1) {
            	
            
            		
					wyjscie << " {  \"liczba\" : \"" << b[a--]<<"\"}";
					
					if(a!=-1){
						wyjscie << ",";
						
					}
						
				
            		
				
				
				
				
				
				
            }
            wyjscie<<"]";
        }
       
        wejscie.close();
        wyjscie.close();
    	system("PAUSE");
        return 0;

}
