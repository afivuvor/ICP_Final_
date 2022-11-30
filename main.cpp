#include <iostream>
using namespace std;


#include "Route.h"
#include "Airport.h"

unordered_map<string, vector<Route>> Route::flights = *new unordered_map<string, vector<Route>>;

unordered_map<string, string> Route::parents = *new unordered_map<string, string>;

unordered_map<string, vector<Airport>> Airport::airports = *new unordered_map<string, vector<Airport>>;

unordered_map<string, Airport> Airport::codes = *new unordered_map<string, Airport>;

unordered_map<string, vector<Route>> Route::routes = *new unordered_map<string, vector<Route>>;


int main() {
    Route::findRoute("test.txt");
}


