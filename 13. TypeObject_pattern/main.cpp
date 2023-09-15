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
    //mob->�׷��� ����
    //mob->��ȯ �Լ�
    //����� �ʱ�ȭ ���� ���� ��ü�� �޸𸮿� ����
    
    //�̷������� ���� �ʱ�ȭ �۾��� ���η� ���� �� �ִ�. 
    Monster* mob = vMobList[0].NewMonster();
	return 0;
}