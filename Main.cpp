#include <thread>
#include <iostream>

int main()
{

    auto localPlayer = VARS::memRead<uintptr_t>(VARS::baseAddress + 0x1729348);//

    while (true)
    {
#pragma region BunnyHope

        std::this_thread::sleep_for(std::chrono::milliseconds(2));

        if (!localPlayer) {
            continue;
        }

        if (GetAsyncKeyState(VK_SPACE) && m_fFlags & (1 << 0)) {

            VARS::memWrite(VARS::baseAddress + 0x17226E0, 65537);
            std::this_thread::sleep_for(std::chrono::milliseconds(1));
            VARS::memWrite(VARS::baseAddress + 0x17226E0, 256);


        }

#pragma endregion

    }


    return 0;
}

