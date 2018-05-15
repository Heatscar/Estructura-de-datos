#include <iostream>
#include <queue> // biblioteca que implementa la cola
#include <sstream> // para transformar numeros a string
#include <ctime> 
using namespace std;

int main(int argc, char const *argv[]){
	
	queue<string> impressions;

	int seconds = 60;
	int pc1 = 5;
	int pc2 = 10;
	int pc3 = 15;


	for (int i = 1; i <= seconds; ++i){
		stringstream ss; 
		ss << i; // pasar el binario del valor actual de "i"
		// que funcion tiene pasar el binario? que al ser un stream sin formato 1 y 0 lo puedes castear a voluntad
		
		if(i%pc1 == 0)
			impressions.push("PC A Time: " + ss.str());

		if(i%pc2 == 0)
			impressions.push("PC B Time: " + ss.str());

		if(i%pc3 == 0)
			impressions.push("PC C Time: " + ss.str());
	}

	while(!impressions.empty()){
		cout << impressions.front() << endl;
		impressions.pop();
	}
	return 0;
}
