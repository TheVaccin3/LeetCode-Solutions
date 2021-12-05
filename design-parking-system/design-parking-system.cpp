class ParkingSystem {
public:
    int L, M, S;
    ParkingSystem(int big, int medium, int small) {
        L = big;
        M = medium;
        S = small;
    }
    
    bool addCar(int carType) {
        if(carType == 1 && --L <0){
            return false;
        }
        else if(carType == 2 && --M <0){
            return false;    
        }
        else if(carType == 3 && --S <0){
            return false;
        }
        return true;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */