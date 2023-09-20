#include <iostream>
using namespace std;

int main() {

	char employed;
	cout << "Are you employed? (y/n)";
	cin >> employed;
	//assign employed to the lower case version of employed
	employed = tolower(employed);

	if (employed == 'y') {
		//true branch
		
		char recentGrad;
		cout << "have you graduated? (y/n)";
		cin >> recentGrad;
		recentGrad = tolower(recentGrad);

		if (recentGrad == 'y'){
			//inner true branch
			cout << "You Qualify for the special interest rate\n";

		}else {
			//inner false branch
			cout << "You Must have Graduated in the past two years to qualify";
		}

	}
	else {
		//false branch
		cout << "You must be employed to qualify";
	}

	return 1;

}