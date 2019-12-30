# include <Arduino.h>
# include <analogWrite.h>

class Led {
    private:
        int pin;
    
    public:
    
        Led(){
            this->pin = 0;
            init();
        }


        Led(int pin){
            this->pin = pin;
            init();
        }
    
    void init(){
        pinMode(pin, OUTPUT);
        off();
    }

    void on(){
        digitalWrite(pin, HIGH);
    }

    void off(){
        digitalWrite(pin, LOW);
    }
};