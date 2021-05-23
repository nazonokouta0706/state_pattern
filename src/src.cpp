#include <iostream>
#include <thread>


enum State
{
    STATE_CREDIT,
    STATE_TITLE,
    STATE_OPENING,
    STATE_DEMO
};


int main()
{

    State state;
    state = STATE_CREDIT;

    do
    {
        switch (state)
        {
        case STATE_CREDIT:
            std::cout << "credit\n";
            std::this_thread::sleep_for(std::chrono::seconds(3));// 3 秒待つ

        case STATE_TITLE:
            std::cout << "title\n";
            std::this_thread::sleep_for(std::chrono::seconds(3));// 3 秒待つ

        case STATE_OPENING:
            std::cout << "opening\n";
            std::this_thread::sleep_for(std::chrono::seconds(5));// 5 秒待つ

        case STATE_DEMO:
            std::cout << "demo\n";
            std::this_thread::sleep_for(std::chrono::seconds(5));// 5 秒待つ

        }

    } while (true);
    
}

