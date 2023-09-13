#include <vector>
#include <iostream>
#include "Monster.h"
#include <xlocbuf>
#include <codecvt>

using namespace std;

int main()
{
	std::vector<Monster> vMobList;

	json mobInfo;

    ifstream readFile("mob.json");

    if (readFile.is_open())
    {
        mobInfo = json::parse(readFile);

        for (int i = 0; i < mobInfo.size(); i++)
        {
            std::wstring_convert<std::codecvt_utf8<wchar_t>> converter;
            string tmpType = mobInfo[i]["Type"];
            wstring wtype = converter.from_bytes(tmpType);

            int health = mobInfo[i]["Health"];
            int power = mobInfo[i]["Power"];

           // vMobList.push_back();
        }
    }
	return 0;
}