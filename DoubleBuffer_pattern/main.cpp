#include <string>
#include <iostream>
#include <Windows.h>

/*
harry가 맞을시 baldy을 때린다.
baldy가 맞을시 chump를 때린다.
chump가 맞을시 harry를 때린다.
*/

namespace Wrong
{
    class Actor {
    public:
        Actor(const char* name) : slapped_(false), name_(name) {}
        virtual ~Actor() {}
        virtual void update() = 0;
        void reset() { slapped_ = false; }
        void slap() {
            slapped_ = true;
        }
        bool wasSlapped() { return slapped_; }
        const std::string& name() const { return name_; }

    private:
        bool slapped_;
        std::string name_;
    };

    class Stage {
    public:
        void add(Actor* actor, int index) {
            actors_[index] = actor;
        }
        void update() {
            for (int i = 0; i < NUM_ACTORS; ++i) {
                std::cout << "Stage updates actor " << i << " (" << actors_[i]->name() << ")\r\n";
                actors_[i]->update();
                actors_[i]->reset();
            }
            std::cout << "Stage updates ends\r\n\n";
        }

    private:
        static const int NUM_ACTORS = 3;
        Actor* actors_[NUM_ACTORS];
    };

    class Comedian : public Actor {
    public:
        Comedian(const char* name) : Actor(name) {}
        void face(Actor* actor) { facing_ = actor; }
        virtual void update() {
            if (wasSlapped()) {
                std::cout << "  " << name() << " was slapped, so he slaps " << facing_->name() << std::endl;
                facing_->slap();
            }
            else {
                std::cout << "  " << name() << " was not slapped, so he does nothing\r\n";
            }
        }
    private:
        Actor* facing_;
    };
}

namespace True
{
    class Actor {
    public:
        Actor(const char* name) : name_(name) {}
        virtual ~Actor() {}
        virtual void update() = 0;
        void swap() {
            currentSlapped_ = nextSlapped_;
            nextSlapped_ = false;
        }
        void slap() { nextSlapped_ = true; }
        bool wasSlapped()
        {
            return currentSlapped_;
        }
        const std::string& name() const { return name_; }

    private:
        bool currentSlapped_ = false;
        bool nextSlapped_ = false;
        std::string name_;
    };

    class Stage {
    public:
        void add(Actor* actor, int index) {
            actors_[index] = actor;
        }
        void update() {
            std::cout << "Stage updates starts\r\n";
            for (int i = 0; i < NUM_ACTORS; ++i) {
                actors_[i]->update();
            }
            for (int i = 0; i < NUM_ACTORS; ++i) {
                actors_[i]->swap();
            }
            std::cout << "Stage updates ends\r\n";
        }

    private:
        static const int NUM_ACTORS = 3;
        Actor* actors_[NUM_ACTORS];
    };

    class Comedian : public Actor {
    public:
        Comedian(const char* name) : Actor(name) {}
        void face(Actor* actor) { facing_ = actor; }
        virtual void update()
        {
            if (wasSlapped())
            {
                std::cout << "  " << name() << " was slapped, so he slaps " << facing_->name() << std::endl;
                facing_->slap();
            }
            else {
                std::cout << "  " << name() << " was not slapped, so he does nothing\r\n";
            }
        }
    private:
        Actor* facing_;
    };
}

int main() 
{
    Wrong::Stage stagew;
    Wrong::Comedian* harryw = new Wrong::Comedian("Harry");
    Wrong::Comedian* baldyw = new Wrong::Comedian("Baldy");
    Wrong::Comedian* chumpw = new Wrong::Comedian("Chump");

    harryw->face(baldyw);
    baldyw->face(chumpw);
    chumpw->face(harryw);

    /*
    harry만 때렸는데 한프레임에 모든 배우의 행동이 변화가 되었다.
    배우의 맞은 상태와 때리는 상태를 순차적으로 업데이트 하여 해당 문제가 발생
    */
    stagew.add(harryw, 0);
    stagew.add(baldyw, 1);
    stagew.add(chumpw, 2);

    harryw->slap();
    stagew.update();
    stagew.update();
    stagew.update();
    stagew.update();
    stagew.update();

    system("cls");

    True::Stage stage;
    True::Comedian* harry = new True::Comedian("Harry");
    True::Comedian* baldy = new True::Comedian("Baldy");
    True::Comedian* chump = new True::Comedian("Chump");

    harry->face(baldy);
    baldy->face(chump);
    chump->face(harry);

    stage.add(harry, 0);
    stage.add(baldy, 1);
    stage.add(chump, 2);

    harry->slap();
    stage.update();
    stage.update();
    stage.update();
    stage.update();
    stage.update();
    stage.update();
    stage.update();

    int temp = 0;
    std::cin >> temp;

    return 0;
}