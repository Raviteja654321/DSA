class ParkingSystem {
private:
        int big_=0;
        int medium_=0;
        int small_=0;
public:
    ParkingSystem(int big, int medium, int small) {
         big_=big;
         medium_=medium;
         small_=small;
    }
    
    bool addCar(int carType) {
        if(carType==1)
        {
            if(big_)
            {
                big_--;
                return true;
            }
        }
        else if(carType==2)
        {
            if(medium_)
            {
                medium_--;
                return true;
            }
        }
        else 
        {
            if(small_)
            {
                small_--;
                return true;
            }
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
