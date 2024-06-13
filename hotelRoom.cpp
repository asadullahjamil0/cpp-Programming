#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int roomsOnFloor = 0;
    int totalRooms = 0;
    int totalFloors = 0;
    int occupiedRoomsOnFloor = 0;
    int totalOccupiedRooms = 0;
    float occupacyPercentage = 0.0;

    cout << "Enter Floors in hotel: ";
    cin >> totalFloors;
    while (totalFloors < 1)
    {
        cout << "Floors cant be less than 1.Please enter number again: ";
        cin >> totalFloors;
    }

    for (int i = 1; i <= totalFloors; i++)
    {
        if (i != 13)
        {
            cout << "Please enter the rooms on floor "<<i<<": ";
            cin >> roomsOnFloor;

            while (roomsOnFloor < 10)
            {
                cout << "Rooms must be atleast 10.Please re-enter: ";
                cin >> roomsOnFloor;
            }
        }
        cout << "How many rooms are occupied: ";
        cin >> occupiedRoomsOnFloor;
        totalRooms += roomsOnFloor;
        totalOccupiedRooms += occupiedRoomsOnFloor;
    }
    occupacyPercentage = (totalOccupiedRooms * 100) / totalRooms;

    cout << "Hotel has total of " << totalFloors << " floors" << endl;
    cout << "Hotel has total of " << totalRooms << " rooms" << endl;
    cout << "There are " << totalOccupiedRooms << " occupied rooms" << endl;
    cout << "There are " << totalRooms - totalOccupiedRooms << " rooms available" << endl;
    cout << "Percentage of occupied rooms is " << setprecision(2) << fixed << occupacyPercentage << "$";
}