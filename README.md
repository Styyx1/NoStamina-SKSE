# NoStamina-SKSE
based on: https://github.com/malus741/NoStaminaConsumptionOutsideCombat  and changed + updated for GOG

## Requirements
* [CMake](https://cmake.org/)
	* Add this to your `PATH`
* [PowerShell](https://github.com/PowerShell/PowerShell/releases/latest)
* [Vcpkg](https://github.com/microsoft/vcpkg)
	* Add the environment variable `VCPKG_ROOT` with the value as the path to the folder containing vcpkg
* [Visual Studio Community 2019](https://visualstudio.microsoft.com/)
	* Desktop development with C++
* [CommonLibNG](https://github.com/CharmedBaryon/CommonLibSSE-NG)


## Register Visual Studio as a Generator
* Open `x64 Native Tools Command Prompt`
* Run `cmake`
* Close the cmd window

## Building
```
git clone https://github.com/chri3i/NoStamina-SKSE
cd NoStamina-SKSE
cmake --preset skyrim
```
## License
[MIT](LICENSE)
