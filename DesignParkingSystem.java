class ParkingSystem {

    int[] parking;
    public ParkingSystem(int big, int medium, int small) {
        parking = new int[3];
        parking[0] = big;
        parking[1] = medium;
        parking[2] = small;
    }
    
    public boolean addCar(int carType) {
        if(parking[carType-1] > 0){parking[carType-1]--;return true;}
        return false;
    }
}

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem obj = new ParkingSystem(big, medium, small);
 * boolean param_1 = obj.addCar(carType);
 */
