#pragma once

// Internal Libraries
#include <iostream>
#include <unordered_set>
#include <fstream>
#include <sstream>
#include <regex>
#include <stack>
#include <queue>
#include <ctime>
#include <sstream>
#include <thread>

// External Libraries
#include <nlohmann/json.hpp>
using json = nlohmann::json; // Using json type


// File stream
bool saveStringToFile(const std::string& text, const std::string& filename);
	// Save string to file

bool loadStringFromFile(std::string& content, const std::string& filename);
	// Load string from file

bool loadFileJSON(const std::string& filename, json& config);
	// Load json file





// Links
bool openLink(const std::string& url);
	// Open given link

bool checkInternet();
	// Check internet connection

bool checkIPLocation(std::string ip);
	// Check IP location



// String 
void replaceDelimitersWithSpace(std::string& str);
	// Use in stringstream

bool containsString(const std::vector<std::string>& vec, const std::string& str);
	// Check Vector contain given string

std::string extractEmail(const std::string& input);
	// Function to extract email address from a string

bool checkIPAddress(const std::string ip);
	// Check ip address

bool getWordsFromString(std::vector<std::string>& vec, std::string& str);
	// Get any words in a string


