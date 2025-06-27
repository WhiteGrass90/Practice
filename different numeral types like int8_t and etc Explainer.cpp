#include <iostream>
#include <cstdint>
using namespace std;

int main() {
    // These are used for keeping the values same throughout different Machines.
    // Like a container that doesnt change.
    
    uint8_t pillsinBOX = 255;    //0 to 255 {1 Byte}
    uint32_t gaon = 454545454;   // 0 to 4,294,967,295 {4 bytes}
    int16_t chota_gaon = 31220;  //-327,68 to +32,767  {2 Bytes}
    int64_t Brahmand = 164654684984565;  // Very Large number {8 Bytes}
    
    cout << static_cast<int>(pillsinBOX)<< " Goliyan\n";
    cout << static_cast<int>(gaon)<< " Ye to Desh hai bc.\n";
    cout << static_cast<int>(chota_gaon)<< " Thoda Chota gaon \n";
    cout << static_cast<int64_t>(Brahmand)<< " Milky way Hai brooo \n";   //We have to use int64_t coz int is 4 bytes and the number i gave is of 8bytes.
    
    return 0;
}