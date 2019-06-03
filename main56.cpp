#include <iostream>

using namespace std;

class loginManager{
	public:
		string userNameAttempt;
		string passWordAttempt;
		loginManeger(){
			accessGranted = 0;
			
			
		}
		void login(){
			
			cout << "sifrenizi ve kullanici adinizi girmeniz gerekir.\nUsername:";
			cin >> userNameAttempt;
			if (userNameAttempt==userName){
				
					cout << "Password:";
					cin >> passWordAttempt;
					
					
					
					if(passWordAttempt==passWord){
						cout << "hey, dogru.";

					
					}
					
			}
					
					
					}
					
					private:
						string passWord = "setlocale";
						string userName = "devc++@outlook.com";
						bool accessGranted;
		
		
		
};

int main(){
	
  loginManager loginManagerObj;
  loginManagerObj.login();
	

	
	
	
}
