function Vehicle (speed,color){
    if( ! (isFinite(speed) && isFinite(speed)) ) throw "Wrong Data type"
    Object.defineProperties(this,{
        speed:{value: speed},
        color:{value: color},
        turnLeft: function(){},
        turnRight:function(){},
        start:function(){},
        stop:function(){},
        goBackward:function(speed,accel){},
        goForward:function(speed,accel){},
    })
}
Vehicle.prototype.toString = function(){return "new implemintation"}
Vehicle.prototype.valueOf = function(){return "val"}

function Bicycle (speed,color){
    Vehicle.bind(this)(speed,color) // 1
    Object.defineProperties(this,{
        ringBell:function(){},
    })
}
Bicycle.prototype = Object.create(Vehicle.prototype) //2
Bicycle.prototype.constructor = Bicycle; //3


function MotorVehicle(speed,color,sizeE,licP) {
    if( ! (isFinite(speed) && typeof(speed) == String) ) throw "Wrong Data type"
    
    Vehicle.bind(this)(speed,color) // 1

    Object.defineProperties(this,{
        sizeOfEngine:{value: sizeE},
        licencePlate:{value: licP},
        getSizeOfEngine: function(){},
        getLicencePlate:function(){},
    })
}
MotorVehicle.prototype = Object.create(Vehicle.prototype) //2
MotorVehicle.prototype.constructor = MotorVehicle; //3


function DumpTruck(speed,color,loadC,numW,wight) {
    if( ! (isFinite(loadC) && isFinite(numW)  && isFinite(wight)) ) throw "Wrong Data type"
    
    MotorVehicle.bind(this)(speed,color,sizeE,licP) // 1
    
    Object.defineProperties(this,{
        loadCapacity:{value: loadC},
        numWheels:{value: numW},
        wight:{value: wight},
        lowerLoad: function(){},
        raiseLoad:function(){},
    })
}
DumpTruck.prototype = Object.create(Vehicle.prototype) //2
DumpTruck.prototype.constructor = DumpTruck; //3


function Car (speed,color,numD,numW,wight) {
    if( ! (isFinite(numD) && isFinite(numW)  && isFinite(wight)) ) throw "Wrong Data type"
    
    MotorVehicle.bind(this)(speed,color,sizeE,licP) // 1
    
    Object.defineProperties(this,{
        numOfDoors:{value: loadC},
        numWheels:{value: numW},
        wight:{value: wight},
        switchOnAirCon: function(){},
        getNumOfDoors:function(){},
    })
}
Car.prototype = Object.create(Vehicle.prototype) //2
Car.prototype.constructor = Car; //3