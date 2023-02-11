#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

int main()
{
    map<string, string> coutresAndCapitals;

    // coutresAndCapitals.insert(pair<string, string>("Poland", "Warsaw"));
    // or
    coutresAndCapitals.insert({"Poland", "Warsaw"});

    coutresAndCapitals.insert(pair<string, string>("Germany", "Berlin"));

    // coutresAndCapitals.insert(pair<string, string>("Czechia", "Prague"));
    // or
    coutresAndCapitals.emplace("Czechia", "Prague");

    //#######################################################################################################################################


    /*
    cout << coutresAndCapitals.at("Poland") << endl;
    // Warsaw

    cout << coutresAndCapitals.at("Czechia") << endl;
    // Prague

    cout << coutresAndCapitals.at("Slovakia") << endl;
    // error

    // cout << coutresAndCapitals["Slovakia"] << endl;
    // // none

    cout << coutresAndCapitals["Czechia"] << endl;
    // Prague    */

    //#######################################################################################################################################

    // for (map<string, string>::iterator it = coutresAndCapitals.begin(); it!= coutresAndCapitals.end(); ++it) // more efficient than it++
    //     cout << it -> first << " - " << it -> second << endl;

    for (auto it = coutresAndCapitals.begin(); it!= coutresAndCapitals.end(); ++it) // more efficient than it++
        cout << it -> first << " - " << it -> second << endl;

    // Czechia - Prague
    // Germany - Berlin
    // Poland - Warsaw

    //#######################################################################################################################################

    // coutresAndCapitals["Poland"] = "Cracow"; // less safety
    // or
    coutresAndCapitals.at("Poland") = "Cracow";

    for (auto it = coutresAndCapitals.begin(); it!= coutresAndCapitals.end(); ++it) // more efficient than it++
        cout << it -> first << " - " << it -> second << endl;

    // Czechia - Prague
    // Germany - Berlin
    // Poland - Cracow

    //#######################################################################################################################################

    coutresAndCapitals.erase("Poland");

    for (auto it = coutresAndCapitals.begin(); it!= coutresAndCapitals.end(); ++it) // more efficient than it++
        cout << it -> first << " - " << it -> second << endl;

    // Czechia - Prague
    // Germany - Berlin

    //#######################################################################################################################################

    coutresAndCapitals.clear();

    for (auto it = coutresAndCapitals.begin(); it!= coutresAndCapitals.end(); ++it) // more efficient than it++
        cout << it -> first << " - " << it -> second << endl;

    // none

    //#######################################################################################################################################
}