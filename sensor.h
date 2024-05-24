#include <iostream>
using namespace std;

class Sensor {
public:
    double _dato;
    int _lim;

    Sensor(int lim = 100) {
        _dato = 0.0;
        _lim = lim;
    }

    double leerDato() {
        return _dato;
    }

    virtual void actualizar() {
        _dato = (rand() % _lim * 10) / 10.0; // Genera un valor aleatorio para el dato del sensor
    }
};

class Sensor_Temp : public Sensor {
public:
    Sensor_Temp(int lim = 45) : Sensor(lim) {}

    void actualizar() override {
        _dato = rand() % 36 + 10; // Genera un valor aleatorio entre 10 y 45 para el dato de temperatura
    }
};

class Sensor_Hum : public Sensor {
public:
    Sensor_Hum(int lim = 100) : Sensor(lim) {}

    void actualizar() override {
        _dato = rand() % 101; // Genera un valor aleatorio entre 0 y 100 para el dato de humedad
    }
};

class Sensor_Precip : public Sensor {
public:
    Sensor_Precip(int lim = 50) : Sensor(lim) {}

    void actualizar() override {
        _dato = rand() % 51; // Genera un valor aleatorio entre 0 y 50 para el dato de precipitación
    }
};

class Sensor_Intensidad : public Sensor {
public:
    Sensor_Intensidad(int lim = 2000) : Sensor(lim) {}

    void actualizar() override {
        _dato = rand() % 2001; // Genera un valor aleatorio entre 0 y 2000 para el dato de intensidad
    }
};

class Medicion {
private:
    double _datoTemp;
    double _datoHum;
    double _datoPrecip;
    double _datoIntensidad;

public:
    Medicion(double datoTemp = 0.0, double datoHum = 0.0, double datoPrecip = 0.0, double datoIntensidad = 0.0) {
        _datoTemp = datoTemp;
        _datoHum = datoHum;
        _datoPrecip = datoPrecip;
        _datoIntensidad = datoIntensidad;
    }

    void actualizar(double datoTemp, double datoHum, double datoPrecip, double datoIntensidad) {
        _datoTemp = datoTemp;
        _datoHum = datoHum;
        _datoPrecip = datoPrecip;
        _datoIntensidad = datoIntensidad;
    }

    double obtenerDatoTemp() {
        return _datoTemp;
    }

    double obtenerDatoHum() {
        return _datoHum;
    }

    double obtenerDatoPrecip() {
        return _datoPrecip;
    }

    double obtenerDatoIntensidad() {
        return _datoIntensidad;
    }

    string mostrarDatos() {
        string datos = "Dato de temperatura: " + to_string(_datoTemp) + "\n";
        datos += "Dato de humedad: " + to_string(_datoHum) + "\n";
        datos += "Dato de precipitación: " + to_string(_datoPrecip) + "\n";
        datos += "Dato de intensidad: " + to_string(_datoIntensidad) + "\n";

        return datos;
    }
};
