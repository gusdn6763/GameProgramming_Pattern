#include "Monster.h"

int main()
{
	std::vector<Breed> vMobList;

	json mobInfo;

    ifstream readFile("mob.json");

    if (readFile.is_open())
    {
        mobInfo = json::parse(readFile);

        std::wstring_convert<std::codecvt_utf8<wchar_t>> converter;
        for (int i = 0; i < mobInfo.size(); i++)
        {
            string tmpType = mobInfo[i]["Type"];
            wstring wtype = converter.from_bytes(tmpType);

            int health = mobInfo[i]["Health"];
            int power = mobInfo[i]["Power"];

           Breed tmpBreed(health, wtype);
           vMobList.push_back(tmpBreed);
        }
    }

    //Monster* mob = new Monster(vMobList[0]);
    //mob->그래픽 설정
    //mob->소환 함수
    //제대로 초기화 되지 않은 객체가 메모리에 존재
    
    //이런식으로 사용시 초기화 작업을 내부로 돌릴 수 있다. 
    Monster* mob = vMobList[0].NewMonster();
	return 0;
}