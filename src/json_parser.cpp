#include <string>
#include <map>


using std::map;
using std::string;


class JsonParser {

    private:

        string jsonString;

        string jsonFilePath;


    public:

        map<string, string> parseJsonString(string jsonString);

        map<string, string> parseJsonFile(string jsonFilePath);






};

map<string, string> JsonParser::parseJsonString(string jsonString) {
    // map<string, string> jsonMap;
    return 0;
}

map<string, string> JsonParser::parseJsonFile(string jsonFilePath) {
    // map<string, string> jsonMap;
    return 0;
}
