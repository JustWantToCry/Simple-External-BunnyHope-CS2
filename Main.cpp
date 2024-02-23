//Code created by JustWantToCry. You can find me in Discord
//For use this code just replace my memory Read/Write method on method from your source

#include <thread>
#include <iostream>

int main()
{

    auto localPlayer = memRead<uintptr_t>(baseAddress + 0x1729348); //dwLocalPlayerPawn offset
    auto dwForceJump = memRead<uintptr_t>(baseAddress + 0x17226E0); //dwForceJump offset
    auto m_fFlags = memRead<uintptr_t>(localPlayer + 0x3D4);//C_BaseEntity m_fFlags offset

    while (true)
    {
#pragma region BunnyHope

        if (!localPlayer) {
            continue;
        }

        if (GetAsyncKeyState(VK_SPACE)) {

            memWrite(dwForceJump, 65537); //Down key
            std::this_thread::sleep_for(std::chrono::milliseconds(1));
            memWrite(dwForceJump, 256); //Up key


        }

#pragma endregion

    }


    return 0;
}

