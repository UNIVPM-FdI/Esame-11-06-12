	#include <iostream>
    #include <fstream>
	using namespace std; 
	char c;
	bool prendilo;
	fstream input, output; 
 int main() 
{
	input.open("file.html", ios::in); //legge il file.html
	output.open("file.txt", ios::out); //scrive sul file.txt
	while(input.get(c)) //legge un carattere alla volta
	{
	if (c == '<') prendilo = false; // se c è uguale al carattere '<' restituisce il valore false
	if (c == '>') prendilo = true;	// se c è uguale al carattere '>' restituisce il valore true
	if (prendilo == true && c != '>') output << c; // se il valore
		}
	input.close();
    output.close();
	return 0; 
	 }




