class ParkingSystem {
public:
    ParkingSystem(int big, int medium, int small)
        : m_big(big)
        , m_medium(medium)
        , m_small(small) {

    }

    bool addCar(int carType) {
        if (carType == 1 && m_big >= 1)
        {
            --m_big;
            return true;
        }
        if (carType == 2 && m_medium >= 1)
        {
            --m_medium;
            return true;
        }
        if (carType == 3 && m_small >= 1)
        {
            --m_small;
            return true;
        }
        return false;
    }
private:
    int m_big;
    int m_medium;
    int m_small;
};
