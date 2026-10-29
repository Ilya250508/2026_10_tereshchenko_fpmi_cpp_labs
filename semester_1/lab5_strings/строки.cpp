#include <iostream>
#include <string>

int nod(int a, int b) {
	while (b) {
		a %= b;
		std::swap(a, b);
	}
	return a;
}

int main() {

	std::string s = "1/2|4/7|3/6|4/12";
	std::string neww;
	std::string result = " ";
	int len = s.size();
	size_t razd; 
	

	while ((razd = s.find('|')) != std::string::npos) {
		std::string neww = s.substr(0, razd);
		s.erase(0, razd+1);
		size_t slash = neww.find('/');
		if (slash != std::string::npos) {
			std::string chisl = neww.substr(0, slash);
			std::string znam = neww.substr( slash+1);

			int chislitel = std::stoi(chisl);
			int znamenatel = std::stoi(znam);

			int delitel = nod(chislitel, znamenatel);

			chislitel /= delitel;
			znamenatel /= delitel;

			if (!result.empty()) {
				result += "|";
			}
			result += std::to_string(chislitel) + "/" + std::to_string(znamenatel);
		}

	} 
	if (!s.empty()) {
		std::string neww = s;
		size_t slash = neww.find('/');
		if (slash != std::string::npos) {
			std::string chisl = neww.substr(0, slash);
			std::string znam = neww.substr(slash + 1);

			int chislitel = std::stoi(chisl);
			int znamenatel = std::stoi(znam);

			int delitel = nod(chislitel, znamenatel);

			chislitel /= delitel;
			znamenatel /= delitel;

			if (!result.empty()) {
				result += "|";
			}
			result += std::to_string(chislitel) + "/" + std::to_string(znamenatel);
		}
	}

	

	std::cout  << result << std::endl;

	return 0;


}