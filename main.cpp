#include<stdio.h>

#include"IShape.h"
#include"Circle.h"
#include"Rectangle.h"

#include<list>


int main(void) {

	//const char* stations[28] = {
	//	"Tokyo",
	//	"Kanda",
	//	"Akihabara",
	//	"Okatimati",
	//	"Ueno",
	//	"Uguisudani",
	//	"Nippori",
	//	//"Nishinippori",
	//	"Tabata",
	//	"Komagome",
	//	"Sugamo",
	//	"Ootuka",
	//	"Ikebukuro",
	//	"Mejiro",
	//	"Takadanobaba",
	//	"Shin-Ookubo",
	//	"Shinjuku",
	//	"Yoyogi",
	//	"Harajuku",
	//	"Shibuya",
	//	"Ebisu",
	//	"Meguro",
	//	"Gotanda",
	//	"Oosaki",
	//	"Shinagawa",
	//	//"Takanawa Gateway",
	//	"Tamachi",
	//	"Hamamatsucho",
	//	"Shimbashi",
	//	"Yurakucho"
	//};

	std::list<const char*>station{
		"Tokyo",
		"Kanda",
		"Akihabara",
		"Okatimati",
		"Ueno",
		"Uguisudani",
		"Nippori",
		//"Nishinippori",
		"Tabata",
		"Komagome",
		"Sugamo",
		"Ootuka",
		"Ikebukuro",
		"Mejiro",
		"Takadanobaba",
		"Shin-Ookubo",
		"Shinjuku",
		"Yoyogi",
		"Harajuku",
		"Shibuya",
		"Ebisu",
		"Meguro",
		"Gotanda",
		"Oosaki",
		"Shinagawa",
		//"Takanawa Gateway",
		"Tamachi",
		"Hamamatsucho",
		"Shimbashi",
		"Yurakucho"
	};

	/*for (int i = 0; i < 30; i++) {
		station.push_back(stations[i]);
	}*/

	printf("1970年の山手線\n");
	for (auto& stati : station) {
		printf("%s\n", stati);
	}

	

	printf("\n");
	printf("2019年の山手線\n");
	const char* nishinippori = "Nishi-Nippori";
	
	for (std::list<const char*>::iterator itr = station.begin(); itr != station.end(); ++itr) {
		if (*itr == "Tabata") {
			itr = station.insert(itr, nishinippori);;
			itr++;
		}
	}
	for (auto& stati : station) {
		printf("%s\n", stati);
	}

	printf("\n");
	printf("2022年の山手線\n");
	const char* takanawaGateway = "Takanawa GateWay";
	for (std::list<const char*>::iterator itr = station.begin(); itr != station.end(); ++itr) {
		if (*itr == "Tamachi") {
			itr = station.insert(itr, takanawaGateway);
			itr++;
		}
	}

	for (auto& stati : station) {
		printf("%s\n", stati);
	}

	return 0;
}