#pragma once
class Pedestrian
{
public:
	Pedestrian(double speed, double area, double x, double y) {
		this->speed = speed;
		this->area = area;
		this->x = x;
		this->y = y;
	}

	double getSpeed() {
		return speed;
	}

	double getArea() {
		return area;
	}

	double getXCoordinate() {
		return x;
	}

	double getYCoordiante() {
		return y;
	}

	double setSpeed(double speed) {
		this->speed = speed;
	}

	double setArea(double area) {
		this->area = area;
	}

	double setXCoordinate(double x) {
		this->x = x;
	}

	double setYCoordiante(double y) {
		this->y = y;
	}

private:
	double speed;
	double area;
	double x;
	double y;
};

