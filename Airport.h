//
// Created by Sena Vuvor on 23/11/2022.
//

#ifndef UNTITLED3_AIRPORTCPP_H
#define UNTITLED3_AIRPORTCPP_H

#endif //UNTITLED3_AIRPORTCPP_H

#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

class Airport {
public:
    string airportID;
    string airportName;
    string airportCity;
    string country;
    string IATA;
    string ICAO;
    double longitude;
    double latitude;

    static unordered_map<string, vector<Airport>> locationtoAirportsMap;
    static unordered_map<string, Airport> airportsMap;

    Airport(string ID, string name, string city, string country, string IATA, string ICAO, double airlong, double lat);

    /* Method declarations */
    string toString();
    string getAirportID();
    void setAirportID(string AirportID);
    void setIATA(string IATA);
    string getIATA() ;
    void setICAO(string ICAO);
    string getICAO() ;
    string getAirportCity();
    void setAirportCity(string airportCity);
    string getAirportName();
    void setAirportName(string airportName);
    string getCountry();
    void setCountry(string country);
    double getLongitude();
    void setLongitude(double longitude);
    double getLatitude();
    void setLatitude(double latitude);

    static void readAirportFile(string airportFile);
    static Airport getObject(string IATA);
    static vector<Airport> getAirport(string source);
};
