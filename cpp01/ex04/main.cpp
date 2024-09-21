#include <iostream>
#include <fstream>
#include <string>

void replaceAndSave(const std::string& inputFile, const std::string& outputFile, const std::string& s1, const std::string& s2)
{
	std::ifstream inFile(inputFile);
	if (!inFile) {
		std::cerr << " Errore Impossibile aprire il file " << inputFile << " per la lettura. \n";
		return;
	}

	std::ofstream outFile(outputFile);
	if (!outFile) {
		std::cerr <<" Errore Impossibile aprire il file " << outputFile << " per la scrittura. \n";
		return;
	}

	std::string line;
	while(std::getline(inFile, line)) {
		size_t pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos) {
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
		outFile << line << '\n';
	}
	inFile.close();
	outFile.close();
}


int main(int argc, char* argv[]) {
	if (argc != 4) {
		std::cerr << "Prototipo: " << argv[0] << "<filename> <s1> <s2>\n";
		return 1;
	}
	std::string inputFile = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string outputFile = inputFile + ".replace";

	replaceAndSave(inputFile, outputFile, s1, s2);

	return 0;
}

